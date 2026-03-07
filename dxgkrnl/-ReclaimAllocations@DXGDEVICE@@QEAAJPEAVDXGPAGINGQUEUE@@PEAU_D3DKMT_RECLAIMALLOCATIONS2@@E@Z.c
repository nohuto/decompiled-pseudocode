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
  __int64 v29; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v31; // ebx
  UINT n; // edx
  __int64 m; // rax
  unsigned int v34; // esi
  PVOID v35; // rcx
  DXGDEVICE *v36; // r8
  ULONG_PTR v37; // rsi
  int v38; // r14d
  __int64 v39; // r8
  int *v40; // rdx
  __int64 v41; // r10
  int v42; // eax
  int v43; // edx
  BOOL *v44; // rax
  BOOL *v45; // rdx
  PVOID v46; // rcx
  char v47; // [rsp+50h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v48; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v50; // [rsp+68h] [rbp-F0h] BYREF
  BOOL v51; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGPAGINGQUEUE *v52; // [rsp+78h] [rbp-E0h] BYREF
  int v53; // [rsp+80h] [rbp-D8h] BYREF
  int v54; // [rsp+84h] [rbp-D4h]
  __int64 v55; // [rsp+88h] [rbp-D0h]
  DXGDEVICE *v56; // [rsp+90h] [rbp-C8h]
  UINT v57; // [rsp+98h] [rbp-C0h]
  unsigned int v58; // [rsp+9Ch] [rbp-BCh]
  struct DXGTHREAD *v59; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v60[16]; // [rsp+A8h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v61; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-98h]
  _BYTE v63[64]; // [rsp+C8h] [rbp-90h] BYREF
  int v64; // [rsp+108h] [rbp-50h]

  v47 = a4;
  v52 = a2;
  v56 = this;
  v6 = 0LL;
  v48 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2837LL) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v57 = i;
        if ( i >= a3->NumAllocations )
          break;
        v28 = &a3->pDiscarded[i];
        if ( a4 && (unsigned __int64)v28 >= MmUserProbeAddress )
          v28 = (BOOL *)MmUserProbeAddress;
        *v28 = 0;
      }
    }
    WdLogSingleEntry2(4LL, this, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations || (v49 = 0, pResources = a3->pResources, (pResources != 0LL) == (a3->HandleList != 0LL)) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
    return 3221225485LL;
  }
  if ( !pResources )
    pResources = a3->HandleList;
  v9 = pResources;
  P = 0LL;
  v64 = 0;
  if ( (unsigned int)NumAllocations > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_9;
    P = (PVOID)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
  }
  else
  {
    P = v63;
    memset(v63, 0, 4 * NumAllocations);
  }
  v64 = NumAllocations;
  a4 = v47;
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
      v64 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
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
        v55 = 4LL * k;
        v12 = v9[(unsigned __int64)v55 / 4];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(
                           *((_QWORD *)this + 5),
                           (DXGALLOCATIONREFERENCE *)&v61,
                           v9[(unsigned __int64)v55 / 4]);
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v48 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v61 )
          ExReleaseRundownProtection(v61 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v59 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v59) >= 0 )
          {
            DxgThread = v59;
            if ( v59 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v59 = DxgThread) != 0LL) )
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
          v46 = P;
          if ( P != v63 && P )
LABEL_129:
            ExFreePoolWithTag(v46, 0);
LABEL_112:
          P = 0LL;
          v64 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
          return 3221225485LL;
        }
        v51 = 0;
        if ( a3->pDiscarded )
          v17 = &v51;
        else
          v17 = 0LL;
        if ( v52 )
          v18 = *((_QWORD *)v52 + 4);
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
          if ( P != v63 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v64 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
          return v20;
        }
        if ( v19 == 259 )
          v49 = 259;
        pDiscarded = a3->pDiscarded;
        if ( pDiscarded )
        {
          if ( v47 )
          {
            v22 = &pDiscarded[(unsigned __int64)v55 / 4];
            if ( (unsigned __int64)v22 >= MmUserProbeAddress )
              v22 = (BOOL *)MmUserProbeAddress;
            *v22 = v51;
          }
          else
          {
            pDiscarded[(unsigned __int64)v55 / 4] = v51;
          }
        }
      }
      WdLogSingleEntry3(3LL, this, v12, -1073741811LL);
LABEL_124:
      v46 = P;
      if ( P != v63 && P )
        goto LABEL_129;
      goto LABEL_112;
    }
    for ( m = 0LL; ; m = (unsigned int)(v54 + 1) )
    {
      v54 = m;
      if ( (unsigned int)m >= a3->NumAllocations )
      {
LABEL_45:
        if ( P != v63 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v64 = 0;
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v52 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v52) >= 0 )
          {
            v25 = v52;
            if ( v52 || (v25 = DxgkThreadObjectCreateDxgThread(1), (v52 = v25) != 0LL) )
            {
              if ( *((_DWORD *)v25 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v25 + 12), 0LL, 0LL);
            }
          }
        }
        return v49;
      }
      v55 = 4 * m;
      v34 = v9[m];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v50, v34);
      if ( !v50 )
        break;
      v36 = (DXGDEVICE *)v50[1].Count;
      if ( v36 != this )
      {
        WdLogSingleEntry2(2LL, this, v36);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between device and resource device. Device: 0x%I64x, Resource Device: 0x%I64x",
          (__int64)this,
          v50[1].Count,
          0LL,
          0LL,
          0LL);
        goto LABEL_85;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v60, (struct DXGFASTMUTEX *const)&v50[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v60);
      v37 = v50[3].Count;
      v38 = 0;
      while ( 1 )
      {
        if ( !v37 )
          goto LABEL_113;
        v39 = *(_QWORD *)(v37 + 24);
        if ( !v39 )
        {
          WdLogSingleEntry1(2LL, v37);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            v37,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v60);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v50);
          v35 = P;
          if ( P == v63 || !P )
            goto LABEL_112;
LABEL_111:
          ExFreePoolWithTag(v35, 0);
          goto LABEL_112;
        }
        v53 = 0;
        v40 = &v53;
        if ( !a3->pDiscarded )
          v40 = 0LL;
        if ( v52 )
          v41 = *((_QWORD *)v52 + 4);
        else
          v41 = 0LL;
        v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                               + 8LL)
                                                                                   + 672LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v41,
                v39,
                &a3->PagingFenceValue,
                v40);
        v58 = v42;
        if ( v42 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v37, v42);
          DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v60);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v50);
          if ( P != v63 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v64 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
          return v58;
        }
        v43 = v49;
        if ( v42 == 259 )
          v43 = 259;
        v49 = v43;
        if ( v53 == 2 )
          break;
        if ( v53 == 1 )
          v38 = 1;
        v37 = *(_QWORD *)(v37 + 64);
      }
      v38 = 2;
LABEL_113:
      v44 = a3->pDiscarded;
      if ( v44 )
      {
        if ( v47 )
        {
          v45 = &v44[(unsigned __int64)v55 / 4];
          if ( (unsigned __int64)&v44[(unsigned __int64)v55 / 4] >= MmUserProbeAddress )
            v45 = (BOOL *)MmUserProbeAddress;
          *v45 = v38;
        }
        else
        {
          v44[(unsigned __int64)v55 / 4] = v38;
        }
      }
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v60);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v50);
    }
    WdLogSingleEntry3(3LL, this, v34, -1073741811LL);
LABEL_85:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v50);
    v35 = P;
    if ( P == v63 || !P )
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
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v64 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
    return 0LL;
  }
  else
  {
    v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    v31 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v29 + 4472),
            Current,
            this,
            v52,
            a3,
            v9);
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v64 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48);
    return v31;
  }
}
