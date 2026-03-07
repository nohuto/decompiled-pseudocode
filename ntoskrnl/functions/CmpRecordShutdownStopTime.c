__int64 CmpRecordShutdownStopTime()
{
  struct _PRIVILEGE_SET *v0; // rdi
  WCHAR *Pool; // rax
  WCHAR *v2; // rsi
  int PersistedStateLocation; // ebx
  LARGE_INTEGER Data; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG DataSize; // [rsp+C0h] [rbp+67h] BYREF
  int v10; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v12; // [rsp+D8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Data.QuadPart = 0LL;
  v0 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  DataSize = 0;
  v10 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v12 = 0LL;
  Pool = (WCHAR *)CmpAllocatePool(256LL, 1040LL, 808996163LL);
  v2 = Pool;
  if ( Pool )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ShutdownPath",
                               0LL,
                               L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\SHUTDOWN",
                               0,
                               Pool,
                               0x410u,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v2);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        Data = KeQueryPerformanceCounter(&PerformanceFrequency);
        RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
        PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
        if ( PersistedStateLocation >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
          PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
          if ( PersistedStateLocation >= 0 )
          {
            PersistedStateLocation = CmpReadBuildVersion((struct _PRIVILEGE_SET **)&v12, &DataSize, &v10);
            if ( PersistedStateLocation < 0 )
            {
              v0 = (struct _PRIVILEGE_SET *)v12;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterCurrentBuildNumber");
              v0 = (struct _PRIVILEGE_SET *)v12;
              PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v12, DataSize);
              if ( PersistedStateLocation >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterUBR");
                PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v10, 4u);
              }
            }
          }
        }
      }
    }
    CmSiFreeMemory((PPRIVILEGE_SET)v2);
  }
  else
  {
    PersistedStateLocation = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v0 )
    CmSiFreeMemory(v0);
  return (unsigned int)PersistedStateLocation;
}
