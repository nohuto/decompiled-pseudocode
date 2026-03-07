__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATEPAGINGQUEUE *a4,
        struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *a5)
{
  unsigned int v5; // edi
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // esi
  unsigned int v15[4]; // [rsp+50h] [rbp-158h] BYREF
  __int128 v16; // [rsp+60h] [rbp-148h] BYREF
  int v17; // [rsp+70h] [rbp-138h]

  v5 = 0;
  v17 = 0;
  v16 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v16, this, 0x38u, 0LL, 0LL, 0LL);
  v10 = v16;
  if ( (_QWORD)v16 )
  {
    v11 = *(_OWORD *)&a4->hDevice;
    *(_BYTE *)(v16 + 12) = 0;
    v12 = *(_OWORD *)&a4->FenceValueCPUVirtualAddress;
    *(_DWORD *)(v10 + 12) &= 0x1FFu;
    *(_OWORD *)(v10 + 24) = v11;
    *(_OWORD *)(v10 + 40) = v12;
    *(_DWORD *)(v10 + 24) = a3;
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 8) = a2;
    *(_QWORD *)(v10 + 16) = 9LL;
    v15[0] = 24;
    v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v16, a5, v15);
    if ( v13 < 0 || (v13 = -1073741823, v15[0] < 0x18) || !*((_DWORD *)a5 + 1) )
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreatePagingQueue failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = v13;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v16);
  return v5;
}
