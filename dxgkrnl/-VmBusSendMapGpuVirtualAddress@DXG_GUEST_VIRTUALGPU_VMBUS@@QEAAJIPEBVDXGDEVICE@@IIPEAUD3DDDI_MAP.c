__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        const struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  unsigned int v14; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v15[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+78h] [rbp-90h]
  _QWORD v17[2]; // [rsp+188h] [rbp+80h] BYREF
  int v18; // [rsp+198h] [rbp+90h]

  v16 = 0;
  *(_OWORD *)&v15[1] = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15[1], this, 0x88u, 0LL, 0LL, 0LL);
  v10 = v15[1];
  if ( v15[1] )
  {
    *(_QWORD *)v15[1] = 0LL;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 12) &= 0x1FFu;
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 17;
    *(struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v10 + 24) = *a6;
    *(_DWORD *)(v10 + 56) = a5;
    *(_DWORD *)(v10 + 24) = a4;
    if ( a3 )
      v12 = *((_DWORD *)a3 + 118);
    else
      v12 = 0;
    *(_DWORD *)(v10 + 128) = v12;
    v14 = 24;
    v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15[1], v17, &v14);
    if ( v11 < 0
      || (v11 = -1073741823, v14 < 0x18)
      || (v11 = v18, a6->VirtualAddress = v17[0], a6->PagingFenceValue = v17[1], v11 < 0) )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMapGpuVirtualAddress failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v11 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15[1]);
  return (unsigned int)v11;
}
