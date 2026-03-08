/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02D3B84
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C02D6E10 (DxgkSetAllocationPriority.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038CD80 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025484 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C0389190 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  UINT *p_AllocationCount; // rsi
  struct _EX_RUNDOWN_REF *v9; // rdx
  UINT *pPriorities; // rdx
  UINT v11; // esi
  ULONG_PTR i; // rbx
  __int64 v13; // rdx
  UINT j; // r14d
  unsigned int *v15; // rdx
  unsigned int v16; // r15d
  const UINT *v17; // rdx
  UINT v18; // r13d
  _BYTE v19[16]; // [rsp+50h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v20; // [rsp+A8h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  p_AllocationCount = &a2->AllocationCount;
  if ( hResource )
  {
    if ( *p_AllocationCount )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      return 3221225485LL;
    }
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v20, hResource);
    v9 = v20;
    if ( !v20 )
    {
      WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_9:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
      return 3221225485LL;
    }
    if ( (DXGDEVICE *)v20[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v20, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
        (__int64)this,
        (__int64)v20,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_9;
    }
    if ( a3 )
    {
      pPriorities = (UINT *)a2->pPriorities;
      if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
        pPriorities = (UINT *)MmUserProbeAddress;
      v11 = *pPriorities;
      v9 = v20;
    }
    else
    {
      v11 = *a2->pPriorities;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)&v9[10], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    for ( i = v20[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v13 = *(_QWORD *)(i + 24);
      if ( !v13 )
      {
        WdLogSingleEntry1(2LL, i);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          i,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v19);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
        return -1073741811LL;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 192LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v13,
        v11);
    }
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v19);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
    return 0LL;
  }
  if ( !*p_AllocationCount )
    return 0LL;
  for ( j = 0; ; ++j )
  {
    if ( j >= *p_AllocationCount )
      return 0LL;
    if ( a3 )
    {
      v15 = (unsigned int *)&a2->phAllocationList[j];
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v16 = *v15;
      v17 = &a2->pPriorities[j];
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (const UINT *)MmUserProbeAddress;
      v18 = *v17;
    }
    else
    {
      v16 = a2->phAllocationList[j];
      v18 = a2->pPriorities[j];
    }
    DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v20, v16);
    if ( !v20 )
    {
      WdLogSingleEntry3(3LL, this, v16, -1073741811LL);
LABEL_37:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
      return 3221225485LL;
    }
    if ( (DXGDEVICE *)v20[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v20, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)this,
        (__int64)v20,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_37;
    }
    if ( !v20[3].Count )
      break;
    (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 192LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
      v20[3].Count,
      v18);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
  }
  WdLogSingleEntry1(2LL, v20);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Allocation 0x%p does not have a VidMm handle",
    (__int64)v20,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
  return -1073741811LL;
}
