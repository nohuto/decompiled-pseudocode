/*
 * XREFs of ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C038860C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C031007C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

struct _GUID *__fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _GUID *__return_ptr retstr)
{
  struct DXGKVMB_COMMAND_BASE *v4; // rax
  struct _GUID v5; // xmm0
  struct _MDL *v7; // [rsp+30h] [rbp-D0h]
  unsigned int v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v9[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v10; // [rsp+60h] [rbp-A0h]
  struct _GUID v11; // [rsp+170h] [rbp+70h] BYREF

  v10 = 0;
  *(_OWORD *)v9 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v9, this, 0x18u, 0LL, 0LL, 0LL);
  v4 = v9[0];
  v8[0] = 16;
  *(_QWORD *)v9[0] = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_BYTE *)v4 + 12) = 1;
  *((_DWORD *)v4 + 3) &= 0x1FFu;
  *((_DWORD *)v4 + 4) = 1009;
  if ( (int)DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v9[1], v9[0], v10, &v11, v8, v7) < 0
    || v8[0] < 0x10 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = v11;
  }
  *retstr = v5;
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v9);
  return retstr;
}
