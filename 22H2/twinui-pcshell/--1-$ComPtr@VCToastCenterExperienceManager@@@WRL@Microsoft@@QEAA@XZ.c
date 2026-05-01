/*
 * XREFs of ??1?$ComPtr@VCToastCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180230928
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CToastCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18022FF6A (_Microsoft--WRL--Details--MakeAndInitialize_CToastCenterExperienceManager_IInspecta_ea_18022FF6A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180234D60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBas_ea_180234D60.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CToastCenterExperienceManager>::~ComPtr<CToastCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
