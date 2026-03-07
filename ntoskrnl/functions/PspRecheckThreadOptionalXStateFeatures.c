__int64 __fastcall PspRecheckThreadOptionalXStateFeatures(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  _QWORD *Pool2; // r14
  unsigned __int16 ProcessorNodeNumberByIndex; // ax
  __int64 KernelStack; // rdx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a2 + 1064) & ~*(_QWORD *)(a1 + 1032);
  if ( !v3 )
    return 0LL;
  v5 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 136LL, 1480946512LL);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 116) & 0x800000) == 0 )
    {
      ProcessorNodeNumberByIndex = KeGetProcessorNodeNumberByIndex(*(_DWORD *)(a2 + 588));
      KernelStack = MmCreateKernelStack(0x20u, ProcessorNodeNumberByIndex, a2);
      if ( !KernelStack )
      {
        v5 = -1073741801;
        ExFreePoolWithTag(Pool2, 0);
        return v5;
      }
      v9 = KernelStack - (unsigned int)KeDecoupledStateSaveAreaLength;
      Pool2[13] = KernelStack;
      Pool2[12] = v9;
    }
    Pool2[14] = v3;
    Pool2[15] = a2;
    Pool2[16] = Pool2;
    *(_DWORD *)Pool2 = 1;
    KeInitializeApc((__int64)(Pool2 + 1), a2, 0, (__int64)KeEnableOptionalXStateFeaturesApc, 0LL, 0LL, 0, 0LL);
    KeInsertQueueApc((__int64)(Pool2 + 1), 0LL, 0LL, 0);
    return v5;
  }
  return (unsigned int)-1073741801;
}
