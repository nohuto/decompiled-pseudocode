/*
 * XREFs of ?RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ @ 0x1C03C62D4
 * Callers:
 *     ??1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ @ 0x1C03C5550 (--1Usb4HostRouterPoFxRef@DxgMonitor@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x1C03C5DE0 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1C03C6E00 (-_OnChangePowerOff@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRef::RemoveUsb4HRPowerRef(DxgMonitor::Usb4HostRouterPoFxRef *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edi
  int v7; // eax
  ULONG v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  if ( *((_BYTE *)this + 24) )
  {
    v2 = PoFxRemoveComponentRelation(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 2),
           *(_QWORD *)this,
           &GUID_SPM_DEFAULT);
    v5 = v2;
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL, v2);
      return v5;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v9 = 0;
      v8 = 0;
      McTemplateK0pqq_EtwWriteTransfer(v3, &Dxgk_ReportPowerComponentState, v4, 0LL, v8, v9);
    }
    PoFxIdleComponent(*((_QWORD *)this + 2), *((unsigned int *)this + 2), 1LL);
    *((_BYTE *)this + 24) = 0;
    if ( (unsigned int)dword_1C013A8A8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x8000LL) )
      {
        v7 = *((_DWORD *)this + 2);
        v14 = 0;
        v10 = v7;
        v13 = 4;
        v12 = &v10;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C013A8A8,
          (unsigned __int8 *)dword_1C00A1A70,
          0LL,
          0LL,
          3u,
          &v11);
      }
    }
  }
  return 0LL;
}
