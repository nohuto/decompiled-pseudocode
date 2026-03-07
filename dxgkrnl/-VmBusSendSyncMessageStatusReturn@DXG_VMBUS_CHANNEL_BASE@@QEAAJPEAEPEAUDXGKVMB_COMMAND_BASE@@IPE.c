__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
        struct _KTHREAD **this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+40h] [rbp-28h] BYREF
  char v6[8]; // [rsp+48h] [rbp-20h] BYREF

  v5 = 8;
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, a2, a3, a4, v6, &v5);
  if ( (int)result >= 0 )
  {
    result = 3221225473LL;
    if ( v5 >= 4 )
      return *(unsigned int *)v6;
  }
  return result;
}
