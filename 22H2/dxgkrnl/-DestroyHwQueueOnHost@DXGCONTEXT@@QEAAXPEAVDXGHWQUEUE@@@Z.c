/*
 * XREFs of ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C026D794
 * Callers:
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026D644 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueueOnHost(DXGCONTEXT *this, struct DXGHWQUEUE *a2)
{
  __int64 v4; // rax
  unsigned int HostProcess; // eax
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  if ( *((_DWORD *)this + 7) )
  {
    v4 = *((_QWORD *)this + 2);
    v7 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
    v9 = 0;
    v8 = HostProcess;
    v11 = *((_DWORD *)a2 + 7);
    v6 = *((_QWORD *)this + 2);
    v10 = 51;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 4240LL),
      (struct DXGKVMB_COMMAND_BASE *)&v7,
      32LL,
      0LL,
      0LL);
  }
}
