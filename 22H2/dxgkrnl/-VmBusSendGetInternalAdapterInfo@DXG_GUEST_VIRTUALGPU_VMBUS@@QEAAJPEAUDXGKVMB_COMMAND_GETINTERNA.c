/*
 * XREFs of ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C02495F8
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020E2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 result; // rax
  __int64 v19; // rax
  struct _MDL *v20; // [rsp+28h] [rbp-300h]
  unsigned int v21; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-2F0h] BYREF
  int v23; // [rsp+40h] [rbp-2E8h]
  int v24; // [rsp+44h] [rbp-2E4h]
  int v25; // [rsp+48h] [rbp-2E0h]
  _BYTE v26[704]; // [rsp+50h] [rbp-2D8h] BYREF

  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 36;
  v21 = 704;
  v5 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x18u, v26, &v21, v20);
  if ( v5 < 0 || (v5 = -1073741823, v21 < 0x2C0) )
  {
    v19 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v19 + 24) = v5;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v5;
  }
  else
  {
    v6 = 5LL;
    v7 = v26;
    do
    {
      v8 = v7[1];
      *(_OWORD *)a2 = *v7;
      v9 = v7[2];
      *((_OWORD *)a2 + 1) = v8;
      v10 = v7[3];
      *((_OWORD *)a2 + 2) = v9;
      v11 = v7[4];
      *((_OWORD *)a2 + 3) = v10;
      v12 = v7[5];
      *((_OWORD *)a2 + 4) = v11;
      v13 = v7[6];
      *((_OWORD *)a2 + 5) = v12;
      v14 = v7[7];
      v7 += 8;
      *((_OWORD *)a2 + 6) = v13;
      a2 = (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)((char *)a2 + 128);
      *((_OWORD *)a2 - 1) = v14;
      --v6;
    }
    while ( v6 );
    v15 = v7[1];
    *(_OWORD *)a2 = *v7;
    v16 = v7[2];
    *((_OWORD *)a2 + 1) = v15;
    v17 = v7[3];
    result = 0LL;
    *((_OWORD *)a2 + 2) = v16;
    *((_OWORD *)a2 + 3) = v17;
  }
  return result;
}
