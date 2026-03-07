__int64 __fastcall MmReapplyBootPatchImports(unsigned __int64 a1)
{
  struct _KTHREAD *Lock; // r15
  _QWORD *v3; // rsi
  int v4; // ebx
  __int64 v6; // rbx
  char *AnyMultiplexedVm; // r14
  __int64 v8[14]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9[14]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v8, 0, 0x68uLL);
  memset(v9, 0, 0x68uLL);
  Lock = MmAcquireLoadLock();
  v3 = MiLookupDataTableEntry(a1, 1);
  MiInitializeDriverPatchState((__int64)v3, (__int64)v8);
  MiInitializeDriverPatchState((__int64)v3, (__int64)v9);
  if ( (_QWORD *)v3[37] == v3 + 37 )
  {
    v4 = 0;
  }
  else
  {
    v6 = v3[35];
    MiInitializeDriverPatchState((__int64)v3, (__int64)v8);
    MiInitializeDriverPatchState(v6, (__int64)v9);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v4 = MiPrepareDriverPatchState((__int64)v8, (__int64)AnyMultiplexedVm);
    if ( v4 >= 0 )
    {
      v4 = MiPrepareDriverPatchState((__int64)v9, (__int64)AnyMultiplexedVm);
      if ( v4 >= 0 )
      {
        v4 = MiLockDriverPageRange(v8, 0, LODWORD(v8[3]) - 1, 3, 0LL);
        if ( v4 >= 0 )
        {
          v4 = MiLockDriverPageRange(v9, 0, LODWORD(v9[3]) - 1, 3, 0LL);
          if ( v4 >= 0 )
          {
            v4 = VslReapplyBootIndirectPatches(v3[6]);
            if ( v4 >= 0 )
              v4 = 0;
          }
        }
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  MiUnlockDriverPages(v8);
  MiUnlockDriverPages(v9);
  return (unsigned int)v4;
}
