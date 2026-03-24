/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1403F3CA8
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x14090A1C4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  char *v7; // rsi
  int v8; // eax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // r12
  unsigned __int64 valid; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  volatile signed __int64 *v19; // rcx
  BOOL v20; // r14d
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edi
  int v26; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v31; // [rsp+90h] [rbp+18h]
  unsigned int v32; // [rsp+98h] [rbp+20h] BYREF

  v32 = 0;
  v28 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v32);
  v7 = (char *)v3;
  v27 = v3;
  if ( v3 )
  {
    v8 = *((_DWORD *)v3 + 12);
    if ( (v8 & 0x100000) != 0 && (v8 & 0x1000000) == 0 && (v8 & 0x4000000) != 0 )
    {
      v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v11 = MiLockWorkingSetShared((__int64)v9, v4, v5, v6);
        v31 = v11;
        valid = MiLockLowestValidPageTable((__int64)v9, v10, &v28);
        v13 = MI_READ_PTE_LOCK_FREE(v28);
        v29[0] = v13;
        if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v13 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)v9, valid);
        MiUnlockWorkingSetShared((__int64)v9, v11);
      }
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v29) >> 12) & 0xFFFFFFFFFLL;
      v18 = 48 * v17 - 0x58000000000LL;
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26, v14, v15, v16);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v19 = (volatile signed __int64 *)((a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000, v16));
      v20 = a2 == _InterlockedCompareExchange64(v19, 0LL, a2);
      LOBYTE(v21) = 17;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, v21, 0x80000000LL);
      v22 = MiCaptureDirtyBitToPfn(48 * v17 - 0x58000000000LL);
      if ( v22 )
        v23 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
      else
        v23 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v23, v22, 1);
      MiUnlockPageTableInternal((__int64)v9, valid);
      MiUnlockWorkingSetShared((__int64)v9, v31);
      v24 = !v20 ? 0xC0000272 : 0;
    }
    else
    {
      v24 = -1073741800;
    }
  }
  else
  {
    v24 = v32;
  }
  if ( v7 )
    MiUnlockAndDereferenceVad(v7);
  return v24;
}
