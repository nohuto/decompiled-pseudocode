/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00865D8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0086FAC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0089D40 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092410 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A6058 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E42FC (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E6408 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char v4; // r13
  __int64 v5; // rdi
  _DWORD *v6; // rax
  struct _VIDMM_MDL *v7; // r15
  _DWORD *v8; // rcx
  VIDMM_GLOBAL *v9; // rcx
  void (__fastcall *v10)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool); // rdi
  int v11; // ebx
  struct _MDL *FullMDL; // rax
  VIDMM_SEGMENT *v13; // rcx
  VIDMM_APERTURE_SEGMENT *v14; // rax
  VIDMM_APERTURE_SEGMENT **v15; // rdx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  VIDMM_GLOBAL *v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-C8h] BYREF
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-A8h]
  ULONG Priority[2]; // [rsp+28h] [rbp-A0h]
  __int64 v35; // [rsp+30h] [rbp-98h]
  __int64 v36; // [rsp+38h] [rbp-90h]
  char v37; // [rsp+50h] [rbp-78h]
  _KAPC_STATE ApcState; // [rsp+58h] [rbp-70h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v25 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = *((int *)a2 + 91);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    WdLogSingleEntry1(4LL, a2);
    return 3221226166LL;
  }
  v37 = 0;
  v4 = 0;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
  {
    v37 = 1;
    goto LABEL_39;
  }
  if ( (*((_DWORD *)a2 + 18) & 0x400) != 0 )
  {
LABEL_39:
    LODWORD(v5) = 0;
    goto LABEL_8;
  }
  LODWORD(v5) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  if ( (int)v5 < 0 )
  {
LABEL_52:
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
    return (unsigned int)v5;
  }
  v4 = 1;
LABEL_8:
  if ( !*((_QWORD *)a2 + 12)
    && (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 436LL) & 4) == 0
    && (*((_DWORD *)a2 + 18) & 0x8000) == 0 )
  {
    v6 = (_DWORD *)*((_QWORD *)a2 + 67);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (*v6 & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 11) + 8LL), &ApcState);
    v7 = VidMmiProbeAndLockAllocation(a2, 0LL, *((_QWORD *)a2 + 1), IoModifyAccess, (struct VIDMM_SEGMENT *)this, 0LL);
    if ( (**((_DWORD **)a2 + 67) & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( !v7 )
    {
      WdLogSingleEntry1(3LL, a2);
LABEL_49:
      LODWORD(v5) = -1073741801;
      goto LABEL_50;
    }
    v8 = (_DWORD *)*((_QWORD *)a2 + 67);
    *((_QWORD *)a2 + 12) = v7;
    if ( (*v8 & 0x2000) != 0 )
    {
      v26 = *((_QWORD *)v7 + 1);
      if ( !((*(_BYTE *)(v26 + 10) & 5) != 0
           ? *(PVOID *)(v26 + 24)
           : MmMapLockedPagesSpecifyCache((PMDL)v26, 0, MmCached, 0LL, 0, 0x40000010u)) )
      {
        WdLogSingleEntry1(3LL, a2);
        LODWORD(v5) = -1073741801;
      }
    }
  }
  if ( (int)v5 < 0 )
    goto LABEL_50;
  if ( (**((_DWORD **)a2 + 67) & 0x4000) != 0 && !*((_QWORD *)a2 + 49) )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL));
    if ( !v28 )
    {
      WdLogSingleEntry1(1LL, a2);
      v36 = 0LL;
      v35 = 0LL;
      *(_QWORD *)Priority = 0LL;
      *(_QWORD *)BugCheckOnFailure = a2;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      goto LABEL_49;
    }
    *((_QWORD *)a2 + 49) = v28;
  }
  v9 = this[1];
  if ( *((_BYTE *)v9 + 40179) )
  {
    v30 = VIDMM_GLOBAL::IoMmuMapAllocation(v9, a2);
    v5 = v30;
    if ( v30 < 0 )
    {
      _InterlockedIncrement(&dword_1C00768F4);
      WdLogSingleEntry2(6LL, a2, v30);
      v36 = 0LL;
      v35 = 0LL;
      *(_QWORD *)Priority = v5;
      *(_QWORD *)BugCheckOnFailure = a2;
      DxgkLogInternalTriageEvent(v31, 262145LL);
LABEL_50:
      if ( v4 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      goto LABEL_52;
    }
  }
  if ( (*((_DWORD *)a2 + 18) & 0x400) == 0 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v10 = (void (__fastcall *)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool))*((_QWORD *)*this + 25);
    v11 = **((_DWORD **)a2 + 67);
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    v10(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      *((_QWORD *)a2 + 24) / 4096LL,
      *((_QWORD *)a2 + 24) / 4096LL,
      FullMDL,
      0,
      (v11 & 0x800004) == 4);
  }
  v13 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
  *((_DWORD *)a2 + 28) = 2;
  *((_QWORD *)a2 + 15) = v13;
  *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = VIDMM_SEGMENT::DriverId(v13);
  *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  *((_DWORD *)a2 + 19) &= ~8u;
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 24) = 0LL;
  *((_QWORD *)a2 + 23) = 0LL;
  *((_BYTE *)a2 + 82) = 1;
  v15 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v15 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v14 = this + 20;
  *((_QWORD *)a2 + 52) = v15;
  *v15 = v14;
  this[21] = v14;
  if ( !*((_DWORD *)a2 + 16)
    || (v16 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this), (v17 & 0x1F) == v16)
    || (v18 = 0, ((v17 >> 6) & 0x1F) == v16) )
  {
    v18 = 0x1000000;
  }
  v19 = *((_QWORD *)a2 + 11);
  *((_DWORD *)a2 + 17) = v18 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
  if ( v19 && *(_QWORD *)(v19 + 8) )
    VidMmRecordAlloc(this[1], a2, v19, this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(this[1], a2, 1u);
  v20 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v20 + *((_QWORD *)this[1] + 5028) + 1600) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v24 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v37 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 19) &= ~2u;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  v22 = this[1];
  _InterlockedOr(v32, 0);
  ++*((_QWORD *)v22 + 5);
  return 0LL;
}
