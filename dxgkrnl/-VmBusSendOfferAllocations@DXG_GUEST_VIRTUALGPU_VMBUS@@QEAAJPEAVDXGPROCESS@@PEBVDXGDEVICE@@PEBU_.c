__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_OFFERALLOCATIONS *a4,
        const unsigned int *a5)
{
  UINT NumAllocations; // r8d
  __int64 v9; // rsi
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  int v16; // eax
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int64 v20; // r9
  int v21; // ecx
  struct _EX_RUNDOWN_REF *v22; // rdx
  struct _MDL *v23; // [rsp+20h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v24; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned int *v25; // [rsp+58h] [rbp-A8h]
  const struct DXGDEVICE *v26; // [rsp+60h] [rbp-A0h]
  DXG_VMBUS_CHANNEL_BASE *v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[32]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGKVMB_COMMAND_BASE *v29[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp-60h]

  v26 = a3;
  NumAllocations = a4->NumAllocations;
  v27 = this;
  LODWORD(v9) = -1073741811;
  v25 = a5;
  if ( NumAllocations > 0x8000 )
  {
    WdLogSingleEntry1(2LL, 10345LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocations is invalid", 10345LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v9;
  }
  *(_OWORD *)v29 = 0LL;
  v30 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v29, this, 4 * NumAllocations + 44, 0LL, 0LL, 0LL);
  v10 = v29[0];
  if ( !v29[0] )
  {
    WdLogSingleEntry1(6LL, 10354LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate storage for input buffer",
      10354LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  *((_BYTE *)v29[0] + 12) = 0;
  *((_DWORD *)v10 + 3) &= 0x1FFu;
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 57LL;
  *((_DWORD *)v10 + 6) = *((_DWORD *)a3 + 118);
  *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 126);
  *((_DWORD *)v10 + 7) = a4->NumAllocations;
  *((_DWORD *)v10 + 8) = a4->Priority;
  *((_DWORD *)v10 + 9) = a4->Flags.0;
  if ( a4->pResources )
  {
    *((_BYTE *)v10 + 40) = 1;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, a2);
    v11 = 0;
    if ( a4->NumAllocations )
    {
      while ( 1 )
      {
        v12 = (v25[v11] >> 6) & 0xFFFFFF;
        if ( v12 >= *((_DWORD *)a2 + 74) )
          goto LABEL_13;
        v13 = *((_QWORD *)a2 + 35);
        if ( ((v25[v11] >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
          goto LABEL_13;
        if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
          goto LABEL_13;
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
        if ( !v14 )
          goto LABEL_13;
        if ( v14 != 4 )
          break;
        v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * v12);
LABEL_14:
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v24, v15);
        if ( !v24 )
        {
          WdLogSingleEntry3(3LL, v26, v25[v11], -1073741811LL);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v24);
          goto LABEL_35;
        }
        *((_DWORD *)v10 + v11 + 11) = HIDWORD(v24[2].Ptr);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v24);
        if ( ++v11 >= a4->NumAllocations )
          goto LABEL_16;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
      v15 = 0LL;
      goto LABEL_14;
    }
LABEL_16:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    v16 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v27, (unsigned __int8 *)v29[1], v29[0], v30, v23);
    v9 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendOfferAllocations failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_18;
  }
  *((_BYTE *)v10 + 40) = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, a2);
  v18 = 0;
  if ( !a4->NumAllocations )
    goto LABEL_16;
  while ( 1 )
  {
    v19 = (v25[v18] >> 6) & 0xFFFFFF;
    if ( v19 >= *((_DWORD *)a2 + 74) )
      goto LABEL_29;
    v20 = *((_QWORD *)a2 + 35);
    if ( ((v25[v18] >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60) )
      goto LABEL_29;
    if ( (*(_DWORD *)(v20 + 16LL * v19 + 8) & 0x2000) != 0 )
      goto LABEL_29;
    v21 = *(_DWORD *)(v20 + 16LL * v19 + 8) & 0x1F;
    if ( !v21 )
      goto LABEL_29;
    if ( v21 != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
      v22 = 0LL;
      goto LABEL_30;
    }
    v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * v19);
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24, v22);
    if ( !v24 )
      break;
    *((_DWORD *)v10 + v18 + 11) = HIDWORD(v24[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
    if ( ++v18 >= a4->NumAllocations )
      goto LABEL_16;
  }
  WdLogSingleEntry3(3LL, v26, v25[v18], -1073741811LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
LABEL_18:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
  return (unsigned int)v9;
}
