/*
 * XREFs of ACPIWakeWaitIrp @ 0x1C00460A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIDispatchForwardOrFailPowerIrp @ 0x1C0002A4C (ACPIDispatchForwardOrFailPowerIrp.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C001DFB8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     WPP_RECORDER_SF_qddqss @ 0x1C0046850 (WPP_RECORDER_SF_qddqss.c)
 */

__int64 __fastcall ACPIWakeWaitIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  const char *v8; // rdx
  const char *v9; // rcx
  __int64 v10; // r10
  void *v11; // rdx
  void *v12; // r8
  int v13; // r9d
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  char v16; // [rsp+90h] [rbp+18h] BYREF
  char v17; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v16 = 0;
  v5 = DeviceExtension;
  v15[0] = 0;
  v17 = 0;
  v6 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v6 & 0x10000) == 0 )
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x20u) && !*(_QWORD *)(DeviceExtension + 680) )
  {
    v8 = (const char *)&unk_1C00622D0;
    v9 = (const char *)&unk_1C00622D0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(DeviceExtension + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x1Au,
        (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
        (char)a2,
        DeviceExtension,
        v8,
        v9);
    return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
  }
  if ( (v6 & 0x102000000LL) != 0 && (v6 & 0x20) == 0 )
  {
    (*((void (__fastcall **)(_QWORD, char *, _BYTE *, char *))PciPmeInterface + 4))(
      *(_QWORD *)(DeviceExtension + 784),
      &v16,
      v15,
      &v17);
    if ( v16 )
    {
      if ( !_bittest64((const signed __int64 *)(v5 + 8), 0x3Bu) )
        return ACPIDispatchForwardOrFailPowerIrp(a1, a2);
    }
  }
  if ( *(_DWORD *)(v5 + 536) < (signed int)a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v10 = *(_QWORD *)(v5 + 8);
    v11 = &unk_1C00622D0;
    v12 = &unk_1C00622D0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(v5 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(void **)(v5 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = 27;
LABEL_24:
    WPP_RECORDER_SF_qddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, (_DWORD)v12, v13);
LABEL_25:
    a2->IoStatus.Status = -1073741436;
    IofCompleteRequest(a2, 0);
    return 3221225860LL;
  }
  LODWORD(v12) = *(_DWORD *)(v5 + 384);
  if ( *(_DWORD *)(v5 + 540) < (int)v12 )
  {
    v14 = *(_QWORD *)(v5 + 8);
    v11 = &unk_1C00622D0;
    if ( (v14 & 0x200000000000LL) != 0 )
      v11 = *(void **)(v5 + 608);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v13 = 28;
    goto LABEL_24;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ACPIDeviceIrpWaitWakeRequest(a1, (__int64)a2);
  return 259LL;
}
