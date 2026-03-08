/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0387F18
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D370C (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0025398 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00255B4 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r8d
  __int64 AllocationCount; // rdx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  int v12; // eax
  __int64 v13; // rbx
  UINT v14; // eax
  int Count; // esi
  struct _EX_RUNDOWN_REF *v16; // r15
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_HANDLE Ptr_high; // ecx
  UINT i; // r12d
  const D3DKMT_HANDLE *phAllocationList; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // r8d
  UINT v23; // r8d
  UINT v24; // r10d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v26; // rdx
  unsigned int v28; // [rsp+54h] [rbp-1B4h] BYREF
  UINT v29; // [rsp+58h] [rbp-1B0h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+60h] [rbp-1A8h] BYREF
  int v31; // [rsp+68h] [rbp-1A0h]
  unsigned int v32; // [rsp+6Ch] [rbp-19Ch]
  struct _EX_RUNDOWN_REF *v33[2]; // [rsp+70h] [rbp-198h] BYREF
  struct DXGPROCESS *v34; // [rsp+80h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v35; // [rsp+88h] [rbp-180h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v36; // [rsp+90h] [rbp-178h]
  _BYTE v37[24]; // [rsp+98h] [rbp-170h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-158h] BYREF
  int v39; // [rsp+C0h] [rbp-148h]

  v34 = a2;
  v35 = this;
  v36 = this;
  v7 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v9 = 11214LL;
    WdLogSingleEntry1(2LL, 11214LL);
    v10 = L"Invalid resource and allocation count";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    v12 = 4 * AllocationCount;
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v9 = 11221LL;
      WdLogSingleEntry1(2LL, 11221LL);
    }
    else
    {
      if ( (unsigned int)(v12 + 56) >= 0x38 )
      {
        v7 = v12 + 56;
        goto LABEL_8;
      }
      v9 = 11226LL;
      WdLogSingleEntry1(2LL, 11226LL);
    }
    v10 = L"Math overflow";
    goto LABEL_3;
  }
LABEL_8:
  v38 = 0LL;
  v39 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v38, this, v7, 0LL, 0LL, 0LL);
  v13 = v38;
  if ( !(_QWORD)v38 )
  {
    WdLogSingleEntry1(6LL, 11235LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_QUERYALLOCATIONRESIDENCY",
      11235LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v38);
    return 3221225495LL;
  }
  *(_QWORD *)v38 = 0LL;
  *(_DWORD *)(v13 + 8) = 0;
  *(_BYTE *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 12) &= 0x1FFu;
  *(_QWORD *)(v13 + 16) = 41LL;
  *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 126);
  *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 118);
  *(_DWORD *)(v13 + 40) = a5->AllocationCount;
  v14 = 1;
  if ( !a5->hResource )
    v14 = a5->AllocationCount;
  v29 = v14;
  Count = -1073741811;
  v31 = -1073741811;
  v32 = 4 * v14 + 4;
  v28 = (4 * v14 + 11) & 0xFFFFFFF8;
  v16 = (struct _EX_RUNDOWN_REF *)operator new[](v28, 0x4B677844u, 64LL);
  v33[1] = v16;
  if ( v16 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v37, a2);
    hResource = a5->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v30, hResource);
      if ( !v30 || (Ptr_high = HIDWORD(v30[2].Ptr)) == 0 )
      {
        WdLogSingleEntry1(2LL, 11266LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid resource handle", 11266LL, 0LL, 0LL, 0LL, 0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
LABEL_22:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
        goto LABEL_45;
      }
      a5->hResource = Ptr_high;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
    }
    else
    {
      for ( i = 0; i < a5->AllocationCount; ++i )
      {
        phAllocationList = a5->phAllocationList;
        if ( a4 )
        {
          v21 = (unsigned int *)&phAllocationList[i];
          if ( (unsigned __int64)v21 >= MmUserProbeAddress )
            v21 = (unsigned int *)MmUserProbeAddress;
          v22 = *v21;
        }
        else
        {
          v22 = phAllocationList[i];
          LODWORD(v30) = v22;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v34, (DXGALLOCATIONREFERENCE *)v33, v22);
        if ( !v33[0] || (v33[0][16].Count & 4) == 0 )
        {
          WdLogSingleEntry1(2LL, 11299LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle",
            11299LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v33);
          goto LABEL_22;
        }
        *(_DWORD *)(v13 + 4LL * i + 56) = HIDWORD(v33[0][2].Ptr);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v33);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    Count = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v35, (struct DXGVMBUSMESSAGE *)&v38, v16, &v28);
    if ( Count >= 0 )
    {
      Count = -1073741823;
      if ( v28 >= v32 )
      {
        Count = v16->Count;
        if ( SLODWORD(v16->Count) >= 0 )
        {
          v23 = 0;
          v24 = v29;
          while ( v23 < v24 )
          {
            pResidencyStatus = a5->pResidencyStatus;
            if ( a4 )
            {
              v26 = &pResidencyStatus[v23];
              if ( (unsigned __int64)v26 >= MmUserProbeAddress )
                v26 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              *v26 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v16->Ptr + v23 + 1);
            }
            else
            {
              pResidencyStatus[v23] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v16->Ptr + v23 + 1);
            }
            ++v23;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 11254LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate D3DKMT_ALLOCATIONRESIDENCYSTATUS",
      11254LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Count = -1073741801;
  }
LABEL_45:
  operator delete(v16);
  if ( Count < 0 )
  {
    WdLogSingleEntry1(2LL, Count);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendQueryAllocationResidency failed: 0x%I64x",
      Count,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v38);
  return (unsigned int)Count;
}
