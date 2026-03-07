__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        char *a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  __int64 v5; // r13
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // r14
  char *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  signed __int64 *v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v20; // rcx
  struct _KTHREAD *v21; // rax
  bool v22; // zf
  void *v23; // r14
  char fixed; // al
  __int64 v25; // rax
  PVOID v26; // r13
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rax
  ULONG_PTR v29; // rcx
  __int128 v31; // [rsp+40h] [rbp-38h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-18h]
  int v34; // [rsp+C0h] [rbp+48h] BYREF
  int v35; // [rsp+C8h] [rbp+50h]
  PVOID BaseAddress; // [rsp+D0h] [rbp+58h]
  char *v37; // [rsp+D8h] [rbp+60h]

  BaseAddress = a3;
  v5 = a5;
  v8 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v9 = (unsigned int)(16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808)));
  v32 = 0LL;
  v34 = 0;
  v35 = v8;
  v37 = &a2[-v9];
  DWORD2(v32) = -1;
  v33 = 1LL;
  v10 = *(_QWORD *)(a5 + 56);
  v31 = 0LL;
  v12 = 0LL;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(v10 + 16),
              (__int64)&v31) >= 0 )
  {
    if ( DWORD2(v32) == -1 || !DWORD2(v32) )
      v13 = (char *)&v31 + 8;
    else
      v13 = (char *)(v31 + 16LL * (unsigned int)(DWORD2(v32) - 1));
    v12 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v13 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v31,
    0);
  if ( !v12 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v12 )
    goto LABEL_14;
  v14 = 4096;
  if ( (v12[1] & 0xFFF) != 0 )
    v14 = v12[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v14 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v12, 0LL);
  v15 = SmHpChunkUnprotect(a1 + 192, v12, 6LL);
  v16 = v15 & 1;
  if ( (v15 & 1) != 0 )
  {
LABEL_15:
    v17 = (_DWORD *)(v5 + 64);
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v5 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      v20 = *(_QWORD *)(a1 + 800) + 6024LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v20, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      v21 = KeGetCurrentThread();
      v22 = v21->SpecialApcDisable++ == -1;
      if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery();
    }
    v23 = *(void **)(v5 + 48);
    memmove(v23, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v23, *(unsigned __int16 *)(a4 + 4));
    v16 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      v25 = *(_QWORD *)(v5 + 16);
      v26 = BaseAddress;
      if ( (int)RtlDecompressBufferEx(
                  *(_WORD *)(a1 + 992),
                  (__int64)BaseAddress,
                  0x1000u,
                  (__int64)v23,
                  *(unsigned __int16 *)(a4 + 4),
                  (__int64)&v34,
                  v25) >= 0
        && v34 == 4096 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 1928), 1u);
        v27 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedAdd(&dword_140C6AFC8, 1u);
        MmStoreLogCorruptionFixed(a2, v27, (unsigned int)dword_140C6AFC8);
        v16 |= 2u;
      }
    }
    else
    {
      v26 = BaseAddress;
    }
    v28 = KeGetCurrentThread();
    v29 = *(_QWORD *)(a1 + 800) + 6024LL;
    --v28->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v29, 0LL);
    *v17 = 2;
    if ( v16 < 2 )
      SmPrepareForFatalPageError(
        (int)v37,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v35,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        v26);
  }
  else
  {
    SmPrepareForFatalPageError(
      (int)v37,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v35,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      BaseAddress);
    SmHpChunkUnprotect(a1 + 192, v12, v16 + 2);
  }
  return v16 >> 1;
}
