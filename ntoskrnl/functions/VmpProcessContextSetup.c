__int64 __fastcall VmpProcessContextSetup(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _KPROCESS *Process; // rsi
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  PVOID v6; // rcx

  v1 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[2].Affinity.StaticBitmap[5] )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 128LL, 1666215254LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x80uLL);
      v5[9].Count = a1;
      v5[2].Count = 0LL;
      v5[3].Count = 0LL;
      v5[4].Count = 0LL;
      v5[6].Count = 0LL;
      v5[7].Count = 0LL;
      ExInitializePushLock(v5 + 12);
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&Process[2].Affinity.StaticBitmap[5],
             (signed __int64)v5,
             0LL) )
      {
        VmpProcessContextCleanup((__int64)v5);
        ExFreePoolWithTag(v6, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
