/*
 * XREFs of ??1?$com_ptr_t@VRetailDemoExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18025B118
 * Callers:
 *     _RetailDemoExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x18025B642 (_RetailDemoExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B0EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801B0EE0.c)
 */

__int64 __fastcall wil::com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>::~com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
