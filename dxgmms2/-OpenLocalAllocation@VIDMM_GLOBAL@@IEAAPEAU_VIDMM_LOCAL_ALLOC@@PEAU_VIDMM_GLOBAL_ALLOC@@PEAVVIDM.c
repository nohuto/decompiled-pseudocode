/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0088014 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0089DFC (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A1AB0 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00B0BA4 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B4948 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        void *a4,
        unsigned __int8 *a5)
{
  struct VIDMM_PROCESS *v6; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v9; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v10; // rdx
  VIDMM_GLOBAL *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC **v15; // rax
  _DWORD *v16; // rsi
  struct _VIDMM_LOCAL_ALLOC *v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  VIDMM_SEGMENT *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  VIDMM_SEGMENT *v33; // r9
  enum _LOCK_OPERATION v34; // [rsp+28h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 13074LL);
    DxgkLogInternalTriageEvent(v22, 0x40000LL);
    return 0LL;
  }
  v9 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
  v10 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
  if ( v10 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) && (**((_DWORD **)a2 + 67) & 0x20000000) == 0 )
  {
    WdLogSingleEntry1(1LL, 13084LL);
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
    return 0LL;
  }
  v11 = (VIDMM_GLOBAL *)(**((_DWORD **)a2 + 67) & 0x20000010);
  if ( (_DWORD)v11 == 536870928 )
  {
    v24 = *((_QWORD *)a2 + 11);
    if ( v24 )
    {
      if ( *(struct VIDMM_PROCESS **)(v24 + 8) != v6 )
      {
        if ( v6 != *((struct VIDMM_PROCESS **)this + 5048) )
        {
          WdLogSingleEntry1(1LL, 13103LL);
          DxgkLogInternalTriageEvent(v25, 0x40000LL);
        }
        return 0LL;
      }
    }
  }
  if ( v10 == v9 )
  {
LABEL_9:
    v12 = (_QWORD *)operator new(104LL, 0x32306956u, 256LL);
    v13 = (__int64)v12;
    if ( !v12 )
    {
      _InterlockedIncrement(&dword_1C0076790);
      WdLogSingleEntry1(6LL, 13165LL);
      DxgkLogInternalTriageEvent(v28, 262145LL);
      return 0LL;
    }
    *v12 = a2;
    v12[1] = v6;
    v14 = v12 + 5;
    v14[1] = v14;
    *v14 = v14;
    v15 = (struct _VIDMM_GLOBAL_ALLOC **)(v13 + 56);
    ++*((_DWORD *)a2 + 72);
    v11 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 35);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)v11 != v9 )
LABEL_60:
      __fastfail(3u);
    *v15 = v9;
    *(_QWORD *)(v13 + 64) = v11;
    *(_QWORD *)v11 = v15;
    *((_QWORD *)a2 + 35) = v15;
    v16 = (_DWORD *)((char *)a2 + 76);
    if ( (*((_DWORD *)a2 + 19) & 0x20) != 0
      && VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v13, a5, a4) < 0 )
    {
LABEL_51:
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v13, 1);
      --*((_DWORD *)a2 + 72);
      v30 = *(_QWORD *)(v13 + 56);
      if ( *(_QWORD *)(v30 + 8) == v13 + 56 )
      {
        v31 = *(_QWORD **)(v13 + 64);
        if ( *v31 == v13 + 56 )
        {
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          operator delete((void *)v13);
          return 0LL;
        }
      }
      goto LABEL_60;
    }
  }
  else
  {
    while ( 1 )
    {
      v13 = (__int64)v10 - 56;
      if ( *((struct VIDMM_PROCESS **)v10 - 6) == v6 )
        break;
      v10 = *(struct _VIDMM_GLOBAL_ALLOC **)v10;
      if ( v10 == v9 )
        goto LABEL_9;
    }
    v21 = *(_BYTE *)(v13 + 32);
    if ( (v21 & 2) != 0 )
    {
      *(_BYTE *)(v13 + 32) = v21 & 0xFD;
      WdLogSingleEntry1(4LL, (char *)v10 - 56);
      v26 = *((_QWORD *)a2 + 11);
      if ( !v26 || (*(_BYTE *)(v26 + 32) & 2) != 0 )
      {
        v27 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 15);
        *((_QWORD *)a2 + 11) = v13;
        if ( v27 )
          VidMmRecordAlloc((__int64)this, (__int64)a2, v13, v27, *((_QWORD *)a2 + 2), 0);
      }
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v13;
    v16 = (_DWORD *)((char *)a2 + 76);
  }
  ++*(_DWORD *)(v13 + 36);
  if ( (**((_DWORD **)a2 + 67) & 0x20000000) != 0 )
  {
    v18 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
    if ( v18 && (*v16 & 4) == 0 )
    {
LABEL_19:
      *a5 = 1;
      goto LABEL_15;
    }
    if ( (*(_BYTE *)v16 & 0x60) == 0x60 )
      VIDMM_GLOBAL::TransferAllocationDecommit(v11, a2, v18, (struct _VIDMM_LOCAL_ALLOC *)v13);
    *(_QWORD *)(v13 + 8) = v6;
    if ( !*((_QWORD *)a2 + 11) )
    {
LABEL_28:
      if ( (*v16 & 4) != 0 )
      {
        v33 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 15);
        if ( v33 )
          VidMmRecordAlloc((__int64)this, (__int64)a2, v13, v33, *((_QWORD *)a2 + 2), 0);
      }
      *v16 &= ~4u;
      *((_QWORD *)a2 + 11) = v13;
      goto LABEL_19;
    }
    *(_QWORD *)v13 = a2;
    if ( *((int *)a2 + 91) > 0 )
    {
      if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                  (union _LARGE_INTEGER **)this,
                  (struct _VIDMM_LOCAL_ALLOC *)v13,
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  v34,
                  *((struct VIDMM_SEGMENT **)a2 + 15),
                  0) < 0 )
      {
        _InterlockedIncrement(&dword_1C0076784);
        WdLogSingleEntry2(6LL, a2, *((_QWORD *)a2 + 1));
        DxgkLogInternalTriageEvent(v29, 262145LL);
        goto LABEL_51;
      }
      VIDMM_GLOBAL::UnlockAllocation(this, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 11), 0LL, *((_QWORD *)a2 + 1), 0, 0);
    }
    v32 = *((_QWORD *)a2 + 11);
    if ( (*(_BYTE *)(v32 + 32) & 2) == 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v32 + 8), &ApcState);
      VIDMM_GLOBAL::CloseOneAllocation(
        this,
        (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) - 40LL),
        0LL,
        0,
        0,
        0LL);
      KeUnstackDetachProcess(&ApcState);
    }
    goto LABEL_28;
  }
  *((_QWORD *)a2 + 11) = v13;
LABEL_15:
  if ( *((_DWORD *)a2 + 28) )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    v20 = *((_QWORD *)a2 + 2);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 15) + 80LL) & 0x1001) != 0 )
      *(_QWORD *)(v19 + 240) += v20;
    else
      *(_QWORD *)(v19 + 232) += v20;
  }
  return (struct _VIDMM_LOCAL_ALLOC *)v13;
}
