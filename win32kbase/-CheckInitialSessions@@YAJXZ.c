/*
 * XREFs of ?CheckInitialSessions@@YAJXZ @ 0x1C00CFB7C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckInitialSessions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-49h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-19h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+1Fh]
  int v11; // [rsp+B0h] [rbp+27h]
  __int64 v12; // [rsp+B8h] [rbp+2Fh]
  __int64 v13; // [rsp+C0h] [rbp+37h]
  int v14; // [rsp+C8h] [rbp+3Fh]
  __int64 v15; // [rsp+D0h] [rbp+47h]
  int v16; // [rsp+D8h] [rbp+4Fh]
  int v17; // [rsp+F0h] [rbp+67h] BYREF
  void *EventHandle; // [rsp+F8h] [rbp+6Fh] BYREF

  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  if ( *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) != gServiceSessionId )
  {
    gbNonServiceSession = 1;
    QueryTable.Name = L"NumberOfInitialSessions";
    v17 = 0;
    QueryTable.EntryContext = &v17;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager",
           &QueryTable,
           0LL,
           0LL) < 0
      || v17 != 1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\UniqueInteractiveSessionIdEvent");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      v4 = v5;
      if ( v5 >= 0 )
      {
        gbFirstInteractiveSession = 1;
      }
      else if ( v5 == -1073741771 )
      {
        gbFirstInteractiveSession = 0;
      }
    }
  }
  return v4;
}
