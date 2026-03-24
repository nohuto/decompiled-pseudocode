/*
 * XREFs of SmCreateEvent @ 0x1407D1830
 * Callers:
 *     SmRegistrationCtxStart @ 0x1407D17D8 (SmRegistrationCtxStart.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403FACA0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmCreateEvent(__int64 a1, PVOID *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  struct _DMA_ADAPTER *v5; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = (struct _DMA_ADAPTER *)Object;
    v3 = v4;
    if ( v4 >= 0 )
    {
      *a2 = Object;
      v5 = 0LL;
      v3 = 0;
    }
    if ( v5 )
      HalPutDmaAdapter(v5);
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v3;
}
