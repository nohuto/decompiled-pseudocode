/*
 * XREFs of ?VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C0383774
 * Callers:
 *     ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C0312ADC (-DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyHwQueue(DXG_GUEST_VIRTUALGPU_VMBUS *this, int a2, int a3)
{
  __int64 v6; // rax
  __int128 v7; // [rsp+30h] [rbp-138h] BYREF
  int v8; // [rsp+40h] [rbp-128h]

  v8 = 0;
  v7 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v7, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v7;
  if ( (_QWORD)v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v6 + 16) = 51;
    *(_DWORD *)(v6 + 24) = a3;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v7, 0LL, 0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v7);
}
