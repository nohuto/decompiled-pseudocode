/*
 * XREFs of VfDeadlockInitialize @ 0x1409DEEE0
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ViDeadlockDetectionApplySettings @ 0x1409E025C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409E07B0 (ViDeadlockPopulateLookasideCache.c)
 */

void __fastcall VfDeadlockInitialize(int a1, int a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rax
  _QWORD *v6; // r9
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // ecx
  void *v15; // rcx
  void *v16; // rcx
  int v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+30h] [rbp-38h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8180uLL, 0x6B636C44u);
  ViDeadlockGlobals = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x8180uLL);
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3FF0uLL, 0x6B636C44u);
    v6 = ViDeadlockGlobals;
    *((_QWORD *)ViDeadlockGlobals + 2) = v5;
    if ( v5
      && (v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3FF0uLL, 0x6B636C44u),
          v6 = ViDeadlockGlobals,
          (*((_QWORD *)ViDeadlockGlobals + 2050) = v7) != 0LL) )
    {
      ViDeadlockDatabaseLock = 0;
      v8 = 0LL;
      v9 = 1023LL;
      do
      {
        v10 = (_QWORD *)(v8 + v6[2]);
        v10[1] = v10;
        *v10 = v10;
        v11 = (_QWORD *)(v8 + v6[2050]);
        v8 += 16LL;
        v11[1] = v11;
        *v11 = v11;
        --v9;
      }
      while ( v9 );
      v12 = 4;
      v13 = ViDeadlockGlobals;
      if ( ViRecursionDepthLimitFromRegistry )
        v12 = ViRecursionDepthLimitFromRegistry;
      *((_DWORD *)ViDeadlockGlobals + 8202) = v12;
      v14 = 1000;
      if ( ViSearchedNodesLimitFromRegistry )
        v14 = ViSearchedNodesLimitFromRegistry;
      v13[8203] = v14;
      pXdvExInitializeNPagedLookasideList(
        (int)&ViDeadlockThreadLookaside,
        (unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0),
        (int)VfUtilFreePoolCheckIRQL,
        512,
        56LL,
        1919439958,
        a2 != 0 ? 512 : 32,
        VfInitializedWithoutReboot,
        (__int64)ExInitializeNPagedLookasideListInternal);
      LOWORD(v17) = a2 != 0 ? 0x2000 : 64;
      pXdvExInitializeNPagedLookasideList(
        (int)&ViDeadlockResourceLookaside,
        (unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0),
        (int)VfUtilFreePoolCheckIRQL,
        512,
        248LL,
        1936020054,
        v17,
        VfInitializedWithoutReboot,
        (__int64)ExInitializeNPagedLookasideListInternal);
      LOWORD(v18) = a2 != 0 ? 0x4000 : 64;
      pXdvExInitializeNPagedLookasideList(
        (int)&ViDeadlockNodeLookaside,
        (unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0),
        (int)VfUtilFreePoolCheckIRQL,
        512,
        208LL,
        1685016150,
        v18,
        VfInitializedWithoutReboot,
        (__int64)ExInitializeNPagedLookasideListInternal);
      if ( a2 )
      {
        ViDeadlockPopulateLookasideCache(&ViDeadlockThreadLookaside);
        ViDeadlockPopulateLookasideCache(&ViDeadlockNodeLookaside);
        ViDeadlockPopulateLookasideCache(&ViDeadlockResourceLookaside);
        ViDeadlockState |= 2u;
      }
      if ( a1 )
        ViDeadlockState |= 4u;
      ViDeadlockDetectionApplySettings();
    }
    else
    {
      v15 = (void *)v6[2];
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      v16 = (void *)*((_QWORD *)ViDeadlockGlobals + 2050);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      ExFreePoolWithTag(ViDeadlockGlobals, 0);
      ViDeadlockGlobals = 0LL;
    }
  }
}
