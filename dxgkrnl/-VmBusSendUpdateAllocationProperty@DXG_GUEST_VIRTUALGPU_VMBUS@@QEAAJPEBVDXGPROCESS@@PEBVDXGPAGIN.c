/*
 * XREFs of ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C038BB3C
 * Callers:
 *     DxgkUpdateAllocationProperty @ 0x1C0332F70 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct DXGPROCESS *a2,
        const struct DXGPAGINGQUEUE *a3,
        const struct DXGALLOCATION *a4,
        struct D3DDDI_UPDATEALLOCPROPERTY *a5)
{
  __int64 v9; // rcx
  int v10; // edi
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  __int128 v14; // xmm0
  unsigned int v16; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-90h]
  UINT64 v19; // [rsp+188h] [rbp+80h] BYREF
  int v20; // [rsp+190h] [rbp+88h]

  v18 = 0;
  *(_OWORD *)&v17[1] = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v17[1], this, 0x40u, 0LL, 0LL, 0LL);
  v9 = v17[1];
  if ( v17[1] )
  {
    v11 = *((_DWORD *)a4 + 5);
    v12 = *((_DWORD *)a3 + 7);
    v13 = *((_DWORD *)a2 + 126);
    *(_QWORD *)v17[1] = 0LL;
    *(_DWORD *)(v9 + 20) = 0;
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_DWORD *)(v9 + 8) = v13;
    *(_DWORD *)(v9 + 16) = 56;
    v14 = *(_OWORD *)&a5->hPagingQueue;
    v16 = 16;
    *(_OWORD *)(v9 + 24) = v14;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)&a5->Flags.0;
    *(_QWORD *)(v9 + 56) = *(_QWORD *)&a5->0;
    *(_DWORD *)(v9 + 24) = v12;
    *(_DWORD *)(v9 + 28) = v11;
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v17[1], &v19, &v16);
    if ( v10 < 0 || (v10 = -1073741823, v16 < 0x10) || (v10 = v20, v20 < 0) )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendUpdateAllocationProperty failed: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      a5->PagingFenceValue = v19;
    }
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v17[1]);
  return (unsigned int)v10;
}
