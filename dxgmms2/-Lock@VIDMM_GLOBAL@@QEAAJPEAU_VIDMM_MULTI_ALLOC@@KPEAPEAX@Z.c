/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00016B0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E62C4 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  int v7; // r12d
  __int64 v8; // rcx
  __int64 *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  char v18; // bl
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v33; // rax
  __int64 v34; // rdx
  int v35; // r10d
  __int64 v36; // r9
  int v37; // r8d
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // rax
  struct VIDMM_PAGING_QUEUE *v42; // rdx
  __int64 v43; // rax
  const unsigned __int64 *v44; // rbx
  struct _VIDSCH_SYNC_OBJECT **v45; // rsi
  __int128 v46; // [rsp+50h] [rbp-88h] BYREF
  __int128 v47; // [rsp+60h] [rbp-78h]
  __int128 v48; // [rsp+70h] [rbp-68h]
  __int128 v49; // [rsp+80h] [rbp-58h]
  __int128 v50; // [rsp+90h] [rbp-48h]
  __int64 v51; // [rsp+A0h] [rbp-38h]
  __int64 v52; // [rsp+F8h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = 0;
  if ( a3 )
  {
    WdLogSingleEntry2(1LL, a3, 0LL);
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
  v10 = *a2;
  v11 = **a2;
  if ( (**(_DWORD **)(v11 + 536) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 23379LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225485LL;
  }
  v13 = a2[12];
  if ( *((_WORD *)v13 + 2) )
  {
    v14 = *((unsigned __int16 *)v13 + 2);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, (unsigned int)v14);
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      return 3221225485LL;
    }
    WdLogSingleEntry2(2LL, a2, v14);
  }
  if ( (**(_DWORD **)(v11 + 536) & 8) == 0 )
  {
    v16 = (_QWORD *)v10[1];
    if ( *v16 != PsGetCurrentProcess() && (*(_DWORD *)(v11 + 72) & 0x1000) == 0 )
    {
      WdLogSingleEntry1(1LL, 23414LL);
      DxgkLogInternalTriageEvent(v17, 0x40000LL);
      return 3221225485LL;
    }
  }
  v18 = 0;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    v18 = *(_BYTE *)(**a2 + 68) >> 7;
  v19 = **(_DWORD **)(v11 + 536);
  if ( (v19 & 0x20000000) != 0 && (v19 & 0x40000000) == 0 && !v18 )
  {
    v20 = *((_QWORD *)this + 3);
    v21 = *(_DWORD *)(v20 + 436);
    if ( (v21 & 0x10) == 0 && (v21 & 8) == 0 && (*(_DWORD *)(v20 + 2284) & 0x80u) == 0 && v10 != *(__int64 **)(v11 + 88) )
    {
      WdLogSingleEntry1(1LL, 23439LL);
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11 + 504, 0LL);
  if ( *(_DWORD *)(v11 + 360) && !*(_BYTE *)(v11 + 80) )
  {
    WdLogSingleEntry1(1LL, 23450LL);
LABEL_39:
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
    ExReleasePushLockExclusiveEx(v11 + 504, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v10 + 19) )
  {
    if ( (*(_DWORD *)(v11 + 72) & 0x80u) == 0 )
    {
      if ( (*(_DWORD *)(v11 + 68) & 0x80u) == 0 )
      {
        WdLogSingleEntry1(1LL, 23501LL);
        goto LABEL_39;
      }
    }
    else if ( (**(_DWORD **)(v11 + 536) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 68) & 0x40) == 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0 )
      {
        WdLogSingleEntry1(1LL, 23476LL);
        goto LABEL_39;
      }
    }
    else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)
           && VIDMM_GLOBAL::NeedsApertureForLock(this, (struct _VIDMM_GLOBAL_ALLOC *)v11)
           && !v24
           && (*(_DWORD *)(v11 + 68) & 0x100) == 0 )
    {
      WdLogSingleEntry1(1LL, 23486LL);
      goto LABEL_39;
    }
  }
  if ( v10[3] )
  {
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v11 + 320) == KeGetCurrentThread() )
    {
      if ( *(int *)(v11 + 328) <= 0 )
      {
        WdLogSingleEntry1(1LL, 491LL);
        DxgkLogInternalTriageEvent(v25, 262146LL);
      }
      ++*(_DWORD *)(v11 + 328);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 304, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v28 = *(_DWORD *)(v11 + 332);
          if ( v28 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, v28);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v11 + 312));
        ExAcquirePushLockExclusiveEx(v11 + 304, 0LL);
      }
      if ( *(_QWORD *)(v11 + 320) )
      {
        WdLogSingleEntry1(1LL, 515LL);
        DxgkLogInternalTriageEvent(v29, 262146LL);
      }
      if ( *(_DWORD *)(v11 + 328) )
      {
        WdLogSingleEntry1(1LL, 516LL);
        DxgkLogInternalTriageEvent(v30, 262146LL);
      }
      *(_QWORD *)(v11 + 320) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = 1;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10[1] + 24) + 152LL))(*(_QWORD *)(v10[1] + 24), v10[3]);
    if ( *(struct _KTHREAD **)(v11 + 320) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v11 + 296, 0LL, 0LL);
    if ( *(int *)(v11 + 328) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v31, 262146LL);
    }
    if ( (*(_DWORD *)(v11 + 328))-- == 1 )
    {
      *(_QWORD *)(v11 + 320) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 304, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v33 = *a2;
  v52 = 0LL;
  v34 = *v33;
  if ( !*((_DWORD *)v33 + 19) )
  {
    v35 = *(_DWORD *)(v34 + 72);
    v36 = *(_QWORD *)(v34 + 120);
    LODWORD(v52) = 1;
    if ( (v35 & 0x80u) == 0 )
    {
      LODWORD(v52) = 5;
    }
    else if ( v36 )
    {
      if ( (*((_DWORD *)this + 1764) & 0x20) != 0 )
      {
LABEL_82:
        ExReleasePushLockExclusiveEx(v11 + 504, 0LL);
        KeLeaveCriticalRegion();
        v51 = 0LL;
        v40 = 176LL * (*(_DWORD *)(v11 + 68) & 0x3F);
        v48 = 0LL;
        v46 = 0LL;
        v41 = a2[1];
        v47 = 0LL;
        LODWORD(v46) = 208;
        v49 = 0LL;
        v42 = (struct VIDMM_PAGING_QUEUE *)(v41[10] + v40);
        v50 = 0LL;
        *(_QWORD *)&v47 = a2;
        *(_QWORD *)&v48 = a4;
        DWORD2(v48) = 0;
        v7 = VIDMM_GLOBAL::QueueDeferredCommand(this, v42, (struct _VIDMM_DEFERRED_COMMAND *)&v46, 1, 0LL);
        goto LABEL_84;
      }
      v37 = *(_DWORD *)(v36 + 80);
      if ( (v37 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v34 + 536) & 4) != 0 && !*(_BYTE *)(v36 + 474) || (v35 & 0x10000) != 0 )
          goto LABEL_82;
        if ( (v37 & 4) != 0 )
        {
          if ( ((*a2)[4] & 1) == 0 )
          {
            LODWORD(v52) = 3;
            if ( *(_QWORD *)(v34 + 240) )
            {
LABEL_74:
              v38 = 1;
              goto LABEL_81;
            }
          }
        }
        else
        {
          if ( (v37 & 0x2000) == 0 )
            goto LABEL_74;
          v39 = *(_QWORD *)(v34 + 88);
          if ( !v39 || (*(_BYTE *)(v39 + 32) & 1) == 0 )
            goto LABEL_74;
          LODWORD(v52) = 0;
        }
      }
    }
  }
  v7 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v52, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  v38 = BYTE4(v52);
LABEL_81:
  if ( v38 )
    goto LABEL_82;
  ExReleasePushLockExclusiveEx(v11 + 504, 0LL);
  KeLeaveCriticalRegion();
LABEL_84:
  if ( v7 >= 0 && (*((_BYTE *)this + 40936) & 0x40) == 0 )
  {
    v43 = *(_DWORD *)(v11 + 68) & 0x3F;
    v44 = (const unsigned __int64 *)((char *)this + 8 * v43 + 5480);
    v45 = (struct _VIDSCH_SYNC_OBJECT **)((char *)this + 8 * v43 + 5992);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForFences(this, v45, (const unsigned __int64 *)(v11 + 160), 1u, v44);
  }
  return (unsigned int)v7;
}
