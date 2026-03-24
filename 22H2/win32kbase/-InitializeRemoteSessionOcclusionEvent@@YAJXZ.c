/*
 * XREFs of ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C0068940
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0068D34 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 InitializeRemoteSessionOcclusionEvent(void)
{
  NTSTATUS v0; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 44);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  v0 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 1u);
  if ( v0 >= 0 )
  {
    Object = 0LL;
    v0 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    gpRemoteSessionOcclusionEvent = Object;
    ObCloseHandle(EventHandle, 1);
  }
  return (unsigned int)v0;
}
