/*
 * XREFs of ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0389974
 * Callers:
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C034A2E0 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        int a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  struct _MDL *v12; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-128h]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, a1, 0x28u, 0LL, 0LL, 0LL);
  v8 = v13[0];
  if ( v13[0] )
  {
    *(_QWORD *)v13[0] = 0LL;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 1;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 4) = 1006;
    *((_DWORD *)v8 + 6) = a2;
    *((_QWORD *)v8 + 4) = a3;
    *((_DWORD *)v8 + 7) = a4;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v13[1], v13[0], v14, v12);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSignalFence failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    LODWORD(v9) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return (unsigned int)v9;
}
