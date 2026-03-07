__int64 __fastcall WaitOnPseudoEvent(PVOID *a1, int a2)
{
  NTSTATUS v4; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF

  EventHandle = 0LL;
  if ( *a1 )
    return (char *)*a1 + 1 != 0LL ? 0x80 : 0;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *a1 = Object;
    ZwClose(EventHandle);
    if ( v4 >= 0 )
      return 128LL;
    return 0xFFFFFFFFLL;
  }
  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  return 258LL;
}
