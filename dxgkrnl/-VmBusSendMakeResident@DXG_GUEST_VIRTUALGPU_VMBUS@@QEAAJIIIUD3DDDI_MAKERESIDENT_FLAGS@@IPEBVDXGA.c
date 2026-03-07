__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned int a2,
        int a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  __int64 v12; // rcx
  int v13; // esi
  unsigned int v14; // eax
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+78h] [rbp-90h]
  _QWORD v23[2]; // [rsp+188h] [rbp+80h] BYREF
  int v24; // [rsp+198h] [rbp+90h]

  v20 = a2;
  if ( a6 - 1 > 0x7FFF )
  {
    WdLogSingleEntry1(2LL, 11573LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocations is invalid", 11573LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  else
  {
    *(_OWORD *)&v21[1] = 0LL;
    v22 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v21[1], this, 4 * a6 + 44, 0LL, 0LL, 0LL);
    v12 = v21[1];
    if ( v21[1] )
    {
      v14 = v20;
      *(_BYTE *)(v21[1] + 12LL) = 0;
      *(_DWORD *)(v12 + 12) &= 0x1FFu;
      *(_DWORD *)(v12 + 8) = v14;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 11LL;
      *(struct D3DDDI_MAKERESIDENT_FLAGS *)(v12 + 32) = a5;
      *(_DWORD *)(v12 + 24) = a3;
      *(_DWORD *)(v12 + 28) = a4;
      *(_DWORD *)(v12 + 36) = a6;
      if ( a6 )
      {
        v16 = (_DWORD *)(v12 + 40);
        v17 = a6;
        do
        {
          v18 = *(_QWORD *)a7;
          a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
          *v16++ = *(_DWORD *)(v18 + 20);
          --v17;
        }
        while ( v17 );
      }
      v20 = 24;
      v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v21[1], v23, &v20);
      if ( v13 < 0 )
        goto LABEL_14;
      v13 = -1073741823;
      if ( v20 < 0x18 )
        goto LABEL_14;
      if ( a8 )
        *a8 = v23[0];
      if ( a9 )
        *a9 = v23[1];
      v13 = v24;
      if ( v24 < 0 )
      {
LABEL_14:
        WdLogSingleEntry1(2LL, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 11581LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        11581LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v13 = -1073741801;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21[1]);
    return (unsigned int)v13;
  }
}
