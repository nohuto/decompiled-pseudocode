/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x140A3B820
 * Callers:
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiCountCommittedPages @ 0x140644EA8 (MiCountCommittedPages.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 *     VslLoadEnclaveModule @ 0x14093FA58 (VslLoadEnclaveModule.c)
 *     MiMapImageForEnclaveUse @ 0x140A3BAD0 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3BD1C (MiUnmapImageForEnclaveUse.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        _QWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _MDL *a7,
        _QWORD *a8)
{
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *Pool; // rbx
  int v15; // edi
  __int64 v17; // r8
  __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r12
  _QWORD *v23; // rcx
  _WORD v24[2]; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp-8h]
  char v29; // [rsp+B8h] [rbp+38h] BYREF

  v8 = a2[9];
  v24[0] = 0;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  v27 = 0LL;
  v29 = 0;
  v28 = v8;
  MiUnlockVad((__int64)CurrentThread, (__int64)a2);
  Pool = 0LL;
  v26 = 0LL;
  if ( a6 < 0x10 )
  {
    v15 = -1073741820;
LABEL_3:
    MiLockVad((__int64)CurrentThread, (__int64)a2);
    goto LABEL_4;
  }
  Pool = MiAllocatePool(256, 0x30uLL, 0x4D456D4Du);
  if ( !Pool )
  {
    v15 = -1073741670;
    goto LABEL_3;
  }
  LOBYTE(v17) = a3;
  v15 = MiMapImageForEnclaveUse(a7->Next, a4, v17, &v26, &v27);
  if ( v15 < 0 )
    goto LABEL_3;
  v18 = v27;
  v19 = a5;
  v20 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v27 + 8LL) << 12) + a5 - 1;
  v27 = v20;
  MiLockVad((__int64)CurrentThread, (__int64)a2);
  if ( (unsigned int)MiVadDeleted((__int64)a2) || MiCountCommittedPages(v19, v20, (__int64)a2, a1 + 1664) )
  {
    v15 = -1073741800;
  }
  else
  {
    v21 = v18 + 128;
    v22 = *(_QWORD *)(v18 + 136) << 9;
    do
    {
      v15 = MiCommitExistingVad(
              (ULONG_PTR)a2,
              v19 + (((*(_QWORD *)(v21 + 8) << 9) - v22) & 0xFFFFFFFFFFFFF000uLL),
              (unsigned __int64)*(unsigned int *)(v21 + 44) << 12,
              4u,
              0,
              0LL,
              0,
              0,
              0LL,
              &v25,
              v24);
      if ( v15 < 0 )
        goto LABEL_23;
      v21 = *(_QWORD *)(v21 + 16);
    }
    while ( v21 );
    MiPrefetchControlArea(v18, CLFS_LSN_NULL_EXT[0], 0LL, 1u, 0, 0xFFFFFFFF);
    v15 = VslLoadEnclaveModule(
            *(_QWORD *)(v28 + 24),
            v19,
            *(_QWORD *)(*(_QWORD *)(v18 + 96) + 56LL),
            v26,
            a7,
            a6,
            &v29,
            Pool + 9,
            Pool + 10);
    if ( v15 < 0 )
    {
LABEL_23:
      MiDecommitRegion((__int64)a2, v19, v27);
      goto LABEL_4;
    }
    if ( v29 )
    {
      Pool[8] = 2;
      *((_QWORD *)Pool + 2) = v19;
      v23 = (_QWORD *)a2[11];
      if ( (_QWORD *)*v23 != a2 + 10 )
        __fastfail(3u);
      *(_QWORD *)Pool = a2 + 10;
      *((_QWORD *)Pool + 1) = v23;
      *v23 = Pool;
      a2[11] = Pool;
      *a8 = Pool;
      Pool = 0LL;
    }
  }
LABEL_4:
  MiUnlockAndDereferenceVad(a2);
  if ( v26 )
    MiUnmapImageForEnclaveUse(v26);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v15;
}
