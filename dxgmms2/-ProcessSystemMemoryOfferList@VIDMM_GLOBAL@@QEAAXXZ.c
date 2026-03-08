/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A6BA0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00861B4 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00A7720 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00A77E0 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00A7814 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A7BE4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B5874 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rdi
  __int64 *v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r12d
  __int64 *v10; // r15
  _QWORD *v11; // r8
  __int64 *v12; // rbp
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  __int16 v16; // cx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rbp
  int v24; // eax
  int v25; // r9d
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-30h]

  if ( !qword_1C0076408 )
    return;
  v2 = (char *)this + 39976;
  v3 = (__int64 *)((char *)this + 40024);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *((_DWORD *)v2 + 6);
      if ( v25 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventBlockThread, v5, v25);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v2 + 4);
  v6 = (__int64 *)*v3;
  _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
  if ( v6 == v3 )
  {
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v7 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1764) & 0x8000) == 0 )
  {
    v8 = *((_QWORD *)this + 579) - *((_QWORD *)this + 891);
    if ( v8 < qword_1C0076408 )
    {
      v7 = v8 - qword_1C0076408;
      goto LABEL_7;
    }
  }
  v28 = &v27;
  v9 = 0;
  v27 = (__int64)&v27;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v10 = (__int64 *)*v3;
    if ( (__int64 *)*v3 == v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v12 = v10 - 53;
    *((_QWORD *)this + 5593) = v10 - 53;
    v13 = (__int64 *)*v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_29;
    v14 = (__int64 **)v10[1];
    if ( *v14 != v10 )
      goto LABEL_29;
    *v14 = v13;
    v13[1] = (__int64)v14;
    v15 = v12[67];
    *v10 = 0LL;
    v16 = *(_WORD *)(v15 + 4);
    if ( v16 != 2 )
    {
      if ( !v16 || (v24 = 0, v16 == 3) )
        v24 = 1;
      if ( v24 )
        goto LABEL_26;
      goto LABEL_24;
    }
    v17 = v12[15];
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 80) & 0x1001) == 0 )
        goto LABEL_24;
      if ( !v9 )
      {
        v9 = 1;
        VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
        v11 = &unk_1C0076418;
      }
      if ( (*((_DWORD *)this + 1764) & 0x8000) != 0 || *((_QWORD *)this + 579) - v12[58] > v11[*((int *)v12 + 114)] )
      {
        *((_DWORD *)v12 + 18) |= 0x40u;
        *((_QWORD *)v2 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
        VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 53), 0LL, 0LL);
        LOBYTE(v18) = 1;
        LOBYTE(v26) = 0;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v12[15] + 48LL))(
          v12[15],
          v10 - 53,
          v18,
          0LL,
          v26,
          0LL);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
        *((_QWORD *)this + 895) += v12[1];
        ++*((_DWORD *)this + 1792);
        *((_QWORD *)this + 5593) = 0LL;
      }
      else
      {
LABEL_24:
        v19 = v28;
        if ( (__int64 *)*v28 != &v27 )
          goto LABEL_29;
        v10[1] = (__int64)v28;
        *v10 = (__int64)&v27;
        *v19 = (__int64)v10;
        v28 = v10;
LABEL_26:
        *((_QWORD *)this + 5593) = 0LL;
      }
    }
    else
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 37));
      if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 53))
        || (*((_DWORD *)v12 + 19) & 8) != 0 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)v12 + 37);
        *((_QWORD *)this + 5593) = 0LL;
      }
      else
      {
        *((_QWORD *)v2 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
        if ( v12[30] )
          VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)v12 + 17) & 0x3F);
        VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)(v10 - 53));
        *((_QWORD *)this + 895) += v12[1];
        ++*((_DWORD *)this + 1792);
        DXGFASTMUTEX::Release((struct _KTHREAD **)v12 + 37);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
        *((_QWORD *)this + 5593) = 0LL;
      }
    }
  }
  if ( (__int64 *)v27 != &v27 )
  {
    v20 = (__int64 *)v3[1];
    if ( (__int64 *)v10[1] != v3
      || (__int64 *)*v20 != v3
      || *(__int64 **)(v27 + 8) != &v27
      || (__int64 *)*v28 != &v27
      || (*v20 = (__int64)&v27,
          v21 = v28,
          v3[1] = (__int64)v28,
          *v21 = (__int64)v3,
          v22 = v27,
          v28 = v20,
          *(__int64 **)(v27 + 8) != &v27)
      || (__int64 *)*v20 != &v27 )
    {
LABEL_29:
      __fastfail(3u);
    }
    *v20 = v27;
    *(_QWORD *)(v22 + 8) = v20;
  }
  v23 = (__int64 *)*v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 891) = *((_QWORD *)this + 579);
    if ( v23 != v3 )
      v7 = -qword_1C0076408;
  }
LABEL_7:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4LL);
}
