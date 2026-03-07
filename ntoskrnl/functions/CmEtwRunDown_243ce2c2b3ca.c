__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // di
  char v7; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // r15
  __int64 i; // rdi
  void *v18; // r14
  int v19; // edx
  __int64 *v20; // rbx
  NTSTATUS v21; // ebx
  __int16 v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *NextActiveHive; // [rsp+50h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-38h]
  __int128 KeyValueInformation; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v39; // [rsp+118h] [rbp+18h] BYREF
  __int64 v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+130h] [rbp+30h]
  int v43; // [rsp+134h] [rbp+34h]
  __int16 *v44; // [rsp+138h] [rbp+38h]
  __int64 v45; // [rsp+140h] [rbp+40h]

  v34 = 0LL;
  v26 = 0;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  ResultLength = 0;
  v7 = a3;
  KeyHandle = 0LL;
  ValueName = 0LL;
  v25 = 0;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v34);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v40 = 24LL;
    v39 = (__int64 *)&v35;
    v9 = 0LL;
    v45 = 2LL;
    v44 = &v25;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v20 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v6 )
        CmpLogHiveRundownEvent(v20, a1, a2);
      if ( v7 )
      {
        v14 = *((_DWORD *)v20 + 414);
        if ( v14 )
        {
          v15 = (__int64 *)(v20[206] + 16);
          v16 = v14;
          do
          {
            for ( i = *v15; i; i = *(_QWORD *)(i + 8) )
            {
              v29 = 0LL;
              CmpConstructNameWithStatus(i - 16, &v29, v12);
              v18 = v29;
              if ( v29 )
              {
                v19 = *v29;
                v41 = *((_QWORD *)v29 + 1);
                v42 = v19;
                *(_QWORD *)&v36 = i - 16;
                v43 = 0;
                EtwTraceSiloDcEvent((__int64)&v39, 3u, a1, a2, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v18, 0x624E4D43u);
              }
            }
            v15 += 3;
            --v16;
          }
          while ( v16 );
          v20 = NextActiveHive;
          v6 = a4;
        }
        v7 = a3;
      }
      CmpUnlockRegistry(v11, v10, v12, v13);
      v9 = (struct _EX_RUNDOWN_REF *)v20;
    }
    CmpDetachFromRegistryProcess(&ApcState);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v21 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v21 >= 0 )
      {
        v26 = HIDWORD(KeyValueInformation);
        v39 = (__int64 *)&v26;
        v40 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v39, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v39 = &CmPerfCounters;
  v40 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v39, 1u, a1, a2, 0x922u, 0x401802u);
  CmCleanupThreadInfo((__int64 *)&v34);
  return 0LL;
}
