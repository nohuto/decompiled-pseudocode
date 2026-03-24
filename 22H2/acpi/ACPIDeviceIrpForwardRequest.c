/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C000CEC0
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C0050A08 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIDispatchForwardPowerIrp @ 0x1C000CE50 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E778 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E3E0 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  void *v6; // rcx
  char v7; // r8
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp-10h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = &unk_1C00701BA;
  v7 = 0;
  v9 = &unk_1C00701BA;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = *(void **)(a1 + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(void **)(a1 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      10,
      32,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      (char)a2,
      a3,
      v7,
      (__int64)v6,
      v12);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 516) = 0;
  if ( a3 < 0 )
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIDispatchForwardPowerIrp((ULONG_PTR)CurrentStackLocation->DeviceObject, a2);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
