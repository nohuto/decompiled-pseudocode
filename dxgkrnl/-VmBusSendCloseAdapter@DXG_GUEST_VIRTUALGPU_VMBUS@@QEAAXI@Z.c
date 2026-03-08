/*
 * XREFs of ?VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z @ 0x1C0380FF8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCloseAdapter(DXG_GUEST_VIRTUALGPU_VMBUS *this, int a2)
{
  __int64 v4; // rax
  __int128 v5; // [rsp+30h] [rbp-138h] BYREF
  int v6; // [rsp+40h] [rbp-128h]

  v6 = 0;
  v5 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v5, this, 0x20u, 0LL, 0LL, 0LL);
  v4 = v5;
  if ( (_QWORD)v5 )
  {
    *(_QWORD *)v5 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_BYTE *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 12) &= 0x1FFu;
    *(_DWORD *)(v4 + 16) = 15;
    *(_DWORD *)(v4 + 24) = a2;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v5, 0LL, 0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v5);
}
