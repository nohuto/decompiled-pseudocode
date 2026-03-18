/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x1C005B520
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 CheckInitialSessions(void)
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-19h] BYREF
  __int64 v6; // [rsp+A8h] [rbp+1Fh]
  int v7; // [rsp+B0h] [rbp+27h]
  __int64 v8; // [rsp+B8h] [rbp+2Fh]
  __int64 v9; // [rsp+C0h] [rbp+37h]
  int v10; // [rsp+C8h] [rbp+3Fh]
  __int64 v11; // [rsp+D0h] [rbp+47h]
  int v12; // [rsp+D8h] [rbp+4Fh]
  int v13; // [rsp+F0h] [rbp+67h] BYREF
  void *EventHandle; // [rsp+F8h] [rbp+6Fh] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  if ( gSessionId != gServiceSessionId )
  {
    gbNonServiceSession = 1;
    QueryTable.Name = L"NumberOfInitialSessions";
    v13 = 0;
    QueryTable.EntryContext = &v13;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v13 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v1 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v0 = v1;
      if ( v1 >= 0 )
      {
        gbFirstInteractiveSession = 1;
      }
      else if ( v1 == -1073741771 )
      {
        gbFirstInteractiveSession = 0;
      }
    }
  }
  return v0;
}
