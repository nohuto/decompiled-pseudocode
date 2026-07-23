/*
 * XREFs of NtCreateEvent @ 0x140651360
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1406324B0 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140632CA0 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14079E824 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6BB14 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rdi
  unsigned __int8 v7; // si
  NTSTATUS result; // eax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  v9 = 0LL;
  v7 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v7 )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  result = ObCreateObjectEx(v7, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v7);
  if ( result >= 0 )
  {
    KeInitializeEvent(0LL, EventType, InitialState);
    result = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&v9);
    if ( result >= 0 )
      *v6 = (HANDLE)v9;
  }
  return result;
}
