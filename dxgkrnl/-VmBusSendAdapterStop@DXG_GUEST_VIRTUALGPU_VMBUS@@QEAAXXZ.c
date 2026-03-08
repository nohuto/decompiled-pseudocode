/*
 * XREFs of ?VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C038067C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  __int64 v2; // rax
  __int128 v3; // [rsp+30h] [rbp-138h] BYREF
  int v4; // [rsp+40h] [rbp-128h]

  v4 = 0;
  v3 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v3, this, 0x18u, 0LL, 0LL, 0LL);
  v2 = v3;
  if ( (_QWORD)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    *(_BYTE *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 12) &= 0x1FFu;
    *(_DWORD *)(v2 + 16) = 30;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v3, 0LL, 0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v3);
}
