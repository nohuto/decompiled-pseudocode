/*
 * XREFs of ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0384450
 * Callers:
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rcx
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // edx
  struct _MDL *v11; // [rsp+20h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v12[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-128h]

  v13 = 0;
  *(_OWORD *)v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v12, a1, 0x20u, 0LL, 0LL, 0LL);
  v6 = v12[0];
  if ( v12[0] )
  {
    v8 = *(_DWORD *)(a2 + 472);
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 504LL);
    *(_QWORD *)v12[0] = 0LL;
    *((_DWORD *)v6 + 5) = 0;
    *((_BYTE *)v6 + 12) = 0;
    *((_DWORD *)v6 + 3) &= 0x1FFu;
    *((_DWORD *)v6 + 2) = v9;
    *((_DWORD *)v6 + 4) = 42;
    *((_DWORD *)v6 + 6) = v8;
    *((_DWORD *)v6 + 7) = a3;
    v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v12[1], v12[0], v13, v11);
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v12);
  return v7;
}
