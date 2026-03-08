/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C00027E0
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C001DE48 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIDispatchForwardPowerIrp @ 0x1C0002AF0 (ACPIDispatchForwardPowerIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C002E528 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  void *v6; // rcx
  __int64 v7; // r8
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp-10h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = &unk_1C00622D0;
  v7 = 0LL;
  v9 = &unk_1C00622D0;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = *(void **)(a1 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(void **)(a1 + 616);
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
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      (char)a2,
      a3,
      v7,
      (__int64)v6,
      v12);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 556) = 0;
  if ( a3 >= 0 )
  {
    ACPIDispatchForwardPowerIrp(CurrentStackLocation->DeviceObject, a2, v7);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
