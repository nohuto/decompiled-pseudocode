/*
 * XREFs of ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C020189C
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0201BDC (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(
        DxgMonitor::MonitorDescriptorState *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  WCHAR v9; // ax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  WCHAR v18; // [rsp+60h] [rbp-10h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  a2->HardwareId[0] = 0;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 )
    return 3223126017LL;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, &v14);
  if ( v14 )
  {
    v15[0] = 2752512LL;
    v15[1] = v16;
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))(*v14)[8])(v14, v15);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))(*v14)[9])(v14, v15);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v8 = v14;
        v9 = v18;
        v14 = 0LL;
        v10 = v16[1];
        *(_OWORD *)a2->HardwareId = v16[0];
        v11 = v17;
        *(_OWORD *)&a2->HardwareId[8] = v10;
        *(_QWORD *)&a2->HardwareId[16] = v11;
        a2->HardwareId[20] = v9;
        if ( v8 )
          (**v8)(v8, 1LL);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, v6);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v6) = -1073741801;
  }
  v13 = v14;
  v14 = 0LL;
  if ( v13 )
    (**v13)(v13, 1LL);
  return (unsigned int)v6;
}
