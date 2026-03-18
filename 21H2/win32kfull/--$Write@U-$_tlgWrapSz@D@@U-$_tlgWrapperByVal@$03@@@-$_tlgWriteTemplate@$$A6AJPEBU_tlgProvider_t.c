/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C024E6A0
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C010BF84 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C024EB3C (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C024EC34 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C024ED7C (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C024EF4C (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C024F068 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C024F16C (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024F350 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024F594 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024F7BC (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C024F8E8 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C024FA14 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024FB40 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C024FCA0 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024FDC8 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C024FEF4 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0254100 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02547C0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02550C8 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255BA4 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C0256858 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02569EC (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0256AD0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0256D5C (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0257114 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0257578 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0257718 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025798C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0257BEC (-SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0257EA0 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C02582B4 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v15 = a6;
  v16 = 4LL;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = &unk_1C02F2D0B;
    v9 = 1;
  }
  v13 = v9;
  v12 = v7;
  v14 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v11);
}
