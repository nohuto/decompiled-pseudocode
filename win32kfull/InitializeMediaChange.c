__int64 __fastcall InitializeMediaChange(HANDLE Handle)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  NTSTATUS v4; // ebx
  struct _FAST_MUTEX *v5; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+1Fh] BYREF
  int v13; // [rsp+94h] [rbp+23h]
  unsigned int v14; // [rsp+9Ch] [rbp+2Bh]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxOpenAttempts");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v13 == 4 )
    {
      gdwMaxRetries = v14;
    }
    ZwClose(KeyHandle);
  }
  v3 = gdwMaxRetries;
  *(_DWORD *)(SGDGetUserSessionState(v2) + 512) = v3;
  if ( gProtocolType )
  {
    return 0;
  }
  else
  {
    qword_1C0361568 = (__int64)&gCDROMNotifyList;
    gCDROMNotifyList.Flink = &gCDROMNotifyList;
    Object = 0LL;
    qword_1C0361578 = (__int64)&gMediaChangeList;
    gMediaChangeList.Flink = &gMediaChangeList;
    v4 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpEventMediaChange = Object;
    if ( v4 >= 0 )
    {
      v5 = (struct _FAST_MUTEX *)Win32AllocPoolNonPagedZInit(56LL, 1886417749LL);
      gMediaChangeMutex = v5;
      if ( v5 )
      {
        v5->Owner = 0LL;
        v5->Count = 1;
        v5->Contention = 0;
        KeInitializeEvent(&v5->Event, SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v4;
}
