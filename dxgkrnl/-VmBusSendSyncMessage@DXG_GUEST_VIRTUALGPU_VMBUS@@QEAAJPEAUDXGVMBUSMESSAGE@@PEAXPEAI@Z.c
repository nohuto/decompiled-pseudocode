__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGVMBUSMESSAGE *a2,
        void *a3,
        unsigned int *a4)
{
  struct _MDL *v5; // [rsp+30h] [rbp-18h]

  if ( *((_BYTE *)this + 68) )
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
             this,
             *((unsigned __int8 **)a2 + 1),
             *(struct DXGKVMB_COMMAND_BASE **)a2,
             *((_DWORD *)a2 + 4),
             a3,
             a4,
             v5);
  else
    return 3221226166LL;
}
