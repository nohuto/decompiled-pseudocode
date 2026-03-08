/*
 * XREFs of CreateKernelEventObject @ 0x1C0032430
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0032254 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

PVOID __fastcall CreateKernelEventObject(__int64 a1, BOOLEAN InitialState)
{
  PVOID v2; // rdi
  char v3; // bl
  NTSTATUS v4; // eax
  int v5; // r8d
  NTSTATUS v6; // esi
  int v8; // edx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  v2 = 0LL;
  v3 = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, InitialState);
  LOBYTE(v6) = v4;
  if ( v4 < 0
    || (Object = 0LL,
        v6 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL),
        v2 = Object,
        ZwClose(EventHandle),
        v6 < 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
      LOBYTE(v8) = v3;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        10,
        (__int64)&WPP_1759bcbb9db2365e46dd4c1dded80818_Traceguids,
        v6);
    }
  }
  return v2;
}
