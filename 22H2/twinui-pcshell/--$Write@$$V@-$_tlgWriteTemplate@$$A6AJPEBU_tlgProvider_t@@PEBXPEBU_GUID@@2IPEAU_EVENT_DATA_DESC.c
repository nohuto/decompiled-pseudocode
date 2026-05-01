/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0
 * Callers:
 *     ?FlyoutHeight@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18009A3F8 (-FlyoutHeight@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800BBD78 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCA70 (-OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCC40 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD0D0 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD190 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1800BDE78 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 *     ?OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1800D1AAC (-OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     std::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj__anonymous_namespace_::PinConsentPromptManager___ @ 0x180129810 (std--_Ref_count_obj__anonymous_namespace_--PinConsentPromptManager_--_Ref_count_obj__anonymous_n.c)
 *     ??0PinHistory@@QEAA@XZ @ 0x180135530 (--0PinHistory@@QEAA@XZ.c)
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18013564C (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?PinConsentPromptShown@PinManagerTelemetry@@SAXXZ @ 0x18013BF60 (-PinConsentPromptShown@PinManagerTelemetry@@SAXXZ.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x180149B6C (_anonymous_namespace_--GetWicBitmapFromHBitmap.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149CAC (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 *     ?PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ @ 0x18014A1F0 (-PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 2u, &v4);
}
