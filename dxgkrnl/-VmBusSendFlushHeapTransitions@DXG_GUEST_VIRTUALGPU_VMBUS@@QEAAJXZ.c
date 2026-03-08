/*
 * XREFs of ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1C0384544
 * Callers:
 *     DxgkFlushHeapTransitions @ 0x1C01D47D0 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  struct DXGKVMB_COMMAND_BASE *v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  struct _MDL *v6; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v7[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v8; // [rsp+60h] [rbp-128h]

  v8 = 0;
  *(_OWORD *)v7 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v7, this, 0x18u, 0LL, 0LL, 0LL);
  v2 = v7[0];
  if ( v7[0] )
  {
    *(_QWORD *)v7[0] = 0LL;
    *((_DWORD *)v2 + 2) = 0;
    *((_DWORD *)v2 + 5) = 0;
    *((_BYTE *)v2 + 12) = 0;
    *((_DWORD *)v2 + 3) &= 0x1FFu;
    *((_DWORD *)v2 + 4) = 37;
    v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v7[1], v7[0], v8, v6);
    v3 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(2LL, v4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendFlushHeapTransitions failed: 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    LODWORD(v3) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v7);
  return (unsigned int)v3;
}
