/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01C8970
 * Callers:
 *     DxgkOfferAllocations @ 0x1C01D2E60 (DxgkOfferAllocations.c)
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
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C038B62C (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2, char a3)
{
  __int64 v6; // rbx
  unsigned __int64 NumAllocations; // rsi
  const unsigned int *pResources; // r14
  const unsigned int *v9; // r12
  _BYTE *Pool2; // rcx
  __int64 i; // rcx
  __int64 j; // rsi
  __int64 v13; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // r14
  struct DXGTHREAD *DxgThread; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r14d
  const unsigned int *v19; // rdx
  struct DXGTHREAD *v20; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v25; // ebx
  __int64 k; // r14
  __int64 v27; // rsi
  ULONG_PTR m; // rsi
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // r13d
  PVOID v32; // rcx
  PVOID v33; // rcx
  struct _EX_RUNDOWN_REF *v34; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-88h]
  _BYTE v38[64]; // [rsp+78h] [rbp-80h] BYREF
  int v39; // [rsp+B8h] [rbp-40h]

  v34 = (struct _EX_RUNDOWN_REF *)this;
  v6 = 0LL;
  v35 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2837LL) )
  {
    WdLogSingleEntry2(4LL, this, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    return 0LL;
  }
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (pResources = a2->pResources, (pResources != 0LL) == (a2->HandleList != 0LL)) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    return 3221225485LL;
  }
  if ( !pResources )
    pResources = a2->HandleList;
  v9 = pResources;
  Pool2 = 0LL;
  P = 0LL;
  v39 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v38;
    memset(v38, 0, 4 * NumAllocations);
    Pool2 = v38;
LABEL_8:
    v39 = NumAllocations;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( a3 )
  {
    v9 = (const unsigned int *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry2(6LL, this, a2->NumAllocations);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
        (__int64)this,
        a2->NumAllocations,
        0LL,
        0LL,
        0LL);
      if ( P != v38 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v39 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
      return 3221225495LL;
    }
    for ( i = 0LL; (unsigned int)i < a2->NumAllocations; i = (unsigned int)(i + 1) )
    {
      v19 = &pResources[i];
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (const unsigned int *)MmUserProbeAddress;
      v9[i] = *v19;
    }
  }
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    if ( !a2->pResources )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a2->NumAllocations )
          goto LABEL_34;
        v13 = v9[j];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v36, v9[j]);
        if ( v6 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
        v6 = *(_QWORD *)AllocationSafe;
        v35 = *(_QWORD *)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v36[0] )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v36[0] + 88LL));
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v34 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v34) >= 0 )
          {
            DxgThread = (struct DXGTHREAD *)v34;
            if ( v34
              || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v34 = (struct _EX_RUNDOWN_REF *)DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            }
          }
        }
        if ( !v6 )
          break;
        if ( *(DXGDEVICE **)(v6 + 8) != this )
        {
          WdLogSingleEntry3(2LL, this, v6, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%I64x: Allocation 0x%p does not belong to the provided adapter, returning 0x%I64x",
            (__int64)this,
            v6,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_92;
        }
        v16 = *(_QWORD *)(v6 + 24);
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, v6);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_92:
          v33 = P;
          if ( P == v38 || !P )
          {
LABEL_83:
            P = 0LL;
            v39 = 0;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
            return 3221225485LL;
          }
LABEL_97:
          ExFreePoolWithTag(v33, 0);
          goto LABEL_83;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 664LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v16,
                (unsigned int)a2->Priority,
                a2->Flags.Value);
        v18 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v6, v17);
          if ( P != v38 )
          {
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
          P = 0LL;
          v39 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
          return v18;
        }
      }
      WdLogSingleEntry3(3LL, this, v13, -1073741811LL);
      v33 = P;
      if ( P == v38 || !P )
        goto LABEL_83;
      goto LABEL_97;
    }
    for ( k = 0LL; (unsigned int)k < a2->NumAllocations; k = (unsigned int)(k + 1) )
    {
      v27 = v9[k];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v34, v9[k]);
      if ( !v34 )
      {
        WdLogSingleEntry3(3LL, this, v27, -1073741811LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34);
        v32 = P;
        if ( P == v38 || !P )
          goto LABEL_83;
        goto LABEL_82;
      }
      if ( (DXGDEVICE *)v34[1].Count != this )
      {
        WdLogSingleEntry3(2LL, this, v34, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Resource 0x%p does not belong to the provided adapter, returning 0x%I64x",
          (__int64)this,
          (__int64)v34,
          -1073741811LL,
          0LL,
          0LL);
LABEL_77:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34);
        v32 = P;
        if ( P == v38 || !P )
          goto LABEL_83;
LABEL_82:
        ExFreePoolWithTag(v32, 0);
        goto LABEL_83;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)&v34[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
      for ( m = v34[3].Count; m; m = *(_QWORD *)(m + 64) )
      {
        v29 = *(_QWORD *)(m + 24);
        if ( !v29 )
        {
          WdLogSingleEntry1(2LL, m);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            m,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v36);
          goto LABEL_77;
        }
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 664LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v29,
                (unsigned int)a2->Priority,
                a2->Flags.Value);
        v31 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry3(3LL, this, m, v30);
          DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v36);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34);
          if ( P != v38 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v39 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
          return v31;
        }
      }
      DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v36);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v34);
    }
LABEL_34:
    if ( P != v38 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v39 = 0;
    if ( v6 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v34 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v34) >= 0 )
      {
        v20 = (struct DXGTHREAD *)v34;
        if ( v34 || (v20 = DxgkThreadObjectCreateDxgThread(1), (v34 = (struct _EX_RUNDOWN_REF *)v20) != 0LL) )
        {
          if ( *((_DWORD *)v20 + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v20 + 12), 0LL, 0LL);
        }
      }
    }
    return 0LL;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) <= 0x10u )
  {
    if ( P != v38 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v39 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    return 0LL;
  }
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  Current = DXGPROCESS::GetCurrent(v22);
  v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v23 + 4472),
          Current,
          this,
          a2,
          v9);
  if ( P != v38 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v39 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
  return v25;
}
