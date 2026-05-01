/*
 * XREFs of ??1?$com_ptr_t@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802AADF8
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::Create_::_1_::dtor$0 @ 0x1802AAF51 (_Windows--Internal--Shell--TaskFlow--DataEngine--UserPresenceListenerFactory--Create_--_1_--dtor.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802AB310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1802AB310.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
