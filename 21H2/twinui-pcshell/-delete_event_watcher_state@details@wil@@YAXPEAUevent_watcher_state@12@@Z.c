/*
 * XREFs of ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x1803C66C8
 * Callers:
 *     ??1?$unique_any_t@V?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1803B735C (--1-$unique_any_t@V-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_stat.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803B758C (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x1803C6964 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 * Callees:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1803B7C74 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::delete_event_watcher_state(
        wil::details *this,
        struct wil::details::event_watcher_state *a2)
{
  if ( this )
    wil::details::event_watcher_state::`scalar deleting destructor'(this, a2);
}
