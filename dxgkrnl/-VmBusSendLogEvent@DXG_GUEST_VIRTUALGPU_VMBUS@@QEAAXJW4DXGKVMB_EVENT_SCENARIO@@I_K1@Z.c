/*
 * XREFs of ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x1C0386594
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLogEvent(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        int a4)
{
  struct DXGKVMB_COMMAND_BASE *v7; // rax
  struct DXGKVMB_COMMAND_BASE *v8[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-128h]

  v9 = 0;
  *(_OWORD *)v8 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v8, a1, 0x38u, 0LL, 0LL, 0LL);
  v7 = v8[0];
  if ( v8[0] )
  {
    *(_QWORD *)v8[0] = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 5) = 0;
    *((_DWORD *)v7 + 6) = 0;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_BYTE *)v7 + 12) = 0;
    *((_DWORD *)v7 + 3) &= 0x1FFu;
    *((_DWORD *)v7 + 4) = 65;
    *((_DWORD *)v7 + 7) = a4;
    *((_DWORD *)v7 + 8) = a2;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(a1, (unsigned __int8 *)v8[1], v8[0], v9);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v8);
}
