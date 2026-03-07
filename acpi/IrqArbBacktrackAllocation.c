NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rdx
  _QWORD *UserData; // rax
  __int128 v10; // [rsp+40h] [rbp-40h] BYREF
  __int128 v11; // [rsp+50h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+20h] BYREF

  Range = 0LL;
  v11 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v5 = a2 + 8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL), a3, 18);
  v6 = IrqArbGsivFromIrq(*a2);
  LOBYTE(v7) = (a2[16] & 2) != 0;
  IcRemovePossibleReference(v6, v7);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(*(_QWORD *)v5 + 32LL), v6, 1, &v10) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(void **)(*(_QWORD *)v5 + 32LL), v6, DWORD1(v11), 1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( *(PVOID *)(*(_QWORD *)v5 + 32LL) == Range->Owner
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
               *(PVOID *)(*(_QWORD *)v5 + 32LL));
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return RtlDeleteRange_0(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *((_QWORD *)a2 + 1),
           *(PVOID *)(*(_QWORD *)v5 + 32LL));
}
