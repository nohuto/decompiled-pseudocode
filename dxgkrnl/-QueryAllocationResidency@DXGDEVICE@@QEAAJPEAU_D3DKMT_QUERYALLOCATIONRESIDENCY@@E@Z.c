/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D370C
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C02D5F50 (DxgkQueryAllocationResidency.c)
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
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0387F18 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  unsigned __int8 v3; // r12
  D3DKMT_HANDLE hResource; // r8d
  UINT *p_AllocationCount; // r14
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v8; // ebx
  ULONG_PTR i; // r15
  int v11; // eax
  _DWORD *pResidencyStatus; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned int *v16; // rdx
  unsigned int v17; // r13d
  struct DXGPROCESS *v18; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v19; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v20; // r8
  _BYTE v21[72]; // [rsp+50h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v22; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v23; // [rsp+B0h] [rbp+18h]

  v23 = a3;
  v3 = a3;
  hResource = a2->hResource;
  p_AllocationCount = &a2->AllocationCount;
  if ( hResource && *p_AllocationCount )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4472LL),
             this[5],
             (struct DXGDEVICE *)this,
             v3,
             a2);
  if ( !hResource )
  {
    v13 = *p_AllocationCount;
    if ( (_DWORD)v13 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= *p_AllocationCount )
          return 0LL;
        if ( v3 )
        {
          v15 = v14;
          v16 = (unsigned int *)&a2->phAllocationList[v14];
          if ( (unsigned __int64)v16 >= MmUserProbeAddress )
            v16 = (unsigned int *)MmUserProbeAddress;
          v17 = *v16;
        }
        else
        {
          v15 = v14;
          v17 = a2->phAllocationList[v14];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v22, v17);
        if ( !v22 )
          break;
        v18 = this[2];
        if ( *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) != *((_QWORD *)v18 + 2) )
        {
          WdLogSingleEntry3(2LL, this, v22, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            (__int64)v22,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        v19 = (*(unsigned int (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*((_QWORD *)v18 + 95) + 8LL) + 168LL))(
                *((_QWORD *)v18 + 96),
                v22[3].Count);
        if ( v23 )
        {
          v20 = &a2->pResidencyStatus[v15];
          if ( (unsigned __int64)v20 >= MmUserProbeAddress )
            v20 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v20 = v19;
        }
        else
        {
          a2->pResidencyStatus[v15] = v19;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
        v14 = (unsigned int)(v14 + 1);
        v3 = v23;
      }
      WdLogSingleEntry3(3LL, this, v17, -1073741811LL);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
      return 3221225485LL;
    }
    WdLogSingleEntry3(3LL, this, v13, -1073741811LL);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v22, hResource);
  if ( !v22 )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) != *((_QWORD *)this[2] + 2) )
  {
    WdLogSingleEntry3(2LL, this, v22, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v22,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)&v22[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  for ( i = v22[3].Count; i; i = *(_QWORD *)(i + 64) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 168LL))(
            *((_QWORD *)this[2] + 96),
            *(_QWORD *)(i + 24));
    if ( v11 == 3 )
    {
      v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
      break;
    }
    if ( v11 == 2 )
      v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
  }
  if ( v3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v8;
  }
  else
  {
    *a2->pResidencyStatus = v8;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v21);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
  return 0LL;
}
