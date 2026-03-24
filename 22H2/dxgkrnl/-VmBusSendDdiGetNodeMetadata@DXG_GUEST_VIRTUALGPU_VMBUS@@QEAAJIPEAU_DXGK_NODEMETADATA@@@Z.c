/*
 * XREFs of ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C02481B8
 * Callers:
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0187170 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int128 v7; // xmm1
  __int16 v8; // ax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  struct _MDL *v13; // [rsp+28h] [rbp-41h]
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  int v16; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+44h] [rbp-25h]
  int v18; // [rsp+48h] [rbp-21h]
  int v19; // [rsp+50h] [rbp-19h]
  _OWORD v20[4]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+37h]
  __int16 v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v19 = a2;
  v18 = 44;
  v14 = 80;
  v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x20u, v20, &v14, v13);
  if ( v6 < 0 || (v6 = -1073741823, v14 < 0x50) || (v6 = v23, v23 < 0) )
  {
    v11 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v11 + 24) = v6;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    v7 = v20[1];
    v8 = v22;
    *(_OWORD *)&a3->EngineType = v20[0];
    v9 = v20[2];
    *(_OWORD *)&a3->FriendlyName[6] = v7;
    v10 = v20[3];
    *(_OWORD *)&a3->FriendlyName[14] = v9;
    *(_QWORD *)&v9 = v21;
    *(_OWORD *)&a3->FriendlyName[22] = v10;
    *(_QWORD *)&a3->FriendlyName[30] = v9;
    *(_WORD *)&a3->GpuMmuSupported = v8;
  }
  return (unsigned int)v6;
}
