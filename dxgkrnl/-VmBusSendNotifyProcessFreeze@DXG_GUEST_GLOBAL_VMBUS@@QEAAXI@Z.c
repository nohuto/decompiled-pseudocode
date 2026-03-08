/*
 * XREFs of ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0386C24
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C01D4210 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessFreeze(DXG_GUEST_GLOBAL_VMBUS *this, int a2)
{
  struct DXGKVMB_COMMAND_BASE *v4; // rax
  struct _MDL *v5; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v6[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-128h]

  v7 = 0;
  *(_OWORD *)v6 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v6, this, 0x18u, 0LL, 0LL, 0LL);
  v4 = v6[0];
  *(_QWORD *)v6[0] = 0LL;
  *((_DWORD *)v4 + 5) = 0;
  *((_BYTE *)v4 + 12) = 1;
  *((_DWORD *)v4 + 3) &= 0x1FFu;
  *((_DWORD *)v4 + 2) = a2;
  *((_DWORD *)v4 + 4) = 1007;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v6[1], v6[0], v7, 0LL, 0LL, v5);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v6);
}
