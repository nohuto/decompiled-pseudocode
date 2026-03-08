/*
 * XREFs of ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038391C
 * Callers:
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01B3290 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DD0C0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2)
{
  struct DXGKVMB_COMMAND_BASE *v4; // rax
  struct _MDL *v5; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v6[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-128h]

  v7 = 0;
  *(_OWORD *)v6 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v6, this, 0x20u, 0LL, 0LL, 0LL);
  v4 = v6[0];
  *(_QWORD *)v6[0] = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_BYTE *)v4 + 12) = 1;
  *((_DWORD *)v4 + 3) &= 0x1FFu;
  *((_DWORD *)v4 + 4) = 1005;
  *((_DWORD *)v4 + 6) = a2;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v6[1], v6[0], v7, 0LL, 0LL, v5);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v6);
}
