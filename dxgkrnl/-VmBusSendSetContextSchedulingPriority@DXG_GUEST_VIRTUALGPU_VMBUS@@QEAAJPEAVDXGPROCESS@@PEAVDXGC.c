/*
 * XREFs of ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x1C03894B4
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C017BCE0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C02ED6E0 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int8 a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rbx
  unsigned int v10; // ebx
  int HostProcess; // eax
  struct _MDL *v13; // [rsp+20h] [rbp-158h]
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-138h]

  v15 = 0;
  *(_OWORD *)v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, this, 0x28u, 0LL, 0LL, 0LL);
  v9 = v14[0];
  if ( v14[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    *((_BYTE *)v9 + 12) = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 2) = HostProcess;
    *((_DWORD *)v9 + 4) = 33;
    *((_DWORD *)v9 + 6) = *((_DWORD *)a3 + 7);
    *((_BYTE *)v9 + 32) = a5;
    *((_DWORD *)v9 + 7) = a4;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v14[1], v14[0], v15, v13);
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  return v10;
}
