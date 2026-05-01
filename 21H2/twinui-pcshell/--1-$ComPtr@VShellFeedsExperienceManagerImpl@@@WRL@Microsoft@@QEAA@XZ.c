/*
 * XREFs of ??1?$ComPtr@VShellFeedsExperienceManagerImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B13DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellFeedsExperienceManagerImpl_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x1800B0225 (_Microsoft--WRL--Details--MakeAndInitialize_ShellFeedsExperienceManagerImpl_IInspec_ea_1800B0225.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B6B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellFeedsExperi.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellFeedsExperienceManagerImpl>::~ComPtr<ShellFeedsExperienceManagerImpl>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
