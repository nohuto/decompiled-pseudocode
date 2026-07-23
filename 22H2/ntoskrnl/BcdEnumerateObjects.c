/*
 * XREFs of BcdEnumerateObjects @ 0x14096ED5C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     RtlGUIDFromString @ 0x1406BD650 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x140781ED8 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x140783428 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x14096F2C4 (BiIsEnumerateMatch.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PULONG v5; // r12
  char *v6; // rsi
  char v8; // r15
  NTSTATUS result; // eax
  PCWSTR *v10; // rdi
  int v11; // eax
  void *v12; // r14
  NTSTATUS v13; // ebx
  int v14; // eax
  ULONG v15; // r15d
  __int64 v16; // r13
  const WCHAR **v17; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v19; // rax
  char *v20; // r13
  unsigned __int64 v21; // rcx
  ULONG v22; // esi
  ULONG v23; // r14d
  ULONG i; // r12d
  int v25; // ebx
  __int64 v26; // rax
  char IsOfflineHandle; // [rsp+20h] [rbp-40h]
  ULONG v28; // [rsp+24h] [rbp-3Ch] BYREF
  void *v29; // [rsp+28h] [rbp-38h] BYREF
  PCWSTR *v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  void *v32; // [rsp+40h] [rbp-20h] BYREF
  ULONG v33; // [rsp+48h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  GUID *Guid; // [rsp+B0h] [rbp+50h]

  Guid = (GUID *)Buffer;
  v31 = 0LL;
  v5 = BufferSize;
  v29 = 0LL;
  v6 = (char *)Buffer;
  v28 = 0;
  DestinationString = 0LL;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v8 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v32 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v32);
    v12 = v32;
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = BiEnumerateSubKeys(v32, &v30, &v28);
      v10 = v30;
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( v28 )
        {
          v16 = v28;
          v17 = v30;
          do
          {
            if ( (int)BiOpenKey((__int64)v12, *v17, 0x20019u, &v29) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)v29, &v31);
              BiCloseKey(v29);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v31)) )
                  ++v15;
              }
            }
            ++v17;
            --v16;
          }
          while ( v16 );
          v5 = BufferSize;
          v6 = (char *)Guid;
        }
        v19 = 24LL * v15;
        if ( v19 > 0xFFFFFFFF
          || (v20 = &v6[(unsigned int)v19], v21 = 8LL * v15, v21 > 0xFFFFFFFF)
          || (v22 = v21 + v19, LODWORD(v30) = v21 + v19, (int)v21 + (int)v19 < (unsigned int)v19) )
        {
          v13 = -1073741675;
        }
        else if ( v22 <= *v5 )
        {
          v33 = 0;
          v23 = 0;
          if ( v28 )
          {
            for ( i = v33; i < v28; ++i )
            {
              if ( v23 >= v15 )
                break;
              if ( (int)BiOpenKey((__int64)v32, v10[i], 0x20019u, &v29) >= 0 )
              {
                v25 = BiGetObjectDescription((__int64)v29, &v31);
                BiCloseKey(v29);
                if ( v25 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v31)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v10[i]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v26 = v31;
                      *(_QWORD *)&Guid[1].Data1 = v20;
                      *(_QWORD *)v20 = v26;
                      v20 += 8;
                      ++v23;
                      Guid = (GUID *)((char *)Guid + 24);
                    }
                  }
                }
              }
            }
            v22 = (unsigned int)v30;
            v5 = BufferSize;
          }
          v13 = 0;
          *v5 = v22;
          *ObjectCount = v23;
          v12 = v32;
        }
        else
        {
          v13 = -1073741789;
          *v5 = v22;
          *ObjectCount = v15;
        }
        v8 = IsOfflineHandle;
      }
    }
    if ( v12 )
      BiCloseKey(v12);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B444342u);
    BiReleaseBcdSyncMutant(v8);
    return v13;
  }
  return result;
}
