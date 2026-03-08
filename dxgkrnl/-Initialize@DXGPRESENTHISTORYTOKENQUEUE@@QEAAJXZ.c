/*
 * XREFs of ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01DFDC8
 * Callers:
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C01DFBDC (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 * Callees:
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C01DFF28 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 */

NTSTATUS __fastcall DXGPRESENTHISTORYTOKENQUEUE::Initialize(DXGPRESENTHISTORYTOKENQUEUE *this)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  PRKSEMAPHORE *v4; // rdi
  NTSTATUS v5; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  if ( !DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this) )
    return -1073741801;
  EventHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v3 = EventHandle;
    *((_QWORD *)this + 9) = Object;
    ZwClose(v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v4 = (PRKSEMAPHORE *)((char *)this + 64);
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ObCreateObject(0LL, ExSemaphoreObjectType, &ObjectAttributes, 0LL, 0LL, 32, 0, 0, (char *)this + 64);
    v5 = result;
    if ( result >= 0 )
    {
      KeInitializeSemaphore(*v4, 2047, 2047);
      ObDeleteCapturedInsertInfo(*v4);
      return v5;
    }
  }
  return result;
}
