/*
 * XREFs of IrqArbBacktrackAllocation @ 0x1C00B6F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x1C000F3CC (WPP_RECORDER_SF_Dq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000FC64 (ProcessorDeleteDeviceIdtAssignment.c)
 *     RtlDeleteRange_0 @ 0x1C0031D4D (RtlDeleteRange_0.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C00936A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C00938DC (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C0096A68 (IcRemovePossibleReference.c)
 */

NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // esi
  _QWORD *UserData; // rax
  int v8; // [rsp+20h] [rbp-60h]
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+10h] BYREF

  Range = 0LL;
  v10 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
      a3,
      0x12u,
      v8);
  v5 = IrqArbGsivFromIrq(*a2);
  IcRemovePossibleReference(v5, (a2[16] & 2) != 0);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v5, 1, &v9) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(void **)(*((_QWORD *)a2 + 4) + 32LL), v5, DWORD1(v10), 1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL) == Range->Owner
      && *((_QWORD *)a2 + 1) == Range->End
      && *(_QWORD *)a2 == Range->Start )
    {
      UserData = Range->UserData;
      if ( *((_DWORD *)UserData + 2) == 2 )
        --*(_DWORD *)(UserData[2] + 28LL);
      return RtlDeleteRange_0(
               *(PRTL_RANGE_LIST *)(a1 + 48),
               *(_QWORD *)a2,
               *((_QWORD *)a2 + 1),
               *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return RtlDeleteRange_0(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *((_QWORD *)a2 + 1),
           *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
}
