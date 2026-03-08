/*
 * XREFs of ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383844
 * Callers:
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(DXG_GUEST_GLOBAL_VMBUS *this, int a2, int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rax
  struct _MDL *v7; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v8[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v9; // [rsp+50h] [rbp-128h]

  v9 = 0;
  *(_OWORD *)v8 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v8, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v8[0];
  *(_QWORD *)v8[0] = 0LL;
  *((_DWORD *)v6 + 5) = 0;
  *((_BYTE *)v6 + 12) = 1;
  *((_DWORD *)v6 + 3) &= 0x1FFu;
  *((_DWORD *)v6 + 2) = a2;
  *((_DWORD *)v6 + 4) = 1013;
  *((_DWORD *)v6 + 6) = a3;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v8[1], v8[0], v9, 0LL, 0LL, v7);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v8);
}
