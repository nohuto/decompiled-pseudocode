/*
 * XREFs of ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01F0D88
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DISPLAY_SOURCE::Initialize(DISPLAY_SOURCE *this, struct ADAPTER_DISPLAY *a2, int a3)
{
  NTSTATUS result; // eax
  void *v5; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  EventHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  *(&ObjectAttributes.Attributes + 1) = 0;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 198) = a3;
  *((_DWORD *)this + 210) = a3;
  *((_DWORD *)this + 220) = a3;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = EventHandle;
    *((_QWORD *)this + 116) = Object;
    ZwClose(v5);
    return 0;
  }
  return result;
}
