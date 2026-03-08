/*
 * XREFs of CcPerformReadAhead @ 0x14020B9E0
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020AA94 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14020D9A0 (MmWaitForCacheManagerPrefetch.c)
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14028A290 (PsGetPagePriorityThread.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmPrefetchForCacheManager @ 0x1406A3DCC (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  signed __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  BOOL v12; // eax
  unsigned __int8 OldIrql; // r15
  signed __int64 v14; // rcx
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  __int64 v17; // rdi
  struct _KTHREAD *v18; // rbx
  int PagePriorityThread; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rbx
  unsigned int v28; // edx
  unsigned __int8 v29; // bl
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int8 v32; // bl
  __int64 result; // rax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  int v42; // [rsp+28h] [rbp-1B0h]
  unsigned int v43; // [rsp+50h] [rbp-188h]
  int v44; // [rsp+54h] [rbp-184h]
  int v45; // [rsp+58h] [rbp-180h]
  int v46; // [rsp+5Ch] [rbp-17Ch]
  int v47; // [rsp+64h] [rbp-174h]
  int v48; // [rsp+68h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-160h] BYREF
  __int64 v51; // [rsp+90h] [rbp-148h]
  BOOL v52; // [rsp+98h] [rbp-140h]
  int v53; // [rsp+9Ch] [rbp-13Ch]
  unsigned int v54; // [rsp+A0h] [rbp-138h]
  unsigned int v55; // [rsp+A4h] [rbp-134h]
  unsigned int v56; // [rsp+A8h] [rbp-130h]
  signed __int64 v57; // [rsp+B0h] [rbp-128h]
  __int64 v58; // [rsp+B8h] [rbp-120h]
  __int64 v59; // [rsp+C0h] [rbp-118h]
  PVOID P; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-108h]
  unsigned int v62; // [rsp+D8h] [rbp-100h]
  __int64 v63; // [rsp+DCh] [rbp-FCh] BYREF
  int v64; // [rsp+ECh] [rbp-ECh]
  __int64 v65; // [rsp+F0h] [rbp-E8h]
  signed __int64 v66; // [rsp+F8h] [rbp-E0h]
  __int64 v67; // [rsp+100h] [rbp-D8h]
  __int64 v68; // [rsp+108h] [rbp-D0h]
  struct _KTHREAD *v69; // [rsp+110h] [rbp-C8h]
  _DWORD *v70; // [rsp+118h] [rbp-C0h]
  __int64 *v71; // [rsp+120h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-A8h]
  _QWORD v73[2]; // [rsp+148h] [rbp-90h] BYREF
  _QWORD v74[2]; // [rsp+158h] [rbp-80h] BYREF
  _QWORD v75[2]; // [rsp+168h] [rbp-70h] BYREF
  unsigned int v76; // [rsp+178h] [rbp-60h]
  int v77; // [rsp+17Ch] [rbp-5Ch]
  __int64 v78; // [rsp+180h] [rbp-58h]
  _QWORD v79[2]; // [rsp+188h] [rbp-50h] BYREF
  unsigned int v80; // [rsp+198h] [rbp-40h]
  int v81; // [rsp+19Ch] [rbp-3Ch]
  __int64 v82; // [rsp+1A0h] [rbp-38h]

  v2 = a2;
  v65 = a2;
  v68 = a1;
  v67 = a2;
  v51 = 0LL;
  v57 = 0LL;
  v66 = 0LL;
  v56 = 0;
  v43 = 0;
  v58 = 0LL;
  v52 = 0;
  v44 = 0;
  v47 = 0;
  v48 = 0;
  v46 = 0;
  P = 0LL;
  v53 = 0;
  v54 = 0;
  v59 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  v51 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
  v3 = *(_QWORD *)(v51 + 224);
  v58 = v3;
  v59 = *(_QWORD *)(v51 + 536);
  v4 = (_DWORD *)(v51 + 156);
  v70 = (_DWORD *)(v51 + 156);
  v5 = (__int64 *)(v51 + 216);
  v71 = (__int64 *)(v51 + 216);
  v6 = *(_QWORD *)(v51 + 216);
  if ( (*(_DWORD *)(v51 + 156) & 1) != 0 )
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 24);
  else
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 16);
  LOBYTE(v6) = 1;
  v8 = v7(v3, v6);
  v45 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      P = 0LL;
      v9 = v57;
      v10 = v43;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v59 + 768), &LockHandle);
        v11 = *(_QWORD *)(v2 + 48);
        v61 = v11;
        if ( v11 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 80));
          v10 = *(_DWORD *)(v11 + 52);
          v12 = v10 == 0;
          v52 = v12;
          v9 = *(_QWORD *)(v11 + 56);
          v57 = v9;
          if ( v10 > 0x800000 )
            v10 = 0x800000;
          v43 = v10;
          *(_DWORD *)(v11 + 52) = 0;
          if ( !v12 )
            *(_QWORD *)(v11 + 64) = v9 + v10;
          if ( (*(_DWORD *)v11 & 0x200000) != 0 )
          {
            v53 = 1;
            v54 = *(_DWORD *)(v11 + 88);
          }
          KxReleaseSpinLock(v11 + 80);
          v44 = (*(_DWORD *)v11 >> 18) & 7;
        }
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v10 = v43;
            v9 = v57;
            v11 = v61;
          }
        }
        __writecr8(OldIrql);
        if ( !v11 || v52 )
          break;
        v14 = *(_QWORD *)(v51 + 8);
        if ( v9 < v14 )
        {
          v48 = 1;
          if ( v9 + v10 >= v14 )
          {
            v10 = v14 - v9;
            v47 = 1;
          }
          v10 = (v10 + 4095) & 0xFFFFF000;
          v43 = v10;
          v15 = v10;
          v62 = v10;
          v66 = v9;
          v56 = v10;
          if ( v53 )
          {
            if ( !v54 )
              KeBugCheckEx(0x34u, 0xABDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v16 = v10;
            if ( v10 > v54 )
              v16 = v54;
            v55 = v16;
          }
          else
          {
            v16 = v10;
            v55 = v10;
          }
          v17 = a1;
          if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
          {
            v75[1] = v9;
            v76 = v10;
            v75[0] = a1;
            v77 = v44;
            v78 = 0LL;
            v73[0] = v75;
            v73[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v73, 1, -2147352576, 5635, 4200706);
          }
          while ( v15 )
          {
            if ( v16 > v15 )
              v16 = v15;
            v55 = v16;
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
            {
              v82 = 0LL;
              v79[1] = v9;
              v80 = v16;
              v79[0] = v17;
              v81 = v44;
              v74[0] = v79;
              v74[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v74, 1, -2147352576, 5643, 4200706);
            }
            v46 |= MmPrefetchForCacheManager(v65, v9, 0, v16, v44, v42, *(_QWORD *)(a1 + 24), (__int64)&P);
            v15 -= v16;
            v62 = v15;
            v9 += v16;
            v57 = v9;
            v17 = a1;
          }
          v2 = v65;
        }
      }
      if ( !P )
        break;
      v18 = KeGetCurrentThread();
      v69 = v18;
      PagePriorityThread = PsGetPagePriorityThread(v18);
      v64 = PagePriorityThread;
      LODWORD(v63) = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v18, v44);
      CcMapAndCopyFromCache(v2, 0LL, (__int64)&v63, v44, *(_QWORD *)(a1 + 24), 0LL);
      PsSetPagePriorityThread((__int64)v18, PagePriorityThread);
    }
    v4 = v70;
    v5 = v71;
  }
  __addgsdword(0x84A4u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v45 )
  {
    v25 = *v5;
    if ( (*v4 & 1) != 0 )
      (*(void (__fastcall **)(__int64))(v25 + 32))(v58);
    else
      (*(void (__fastcall **)(__int64))(v25 + 24))(v58);
  }
  v26 = v59;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v59 + 768), &LockHandle);
  v27 = *(_QWORD *)(v2 + 48);
  v61 = v27;
  if ( v27 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v27 + 80));
    v28 = *(_DWORD *)v27 & 0xFFFEFFFF;
    *(_DWORD *)v27 = v28;
    if ( v47 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v27 + 64) = 0LL;
    if ( !v46 && v48 )
      *(_DWORD *)v27 = v28 & 0xFFFDFFFF;
    KxReleaseSpinLock(v27 + 80);
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v29 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v24 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  __writecr8(v29);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v30 = *(_QWORD *)(a1 + 24);
  if ( v30 )
    IoDiskIoAttributionDereference(v30);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 768), &LockHandle);
  v31 = v51;
  CcDecrementOpenCount(v51);
  *(_DWORD *)(v31 + 152) &= ~0x4000u;
  KxReleaseQueuedSpinLock(&LockHandle);
  v32 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v38 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
    {
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v24 = (v41 & v40[5]) == 0;
      v40[5] &= v41;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  result = v32;
  __writecr8(v32);
  return result;
}
