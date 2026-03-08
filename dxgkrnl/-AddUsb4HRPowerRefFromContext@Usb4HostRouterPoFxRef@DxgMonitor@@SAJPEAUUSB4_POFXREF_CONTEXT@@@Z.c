/*
 * XREFs of ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5B84
 * Callers:
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5ABC (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRefFromContext(struct USB4_POFXREF_CONTEXT *a1)
{
  unsigned int v1; // r8d
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  signed int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rcx
  DWORD v13; // eax
  unsigned int v14; // r8d
  ULONG v16[2]; // [rsp+20h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+38h] [rbp-40h] BYREF
  union _LARGE_INTEGER *p_Interval; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]
  int v21; // [rsp+64h] [rbp-14h]

  v1 = *((_DWORD *)a1 + 6);
  if ( v1 )
    DxgkLogCodePointPacket(0x7Du, 0, v1, 0, *(_QWORD *)((char *)a1 + 28));
  if ( g_DbgUsb4MonitorPowerOnDelayInSeconds )
  {
    Interval.QuadPart = -10000000LL * g_DbgUsb4MonitorPowerOnDelayInSeconds;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v3 = PoFxAddComponentRelation(*(_QWORD *)a1, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), &GUID_SPM_DEFAULT);
  v8 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry3(2LL, v3, *(_QWORD *)a1, *((unsigned int *)a1 + 2));
  }
  else
  {
    v9 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v11 = bTracingEnabled == 0;
    *(_QWORD *)(v9 + 24) = *(_QWORD *)a1;
    v12 = *((unsigned int *)a1 + 2);
    *(_QWORD *)(v9 + 32) = v12;
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v16[0] = 0;
      McTemplateK0pqq_EtwWriteTransfer(v12, &Dxgk_ReportPowerComponentState, v10, 0LL, *(_QWORD *)v16, 1);
    }
    PoFxActivateComponent(*(_QWORD *)a1, *((unsigned int *)a1 + 2), 1LL);
    if ( (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x8000LL) )
    {
      v13 = *((_DWORD *)a1 + 2);
      v21 = 0;
      Interval.LowPart = v13;
      v20 = 4;
      p_Interval = &Interval;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C013A8A8,
        (unsigned __int8 *)dword_1C00A1AA9,
        0LL,
        0LL,
        3u,
        &v18);
    }
  }
  v14 = *((_DWORD *)a1 + 6);
  if ( v14 || v8 < 0 )
    DxgkLogCodePointPacket(0x7Du, 1u, v14, v8, *(_QWORD *)((char *)a1 + 28));
  return (unsigned int)v8;
}
