__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a5,
        const unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  UINT NumAllocations; // eax
  __int64 v12; // r14
  __int64 v13; // rsi
  int *v14; // r14
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // r15
  BOOL *pDiscarded; // rcx
  size_t v19; // r8
  struct _EX_RUNDOWN_REF *v21; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-1ACh]
  __int64 v24; // [rsp+60h] [rbp-1A8h]
  const struct DXGDEVICE *v25; // [rsp+68h] [rbp-1A0h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v26; // [rsp+70h] [rbp-198h]
  const struct DXGDEVICE *v27; // [rsp+78h] [rbp-190h]
  _BYTE v28[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-168h] BYREF
  int v30; // [rsp+B0h] [rbp-158h]

  v21 = a4;
  v25 = a3;
  v26 = this;
  v27 = a3;
  LODWORD(v8) = -1073741811;
  if ( a4 )
  {
    NumAllocations = a5->NumAllocations;
    if ( NumAllocations > 0x8000 )
    {
      v9 = 10431LL;
      WdLogSingleEntry1(2LL, 10431LL);
      v10 = L"NumAllocations is invalid";
      goto LABEL_3;
    }
    v12 = 4 * NumAllocations + 44;
    v23 = v12;
    v22 = (4 * NumAllocations + 51) & 0xFFFFFFF8;
    v29 = 0LL;
    v30 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v29, this, v22 + v12, 0LL, 0LL, 0LL);
    v13 = v29;
    if ( !(_QWORD)v29 )
    {
      WdLogSingleEntry1(6LL, 10443LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        10443LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_32:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v29);
      return (unsigned int)v8;
    }
    *(_QWORD *)v29 = 0LL;
    *(_DWORD *)(v13 + 8) = 0;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 12) &= 0x1FFu;
    *(_QWORD *)(v13 + 16) = 58LL;
    v14 = (int *)(v13 + v12);
    *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 118);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 126);
    *(_DWORD *)(v13 + 32) = a5->NumAllocations;
    *(_DWORD *)(v13 + 28) = HIDWORD(v21[3].Ptr);
    *(_BYTE *)(v13 + 37) = a5->pDiscarded != 0LL;
    if ( a5->pResources )
    {
      *(_BYTE *)(v13 + 36) = 1;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, a2);
      v15 = 0LL;
      if ( a5->NumAllocations )
      {
        while ( 1 )
        {
          v24 = (unsigned int)v15;
          DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v21, a6[v15]);
          if ( !v21 )
            break;
          *(_DWORD *)(v13 + 4 * v15 + 40) = HIDWORD(v21[2].Ptr);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v21);
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= a5->NumAllocations )
            goto LABEL_12;
        }
        WdLogSingleEntry3(3LL, v25, a6[v24], -1073741811LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v21);
LABEL_23:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
        goto LABEL_32;
      }
    }
    else
    {
      *(_BYTE *)(v13 + 36) = 0;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, a2);
      v17 = 0LL;
      if ( a5->NumAllocations )
      {
        while ( 1 )
        {
          v24 = (unsigned int)v17;
          DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)&v21, a6[v17]);
          if ( !v21 )
            break;
          *(_DWORD *)(v13 + 4 * v17 + 40) = HIDWORD(v21[2].Ptr);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= a5->NumAllocations )
            goto LABEL_12;
        }
        WdLogSingleEntry3(3LL, v25, a6[v24], -1073741811LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
        goto LABEL_23;
      }
    }
LABEL_12:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v26, (struct DXGVMBUSMESSAGE *)&v29, v14, &v22);
    v8 = v16;
    if ( v16 < 0 || v22 > v23 )
    {
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendOfferAllocations failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( (int)v8 >= 0 )
        LODWORD(v8) = -1073741823;
    }
    else
    {
      v8 = v14[2];
      if ( (int)v8 >= 0 )
      {
        pDiscarded = a5->pDiscarded;
        if ( pDiscarded )
        {
          v19 = a5->NumAllocations;
          if ( (unsigned __int64)&pDiscarded[v19] > MmUserProbeAddress || &pDiscarded[v19] <= pDiscarded )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(pDiscarded, v14 + 3, v19 * 4);
        }
        a5->PagingFenceValue = *(_QWORD *)v14;
      }
      else
      {
        WdLogSingleEntry1(2LL, v14[2]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendOfferAllocations failed by host: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    goto LABEL_32;
  }
  v9 = 10426LL;
  WdLogSingleEntry1(2LL, 10426LL);
  v10 = L"Paging queue must be present";
LABEL_3:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v8;
}
