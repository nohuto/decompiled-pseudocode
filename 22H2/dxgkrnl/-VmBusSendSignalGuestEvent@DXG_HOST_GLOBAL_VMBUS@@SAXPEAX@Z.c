/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0041CD0
 * Callers:
 *     ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@I@Z @ 0x1C0015480 (-REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@I@Z.c)
 *     REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004EEF0 (REMOTEVSYNCMAPPING--IterateList__lambda_3d79675884e940cafd73bf406652b69f___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ?VmBusSendSignalGuestEventCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C002741C (-VmBusSendSignalGuestEventCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C004195C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *a1)
{
  __int64 v2; // rdx
  struct _MDL *v3; // r9
  struct VMBCHANNEL__ *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+2Ch] [rbp-34h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+49h] [rbp-17h]
  int v18; // [rsp+4Ah] [rbp-16h]
  __int16 v19; // [rsp+4Eh] [rbp-12h]

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() && *((_BYTE *)a1 + 19) )
  {
    DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventCblt(a1, v2);
  }
  else
  {
    v4 = *(struct VMBCHANNEL__ **)a1;
    v14 = *((_QWORD *)a1 + 1);
    v16 = *((_BYTE *)a1 + 16);
    v17 = *((_BYTE *)a1 + 18);
    v13 = 0LL;
    v18 = 0;
    v19 = 0;
    v10 = 0LL;
    v11 = 0;
    v12 = 2;
    v15 = 0LL;
    v5 = VmBusSendAsyncMessage(v4, (struct DXGKVMB_COMMAND_BASE *)&v10, 48LL, v3);
    v8 = v5;
    if ( v5 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdError(v9);
    }
    if ( !*((_BYTE *)a1 + 17) )
      ExFreePoolWithTag(a1, 0x4B677844u);
  }
}
