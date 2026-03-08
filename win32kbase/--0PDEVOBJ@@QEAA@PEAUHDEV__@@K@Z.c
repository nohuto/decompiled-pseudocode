/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001D690 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     GreDeleteSemaphore @ 0x1C002AF30 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C002B370 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00A0C7C (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2, unsigned int a3)
{
  char v3; // r12
  struct PDEV *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  HDEV v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rdx
  HDEV v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // r14
  __int64 v19; // rcx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  HDEV v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  size_t v29; // r13
  NSInstrumentation::CLeakTrackingAllocator *v30; // r15
  int v31; // eax
  __int64 Pool2; // r14
  _QWORD *v33; // rax
  __int64 v34; // r10
  unsigned int v35; // r11d
  void *v36; // rcx
  char *SemaphoreInternal; // rax
  __int64 v38; // rdx
  signed __int32 v39; // ett
  __int64 v40; // rcx
  signed __int32 v41; // ett
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  struct _ERESOURCE *v49; // rcx
  char *v50; // rdx
  char *v51; // rdx
  struct _ERESOURCE v53; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v54; // [rsp+88h] [rbp-78h]
  PVOID BackTrace[28]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+180h] [rbp+80h] BYREF
  __int64 v57; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v58; // [rsp+190h] [rbp+90h] BYREF
  __int64 v59; // [rsp+198h] [rbp+98h] BYREF

  v58 = a3;
  v3 = 0;
  v53.Reserved2 = a2;
  *(_QWORD *)this = 0LL;
  if ( !a2 || (*((_DWORD *)a2 + 10) & 1) == 0 )
    return this;
  v53.SharedWaiters = 0LL;
  v53.ExclusiveWaiters = 0LL;
  LOWORD(v53.OwnerEntry.OwnerThread) = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v53, (struct PDEVOBJ *)&v53.Reserved2);
  v6 = PDEV::Allocate(0LL);
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    v7 = 2LL;
    *((_QWORD *)v6 + 220) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1752LL) = 1348756854;
    v8 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1696LL) = *((_QWORD *)a2 + 212);
    *(_QWORD *)(*(_QWORD *)this + 1704LL) = *((_QWORD *)a2 + 213);
    *(_QWORD *)(*(_QWORD *)this + 1712LL) = *((_QWORD *)a2 + 214);
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 223);
    v9 = (HDEV)(a2 + 1792);
    v10 = (_OWORD *)(*(_QWORD *)this + 1792LL);
    do
    {
      *v10 = *(_OWORD *)v9;
      v10[1] = *((_OWORD *)v9 + 1);
      v10[2] = *((_OWORD *)v9 + 2);
      v10[3] = *((_OWORD *)v9 + 3);
      v10[4] = *((_OWORD *)v9 + 4);
      v10[5] = *((_OWORD *)v9 + 5);
      v10[6] = *((_OWORD *)v9 + 6);
      v10 += 8;
      v11 = *((_OWORD *)v9 + 7);
      v9 += 32;
      *(v10 - 1) = v11;
      --v7;
    }
    while ( v7 );
    v12 = 2LL;
    *v10 = *(_OWORD *)v9;
    v10[1] = *((_OWORD *)v9 + 1);
    v10[2] = *((_OWORD *)v9 + 2);
    *((_QWORD *)v10 + 6) = *((_QWORD *)v9 + 6);
    v13 = (HDEV)(a2 + 2104);
    v14 = (_OWORD *)(*(_QWORD *)this + 2104LL);
    do
    {
      *v14 = *(_OWORD *)v13;
      v14[1] = *((_OWORD *)v13 + 1);
      v14[2] = *((_OWORD *)v13 + 2);
      v14[3] = *((_OWORD *)v13 + 3);
      v14[4] = *((_OWORD *)v13 + 4);
      v14[5] = *((_OWORD *)v13 + 5);
      v14[6] = *((_OWORD *)v13 + 6);
      v14 += 8;
      v15 = *((_OWORD *)v13 + 7);
      v13 += 32;
      *(v14 - 1) = v15;
      --v12;
    }
    while ( v12 );
    *v14 = *(_OWORD *)v13;
    v14[1] = *((_OWORD *)v13 + 1);
    v14[2] = *((_OWORD *)v13 + 2);
    v14[3] = *((_OWORD *)v13 + 3);
    v16 = *(_QWORD *)this;
    *(_OWORD *)(v16 + 2424) = *(_OWORD *)(a2 + 2424);
    *(_OWORD *)(v16 + 2440) = *(_OWORD *)(a2 + 2440);
    *(_OWORD *)(v16 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v16 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v16 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v16 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_QWORD *)(*(_QWORD *)this + 2536LL) = *((_QWORD *)a2 + 317);
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = *((_QWORD *)a2 + 318);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2624LL) = *((_QWORD *)a2 + 328);
    *(_QWORD *)(*(_QWORD *)this + 2632LL) = *((_QWORD *)a2 + 329);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_QWORD *)(*(_QWORD *)this + 2640LL) = *((_QWORD *)a2 + 330);
    *(_DWORD *)(*(_QWORD *)this + 3552LL) = *((_DWORD *)a2 + 888);
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
    v17 = *((_QWORD *)a2 + 321);
    if ( v17 )
    {
      v18 = *(unsigned __int16 *)(v17 + 68) + (unsigned int)*(unsigned __int16 *)(v17 + 70);
      if ( (_DWORD)v18 )
        v19 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                gpLeakTrackingAllocator,
                260LL,
                (unsigned int)v18,
                0x76656447u);
      else
        v19 = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 2568LL) = v19;
      v20 = *(void **)(*(_QWORD *)this + 2568LL);
      if ( !v20 )
        goto LABEL_58;
      memmove(v20, *((const void **)a2 + 321), v18);
    }
    v21 = 1448LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 64LL) = *((_QWORD *)a2 + 8);
    *(_QWORD *)(*(_QWORD *)this + 1424LL) = *((_QWORD *)a2 + 178);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = *((_QWORD *)a2 + 316);
    do
    {
      *(_QWORD *)(v21 + *(_QWORD *)this) = *(_QWORD *)&a2[v21];
      v21 += 8LL;
    }
    while ( v21 < 1496 );
    v22 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1496LL) = *((_QWORD *)a2 + 187);
    *(_QWORD *)(*(_QWORD *)this + 1688LL) = *((_QWORD *)a2 + 211);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_DWORD *)(*(_QWORD *)this + 2584LL) = *((_DWORD *)a2 + 646);
    *(_DWORD *)(*(_QWORD *)this + 2588LL) = *((_DWORD *)a2 + 647);
    v23 = (HDEV)(a2 + 2664);
    v24 = (_OWORD *)(*(_QWORD *)this + 2664LL);
    do
    {
      *v24 = *(_OWORD *)v23;
      v24[1] = *((_OWORD *)v23 + 1);
      v24[2] = *((_OWORD *)v23 + 2);
      v24[3] = *((_OWORD *)v23 + 3);
      v24[4] = *((_OWORD *)v23 + 4);
      v24[5] = *((_OWORD *)v23 + 5);
      v24[6] = *((_OWORD *)v23 + 6);
      v24 += 8;
      v25 = *((_OWORD *)v23 + 7);
      v23 += 32;
      *(v24 - 1) = v25;
      --v22;
    }
    while ( v22 );
    *v24 = *(_OWORD *)v23;
    v24[1] = *((_OWORD *)v23 + 1);
    v24[2] = *((_OWORD *)v23 + 2);
    v24[3] = *((_OWORD *)v23 + 3);
    if ( *((_DWORD *)a2 + 290) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2776LL) = *((_QWORD *)a2 + 160);
      *(_QWORD *)(*(_QWORD *)this + 2784LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2808LL) = *((_QWORD *)a2 + 163);
      *(_QWORD *)(*(_QWORD *)this + 2816LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2824LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2912LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3224LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3208LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3216LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 2984LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3384LL) = *((_QWORD *)a2 + 174);
    }
    v26 = *((_QWORD *)a2 + 445);
    if ( !v26 )
    {
LABEL_49:
      PDEV::InitializeClientReferenceCount(*(PDEV **)this);
      *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
      SemaphoreInternal = GreCreateSemaphoreInternal(0);
      *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
      if ( SemaphoreInternal )
      {
        v38 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v39 = *(_DWORD *)(v38 + 40);
        while ( v39 != _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 40), v39 & 0xFFFFFFBF, v39) );
        *(_QWORD *)(*(_QWORD *)this + 56LL) = GreCreateSemaphoreInternal(0);
        if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
        {
          _m_prefetchw((const void *)(v8 + 40));
          do
          {
            v40 = *(unsigned int *)(v8 + 40);
            LODWORD(v40) = v40 | 0x80000;
            v41 = *(_DWORD *)(v8 + 40);
          }
          while ( v41 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 40), v40, v41) );
          v42 = (_QWORD *)(*(_QWORD *)this + 2600LL);
          v42[1] = v42;
          *v42 = v42;
          v43 = *(_QWORD *)(SGDGetSessionState(v40) + 24);
          EngAcquireSemaphore(*(HSEMAPHORE *)(v43 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v43 + 8), 16);
          **(_QWORD **)this = *(_QWORD *)(v43 + 6080);
          v44 = *(_QWORD *)(v43 + 8);
          *(_QWORD *)(v43 + 6080) = *(_QWORD *)this;
          EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", v44);
          v45 = *(struct _ERESOURCE **)(v43 + 8);
          if ( v45 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v45);
            PsLeavePriorityRegion(v47, v46);
          }
          v48 = (_QWORD *)(*(_QWORD *)this + 3504LL);
          v48[1] = v48;
          *v48 = v48;
          goto LABEL_65;
        }
      }
LABEL_58:
      v49 = *(struct _ERESOURCE **)(*(_QWORD *)this + 48LL);
      if ( v49 )
        GreDeleteSemaphore(v49);
      v50 = *(char **)(*(_QWORD *)this + 3560LL);
      if ( v50 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v50);
        *(_QWORD *)(*(_QWORD *)this + 3560LL) = 0LL;
      }
      v51 = *(char **)(*(_QWORD *)this + 2568LL);
      if ( v51 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v51);
      PDEV::Free(*(struct PDEV **)this);
      *(_QWORD *)this = 0LL;
      goto LABEL_65;
    }
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(v26 + 2 * v27) );
    v28 = 2 * v27 + 2;
    v29 = v28;
    if ( v28 )
    {
      v30 = gpLeakTrackingAllocator;
      v58 = 1886221639;
      v57 = 260LL;
      v59 = v28;
      v31 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v29, 1886221639LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v30 + 14);
        goto LABEL_47;
      }
      if ( v31 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7547u)
          && v29 + 16 >= v29 )
        {
          v33 = (_QWORD *)ExAllocatePool2(v57 & 0xFFFFFFFFFFFFFFFDuLL, v29 + 16, v58);
          Pool2 = (__int64)v33;
          if ( !v33
            || (_InterlockedIncrement64((volatile signed __int64 *)v30 + 14),
                *v33 = 1886221639LL,
                Pool2 = (__int64)(v33 + 2),
                v33 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v30 + 1),
              (const void *)0x706D7547);
          }
          goto LABEL_47;
        }
      }
      else if ( v31 == 2 )
      {
        v56 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7547u, &v56) )
        {
          v53.SpinLock = (KSPIN_LOCK)&v57;
          v54 = &v58;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v30,
                    (__int64)&v53.SpinLock,
                    &v59);
          goto LABEL_47;
        }
        if ( v29 < 0x1000 || (v29 & 0xFFF) != 0 )
        {
          v34 += 16LL;
          v3 = 1;
          v59 = v34;
        }
        Pool2 = ExAllocatePool2(260LL, v34, v35);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v30 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v3 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v30,
                                    Pool2,
                                    v56,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_47;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v30,
                                       Pool2,
                                       v56,
                                       BackTrace) )
          {
            goto LABEL_47;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v30 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
    }
    Pool2 = 0LL;
LABEL_47:
    *(_QWORD *)(*(_QWORD *)this + 3560LL) = Pool2;
    v36 = *(void **)(*(_QWORD *)this + 3560LL);
    if ( v36 )
      memmove(v36, *((const void **)a2 + 445), v29);
    goto LABEL_49;
  }
LABEL_65:
  DEVLOCKOBJ::vDestructor(&v53);
  if ( v53.SharedWaiters )
  {
    if ( LOBYTE(v53.OwnerEntry.OwnerThread) )
    {
      *((_DWORD *)v53.SharedWaiters + 10) &= ~2u;
      LOBYTE(v53.OwnerEntry.OwnerThread) = 0;
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v53.SharedWaiters);
  }
  return this;
}
