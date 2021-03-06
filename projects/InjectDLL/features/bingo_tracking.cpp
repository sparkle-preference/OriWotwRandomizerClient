#include <csharp_bridge.h>
#include <Il2CppModLoader/interception_macros.h>
#include <features/messages.h>

STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, Activate, (app::String* identifier)) {
    auto cident = convert_csstring(identifier);
    csharp_bridge::on_teleporter_activated(cident.c_str());
    SavePedestalController::Activate(identifier);
}
