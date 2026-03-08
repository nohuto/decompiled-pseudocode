/*
 * XREFs of HUBSM_LogUnhandledEvent @ 0x1C000A75C
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C000A96C (HUBSM_FindAndSetTargetState.c)
 * Callees:
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C000A448 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C000A4F8 (WPP_RECORDER_SF_qLL.c)
 *     HUBMISC_DbgBreak @ 0x1C0032F4C (HUBMISC_DbgBreak.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C0041C84 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBSM_LogUnhandledEvent(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // r8
  NTSTATUS result; // eax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  v6 = *(unsigned int *)(a1 + 984);
  v7 = v4;
  if ( (_DWORD)v6 == 2000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xBu, v12);
    }
    v9 = *(unsigned int *)(a1 + 852);
    v8 = "Unhandled HSM event";
  }
  else
  {
    switch ( (_DWORD)v6 )
    {
      case 0xBB8:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(_QWORD *)(a1 + 960);
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xCu, v12);
        }
        v8 = "Unhandled PSM20 event";
        break;
      case 0xFA0:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(_QWORD *)(a1 + 960);
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xAu, v12);
        }
        v8 = "Unhandled DSM event";
        break;
      case 0x1388:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(_QWORD *)(a1 + 960);
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xDu, v12);
        }
        v8 = "Unhandled PSM30 event";
        break;
      default:
        goto LABEL_19;
    }
    v9 = *(unsigned int *)(a1 + 852);
  }
  MicrosoftTelemetryAssertTriggeredArgsMsgKM(v6, a2, v9, v8);
LABEL_19:
  result = HUBMISC_DbgBreak("Unhandled Event", v7);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
  {
    v11 = (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984));
    LODWORD(v13) = *(_DWORD *)(a1 + 984);
    return McTemplateK0ppqqqq_EtwWriteTransfer(
             v11,
             &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
             (const GUID *)(a1 + 1012),
             *(_QWORD *)(a1 + 1032),
             *(_QWORD *)(a1 + 960),
             v13,
             **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)v11),
             a2,
             0);
  }
  return result;
}
