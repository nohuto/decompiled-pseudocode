/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C02D2C0C
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C02D5060 (DxgkGetAllocationPriority.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A4E0 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C0384758 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  UINT *p_AllocationCount; // r14
  UINT v9; // r14d
  ULONG_PTR j; // rsi
  __int64 v11; // rdx
  _DWORD *pPriorities; // rdx
  UINT i; // esi
  __int64 v14; // r15
  unsigned int *v15; // rdx
  unsigned int v16; // r12d
  _QWORD *v17; // r8
  UINT *v18; // rdx
  struct _EX_RUNDOWN_REF *v19; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-40h] BYREF
  UINT v21; // [rsp+B8h] [rbp+20h] BYREF

  v21 = 0;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  p_AllocationCount = &a2->AllocationCount;
  if ( !hResource )
  {
    if ( *p_AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *p_AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v14 = i;
          v15 = (unsigned int *)&a2->phAllocationList[v14];
          if ( (unsigned __int64)v15 >= MmUserProbeAddress )
            v15 = (unsigned int *)MmUserProbeAddress;
          v16 = *v15;
        }
        else
        {
          v14 = i;
          v16 = a2->phAllocationList[v14];
        }
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v19, v16);
        if ( !v19 )
          break;
        v17 = (_QWORD *)*((_QWORD *)this + 2);
        if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) != v17[2] )
        {
          WdLogSingleEntry3(2LL, this, v19, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            (__int64)v19,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        if ( !v19[3].Count )
        {
          WdLogSingleEntry1(2LL, v19);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v19,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v17[95] + 8LL) + 1144LL))(
          v17[96],
          v19[3].Count,
          &v21);
        if ( a3 )
        {
          v18 = &a2->pPriorities[i];
          if ( (unsigned __int64)v18 >= MmUserProbeAddress )
            v18 = (UINT *)MmUserProbeAddress;
          *v18 = v21;
        }
        else
        {
          a2->pPriorities[v14] = v21;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
      }
      WdLogSingleEntry3(3LL, this, v16, -1073741811LL);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( *p_AllocationCount || a2->phAllocationList )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v19, hResource);
  if ( !v19 || *(_DWORD *)(v19[1].Count + 468) != a2->hDevice )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_25:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v19);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)&v19[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v9 = 0;
  for ( j = v19[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v11 = *(_QWORD *)(j + 24);
    if ( !v11 )
    {
      WdLogSingleEntry1(2LL, j);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Allocation 0x%p does not have a VidMm handle",
        j,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v20);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                    + 1144LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
      v11,
      &v21);
    if ( v9 <= v21 )
      v9 = v21;
  }
  if ( a3 )
  {
    pPriorities = a2->pPriorities;
    if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
      pPriorities = (_DWORD *)MmUserProbeAddress;
    *pPriorities = v9;
  }
  else
  {
    *a2->pPriorities = v9;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v20);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v19);
  return 0LL;
}
