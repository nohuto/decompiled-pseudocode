/*
 * XREFs of ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x1C038C0EC
 * Callers:
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C0347AC0 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1C0347ED4 (-RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        int a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v5; // r14d
  int v9; // edi
  struct DXGKVMB_COMMAND_BASE *v10; // rcx
  unsigned int v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+170h] [rbp+70h] BYREF

  v5 = a4;
  v9 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x23u )
  {
    v14 = 0;
    *(_OWORD *)v13 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x30u, 0LL, 0LL, 0LL);
    v10 = v13[0];
    if ( !v13[0] )
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
      return 3221225495LL;
    }
    *(_QWORD *)v13[0] = 0LL;
    *((_DWORD *)v10 + 2) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 9) = a5;
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_DWORD *)v10 + 4) = 1019;
    *((struct _LUID *)v10 + 3) = a2;
    *((_DWORD *)v10 + 8) = a3;
    *((_DWORD *)v10 + 10) = v5;
    v12[0] = 8;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
           (struct _KTHREAD **)this,
           (unsigned __int8 *)v13[1],
           v13[0],
           v14,
           (char *)&v15,
           v12);
    if ( v9 >= 0 )
    {
      v9 = -1073741823;
      if ( v12[0] >= 4 )
        v9 = v15;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  }
  return (unsigned int)v9;
}
