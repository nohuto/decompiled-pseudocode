/*
 * XREFs of ??1?$ComPtr@VCJumpViewExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180245E8C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CJumpViewExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180245406 (_Microsoft--WRL--Details--MakeAndInitialize_CJumpViewExperienceManager_IInspectable_ea_180245406.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180248900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJum_ea_180248900.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CJumpViewExperienceManager>::~ComPtr<CJumpViewExperienceManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(result);
  }
  return result;
}
