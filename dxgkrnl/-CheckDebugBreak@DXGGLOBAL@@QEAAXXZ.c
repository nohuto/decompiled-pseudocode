/*
 * XREFs of ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005A2B0
 * Callers:
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C0361178 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0371D5C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0371E40 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::CheckDebugBreak(DXGGLOBAL *this)
{
  if ( g_OSTestSigningEnabled && (unsigned __int8)WdIsDebuggerPresent(0LL) && *((_QWORD *)this + 218) )
  {
    if ( !**((_BYTE **)this + 218) )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 218) + 1LL) )
        return;
      *(_BYTE *)(*((_QWORD *)this + 218) + 1LL) = 0;
    }
    __debugbreak();
  }
}
