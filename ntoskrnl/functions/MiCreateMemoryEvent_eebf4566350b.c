__int64 __fastcall MiCreateMemoryEvent(UNICODE_STRING *a1, int a2, void *a3, void *a4, int a5, _QWORD *a6, HANDLE *a7)
{
  UNICODE_STRING v7; // xmm0
  __int64 v8; // r15
  PVOID v11; // rbx
  int v12; // edi
  NTSTATUS v13; // eax
  HANDLE *v14; // rcx
  HANDLE v15; // rcx
  UNICODE_STRING v17; // [rsp+30h] [rbp-51h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-29h] BYREF
  HANDLE EventHandle; // [rsp+D0h] [rbp+4Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+5Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+67h] BYREF

  v7 = *a1;
  v8 = a2;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v11 = 0LL;
  EventHandle = 0LL;
  v17 = v7;
  if ( a3 )
  {
    ++v17.Buffer;
    v17.Length -= 2;
    v17.MaximumLength -= 2;
  }
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.ObjectName = &v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a4;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v11 = Object;
    v12 = v13;
    if ( v13 >= 0 )
    {
      if ( !a5 )
      {
LABEL_8:
        v12 = 0;
        v14 = a7;
        *a6 = v11;
        v11 = 0LL;
        *v14 = EventHandle;
        v15 = 0LL;
        EventHandle = 0LL;
        goto LABEL_9;
      }
      ObjectAttributes.Length = 48;
      v18[1] = MiResolveMemoryEvent;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 528;
      ObjectAttributes.ObjectName = a1;
      ObjectAttributes.SecurityDescriptor = a4;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v18[0] = 1LL;
      v18[2] = v8;
      v12 = ObCreateSymbolicLink(&Handle, 983041, (__int64)&ObjectAttributes, (__int64)v18, 0);
      if ( v12 >= 0 )
      {
        ObCloseHandle(Handle, 0);
        goto LABEL_8;
      }
    }
  }
  v15 = EventHandle;
LABEL_9:
  if ( v15 )
    ObCloseHandle(v15, 0);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v12;
}
