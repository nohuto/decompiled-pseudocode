/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C01CBA50
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C01D3300 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1C02DB730 (DxgkReclaimAllocations.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B784 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00250B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C03440A8 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C038D2C0 (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        char a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 NumAllocations; // rsi
  const unsigned int *pResources; // r14
  const unsigned int *v9; // r13
  UINT j; // ecx
  UINT k; // esi
  __int64 v12; // r12
  DXGALLOCATIONREFERENCE *AllocationSafe; // r14
  struct DXGTHREAD *DxgThread; // rax
  DXGDEVICE *Count; // r8
  ULONG_PTR v16; // r8
  BOOL *v17; // r10
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r14d
  BOOL *pDiscarded; // rcx
  BOOL *v22; // rcx
  __int64 v23; // r8
  const unsigned int *v24; // rdx
  struct DXGPAGINGQUEUE *v25; // rax
  UINT i; // edx
  BOOL *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v32; // ebx
  UINT n; // edx
  __int64 m; // rax
  unsigned int v35; // esi
  PVOID v36; // rcx
  DXGDEVICE *v37; // r8
  ULONG_PTR v38; // rsi
  int v39; // r14d
  __int64 v40; // r8
  int *v41; // rdx
  __int64 v42; // r10
  int v43; // eax
  int v44; // edx
  BOOL *v45; // rax
  BOOL *v46; // rdx
  PVOID v47; // rcx
  char v48; // [rsp+50h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v49; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v51; // [rsp+68h] [rbp-F0h] BYREF
  BOOL v52; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGPAGINGQUEUE *v53; // [rsp+78h] [rbp-E0h] BYREF
  int v54; // [rsp+80h] [rbp-D8h] BYREF
  int v55; // [rsp+84h] [rbp-D4h]
  __int64 v56; // [rsp+88h] [rbp-D0h]
  DXGDEVICE *v57; // [rsp+90h] [rbp-C8h]
  UINT v58; // [rsp+98h] [rbp-C0h]
  unsigned int v59; // [rsp+9Ch] [rbp-BCh]
  struct DXGTHREAD *v60; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v61[16]; // [rsp+A8h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-98h]
  _BYTE v64[64]; // [rsp+C8h] [rbp-90h] BYREF
  int v65; // [rsp+108h] [rbp-50h]

  v48 = a4;
  v53 = a2;
  v57 = this;
  v6 = 0LL;
  v49 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2837LL) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v58 = i;
        if ( i >= a3->NumAllocations )
          break;
        v28 = &a3->pDiscarded[i];
        if ( a4 && (unsigned __int64)v28 >= MmUserProbeAddress )
          v28 = (BOOL *)MmUserProbeAddress;
        *v28 = 0;
      }
    }
    WdLogSingleEntry2(4LL, this, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations || (v50 = 0, pResources = a3->pResources, (pResources != 0LL) == (a3->HandleList != 0LL)) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
    return 3221225485LL;
  }
  if ( !pResources )
    pResources = a3->HandleList;
  v9 = pResources;
  P = 0LL;
  v65 = 0;
  if ( (unsigned int)NumAllocations > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_9;
    P = (PVOID)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
  }
  else
  {
    P = v64;
    memset(v64, 0, 4 * NumAllocations);
  }
  v65 = NumAllocations;
  a4 = v48;
LABEL_9:
  if ( a4 )
  {
    v9 = (const unsigned int *)P;
    if ( !P )
    {
      WdLogSingleEntry2(6LL, this, a3->NumAllocations);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
        (__int64)this,
        a3->NumAllocations,
        0LL,
        0LL,
        0LL);
      P = 0LL;
      v65 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
      return 3221225495LL;
    }
    for ( j = 0; j < a3->NumAllocations; ++j )
    {
      v23 = j;
      v24 = &pResources[v23];
      if ( (unsigned __int64)&pResources[v23] >= MmUserProbeAddress )
        v24 = (const unsigned int *)MmUserProbeAddress;
      v9[v23] = *v24;
    }
  }
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    if ( !a3->pResources )
    {
      for ( k = 0; ; ++k )
      {
        if ( k >= a3->NumAllocations )
          goto LABEL_45;
        v56 = 4LL * k;
        v12 = v9[(unsigned __int64)v56 / 4];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(
                           *((_QWORD *)this + 5),
                           (DXGALLOCATIONREFERENCE *)&v62,
                           v9[(unsigned __int64)v56 / 4]);
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v49 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v62 )
          ExReleaseRundownProtection(v62 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v60 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v60) >= 0 )
          {
            DxgThread = v60;
            if ( v60 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v60 = DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            }
          }
        }
        if ( !v6 )
          break;
        Count = (DXGDEVICE *)v6[1].Count;
        if ( Count != this )
        {
          WdLogSingleEntry2(2LL, this, Count);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Mismatch between device and allocation device. Device: 0x%I64x, Allocation Device: 0x%I64x",
            (__int64)this,
            v6[1].Count,
            0LL,
            0LL,
            0LL);
          goto LABEL_124;
        }
        v16 = v6[3].Count;
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, v6);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v6,
            0LL,
            0LL,
            0LL,
            0LL);
          v47 = P;
          if ( P != v64 && P )
LABEL_129:
            ExFreePoolWithTag(v47, 0);
LABEL_112:
          P = 0LL;
          v65 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
          return 3221225485LL;
        }
        v52 = 0;
        if ( a3->pDiscarded )
          v17 = &v52;
        else
          v17 = 0LL;
        if ( v53 )
          v18 = *((_QWORD *)v53 + 4);
        else
          v18 = 0LL;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 672LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v18,
                v16,
                &a3->PagingFenceValue,
                v17);
        v20 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v6, v19);
          if ( P != v64 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v65 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
          return v20;
        }
        if ( v19 == 259 )
          v50 = 259;
        pDiscarded = a3->pDiscarded;
        if ( pDiscarded )
        {
          if ( v48 )
          {
            v22 = &pDiscarded[(unsigned __int64)v56 / 4];
            if ( (unsigned __int64)v22 >= MmUserProbeAddress )
              v22 = (BOOL *)MmUserProbeAddress;
            *v22 = v52;
          }
          else
          {
            pDiscarded[(unsigned __int64)v56 / 4] = v52;
          }
        }
      }
      WdLogSingleEntry3(3LL, this, v12, -1073741811LL);
LABEL_124:
      v47 = P;
      if ( P != v64 && P )
        goto LABEL_129;
      goto LABEL_112;
    }
    for ( m = 0LL; ; m = (unsigned int)(v55 + 1) )
    {
      v55 = m;
      if ( (unsigned int)m >= a3->NumAllocations )
      {
LABEL_45:
        if ( P != v64 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v65 = 0;
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v53 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v53) >= 0 )
          {
            v25 = v53;
            if ( v53 || (v25 = DxgkThreadObjectCreateDxgThread(1), (v53 = v25) != 0LL) )
            {
              if ( *((_DWORD *)v25 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v25 + 12), 0LL, 0LL);
            }
          }
        }
        return v50;
      }
      v56 = 4 * m;
      v35 = v9[m];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v51, v35);
      if ( !v51 )
        break;
      v37 = (DXGDEVICE *)v51[1].Count;
      if ( v37 != this )
      {
        WdLogSingleEntry2(2LL, this, v37);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between device and resource device. Device: 0x%I64x, Resource Device: 0x%I64x",
          (__int64)this,
          v51[1].Count,
          0LL,
          0LL,
          0LL);
        goto LABEL_85;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, (struct DXGFASTMUTEX *const)&v51[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
      v38 = v51[3].Count;
      v39 = 0;
      while ( 1 )
      {
        if ( !v38 )
          goto LABEL_113;
        v40 = *(_QWORD *)(v38 + 24);
        if ( !v40 )
        {
          WdLogSingleEntry1(2LL, v38);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            v38,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v61);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v51);
          v36 = P;
          if ( P == v64 || !P )
            goto LABEL_112;
LABEL_111:
          ExFreePoolWithTag(v36, 0);
          goto LABEL_112;
        }
        v54 = 0;
        v41 = &v54;
        if ( !a3->pDiscarded )
          v41 = 0LL;
        if ( v53 )
          v42 = *((_QWORD *)v53 + 4);
        else
          v42 = 0LL;
        v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                               + 8LL)
                                                                                   + 672LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v42,
                v40,
                &a3->PagingFenceValue,
                v41);
        v59 = v43;
        if ( v43 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v38, v43);
          DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v61);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v51);
          if ( P != v64 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v65 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
          return v59;
        }
        v44 = v50;
        if ( v43 == 259 )
          v44 = 259;
        v50 = v44;
        if ( v54 == 2 )
          break;
        if ( v54 == 1 )
          v39 = 1;
        v38 = *(_QWORD *)(v38 + 64);
      }
      v39 = 2;
LABEL_113:
      v45 = a3->pDiscarded;
      if ( v45 )
      {
        if ( v48 )
        {
          v46 = &v45[(unsigned __int64)v56 / 4];
          if ( (unsigned __int64)&v45[(unsigned __int64)v56 / 4] >= MmUserProbeAddress )
            v46 = (BOOL *)MmUserProbeAddress;
          *v46 = v39;
        }
        else
        {
          v45[(unsigned __int64)v56 / 4] = v39;
        }
      }
      DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v61);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v51);
    }
    WdLogSingleEntry3(3LL, this, v35, -1073741811LL);
LABEL_85:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v51);
    v36 = P;
    if ( P == v64 || !P )
      goto LABEL_112;
    goto LABEL_111;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) <= 0x10u )
  {
    if ( a3->pDiscarded )
    {
      for ( n = 0; n < a3->NumAllocations; ++n )
        a3->pDiscarded[n] = 0;
    }
    if ( P != v64 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v65 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
    return 0LL;
  }
  else
  {
    v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(v29);
    v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v30 + 4472),
            Current,
            this,
            v53,
            a3,
            v9);
    if ( P != v64 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v65 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
    return v32;
  }
}
