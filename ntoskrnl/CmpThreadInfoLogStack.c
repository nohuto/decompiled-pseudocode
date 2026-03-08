/*
 * XREFs of CmpThreadInfoLogStack @ 0x140613BCC
 * Callers:
 *     CmpRecordRegistryLockRelease @ 0x140263040 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockAcquire @ 0x140263080 (CmpRecordRegistryLockAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char CmpThreadInfoLogStack()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  void (__fastcall *v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  unsigned __int64 v3; // rdx
  const GUID *ActivityId; // r10
  __int64 v5; // r11
  unsigned __int8 v6; // r9
  char *v7; // rdx
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // r8
  char *v12; // rdx
  char v13; // al
  char v14; // r8
  char v15; // cl
  __int64 v16; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  char *v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  __int64 *v26; // [rsp+90h] [rbp-70h]
  _QWORD v27[5]; // [rsp+98h] [rbp-68h]
  PVOID Callers[10]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v29[10]; // [rsp+110h] [rbp+10h] BYREF

  memset(Callers, 0, sizeof(Callers));
  memset(v29, 0, sizeof(v29));
  v0 = 10LL;
  RtlWalkFrameChain(Callers, 0xAu, 0);
  v1 = 0LL;
  do
  {
    v2 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))Callers[v1];
    if ( (unsigned __int64)v2 >= PsNtosImageBase && (unsigned __int64)v2 <= PsNtosImageEnd )
    {
      v2 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))((char *)v2 - PsNtosImageBase);
      v29[v1] = v2;
    }
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v20 = v5;
      v26 = &v20;
      v27[0] = 8LL;
      v27[1] = v29;
      v27[3] = &v21;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140C04330;
      v27[2] = 80LL;
      v21 = 0x1000000LL;
      v27[4] = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = v3;
      UserData.Size = *(unsigned __int16 *)off_140C04330;
      v23 = &byte_14003684F;
      UserData.Reserved = 2;
      v24 = 93;
      v25 = v5;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v2 = TlgAggregateInternalRegisteredProviderEtwCallback;
      if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_140C04350 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v6 = (unsigned __int8)ActivityId;
        v7 = byte_140036851;
        do
        {
          v8 = *v7;
          v7 += v5;
        }
        while ( v8 < 0 );
        do
        {
          v9 = *v7;
          v7 += v5;
        }
        while ( v9 );
        while ( v7 < &byte_1400368AC )
        {
          do
          {
            v10 = *v7;
            v7 += v5;
          }
          while ( v10 );
          v11 = *v7;
          v12 = &v7[v5];
          if ( v11 >= 0 )
            break;
          v13 = *v12;
          v14 = v11 & 0x7F;
          v7 = &v12[v5];
          if ( v13 >= 0 )
            break;
          while ( 1 )
          {
            v15 = *v7;
            if ( *v7 >= 0 )
              break;
            if ( v15 != (char)0x80 )
              goto LABEL_24;
            v7 += v5;
          }
          if ( v14 != 9 || (unsigned __int8)(v15 - 113) > 2u )
            break;
          v16 = 2LL * v6;
          v6 += v5;
          BYTE5(v27[v16]) = v15;
        }
LABEL_24:
        if ( v6 )
          LOBYTE(v2) = InsertEventEntryInLookUpTable(
                         (__int64)&dword_140C04328,
                         (__int128 *)&EventDescriptor,
                         5u,
                         (__int64)&UserData,
                         v6);
        else
          LOBYTE(v2) = EtwWriteEx(qword_140C04348, &EventDescriptor, 0LL, 0, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (char)v2;
}
