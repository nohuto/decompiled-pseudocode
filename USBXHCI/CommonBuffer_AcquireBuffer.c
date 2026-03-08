/*
 * XREFs of CommonBuffer_AcquireBuffer @ 0x1C0013038
 * Callers:
 *     TR_AcquireDoubleBuffer @ 0x1C00073E0 (TR_AcquireDoubleBuffer.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C001BAFC (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCoreCommand_AllocateResources @ 0x1C001BC30 (XilCoreCommand_AllocateResources.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C001C340 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001C9FC (XilCoreDeviceSlot_AllocateResources.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C004C0B8 (Crashdump_CommonBufferAcquire.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C0008160 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C0013088 (XilCoreCommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffer(struct _KEVENT *Context, int a2, int a3, int a4)
{
  __int64 v5; // rdi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = XilCoreCommonBuffer_AcquireBuffer((int)Context + 88, a2, a3, a4, (__int64)&v7);
  if ( v7 == 1 )
    CommonBuffer_QueueWorkItem(Context);
  return v5;
}
