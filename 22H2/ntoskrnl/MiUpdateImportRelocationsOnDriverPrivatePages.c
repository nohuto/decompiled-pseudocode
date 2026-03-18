/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079DAF8 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x1403259BC (MiReferenceDriverPage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // r9
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int8 v9; // di
  __int64 v10; // r15
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  int updated; // edi
  unsigned __int64 v17; // rbx
  __int64 v18; // r13
  int v19; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned __int8 v23; // [rsp+90h] [rbp+8h]
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v23 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v9 = v23;
  if ( v7 >= v22 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
  v10 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_5;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0, v8);
LABEL_5:
    v11 = MI_READ_PTE_LOCK_FREE(v7);
    v21 = v11;
    v12 = v11;
    if ( !v11 )
      goto LABEL_8;
    if ( (v11 & 1) != 0 )
    {
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
      v15 = 48 * v14 - 0x220000000000LL;
      if ( *(__int64 *)(v15 + 40) < 0 )
      {
        v7 += 8LL;
        v10 += 8LL;
        continue;
      }
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      MiReferenceDriverPage(48 * v14 - 0x220000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
      v3 = 0LL;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
      updated = MiUpdateImagePfnImportRelocations(a2, v4, v10 >> 3, v14, BugCheckParameter4);
      MiLockPageInline(48 * v14 - 0x220000000000LL);
      v17 = 0LL;
      v18 = 0LL;
      if ( updated != 1 )
      {
        v17 = MiCaptureDirtyBitToPfn(v15);
        v18 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      }
      MiRemoveLockedPageChargeAndDecRef(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo(v18, v17, 1);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      v4 = a3;
      v7 += 8LL;
      v10 += 8LL;
    }
    else
    {
      if ( (v11 & 0x400) != 0 )
      {
LABEL_8:
        v7 += 8LL;
        v10 += 8LL;
        continue;
      }
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
      v3 = 0LL;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
      v19 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
      if ( v19 < 0 )
        KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v12, v19);
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    v9 = v23;
  }
  while ( v7 < v22 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
}
