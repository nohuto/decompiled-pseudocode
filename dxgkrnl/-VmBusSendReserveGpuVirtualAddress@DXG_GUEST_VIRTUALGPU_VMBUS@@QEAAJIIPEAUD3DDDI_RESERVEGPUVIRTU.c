/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0388FF8
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C017DFB0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int64 v8; // rax
  int v9; // edi
  __int128 v10; // xmm0
  unsigned int v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[2]; // [rsp+180h] [rbp+80h] BYREF

  v14 = 0;
  v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13, this, 0x60u, 0LL, 0LL, 0LL);
  v8 = v13;
  if ( (_QWORD)v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *(_DWORD *)(v8 + 20) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_DWORD *)(v8 + 8) = a2;
    *(_DWORD *)(v8 + 16) = 18;
    v10 = *(_OWORD *)&a4->hPagingQueue;
    v12[0] = 16;
    *(_OWORD *)(v8 + 24) = v10;
    *(_OWORD *)(v8 + 40) = *(_OWORD *)&a4->MinimumAddress;
    *(_OWORD *)(v8 + 56) = *(_OWORD *)&a4->Size;
    *(_OWORD *)(v8 + 72) = *(_OWORD *)&a4->DriverProtection;
    *(_QWORD *)(v8 + 88) = a4->PagingFenceValue;
    *(_DWORD *)(v8 + 24) = a3;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, v15, v12);
    if ( v9 < 0 || (v9 = -1073741823, v12[0] < 0x10) )
    {
      WdLogSingleEntry1(2LL, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendReserveGpuVirtualAddress failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v9 = 0;
      a4->VirtualAddress = v15[0];
      a4->PagingFenceValue = v15[1];
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13);
  return (unsigned int)v9;
}
