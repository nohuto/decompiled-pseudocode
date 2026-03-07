__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(
        struct _KTHREAD **this,
        struct DXGVMBUSMESSAGE *a2)
{
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 1780) )
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
             this,
             *((unsigned __int8 **)a2 + 1),
             *(struct DXGKVMB_COMMAND_BASE **)a2,
             *((_DWORD *)a2 + 4));
  *(_DWORD *)(*(_QWORD *)a2 + 12LL) |= 0x100u;
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(
           (DXG_VMBUS_CHANNEL_BASE *)this,
           *((unsigned __int8 **)a2 + 1),
           *(struct DXGKVMB_COMMAND_BASE **)a2,
           *((_DWORD *)a2 + 4));
}
