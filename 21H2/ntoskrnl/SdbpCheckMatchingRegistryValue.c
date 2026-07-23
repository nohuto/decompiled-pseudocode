/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x140964A2C
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x14096484C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x14096567C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v12; // r15
  unsigned __int16 *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  _DWORD *v23; // r14
  bool v24; // zf
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rcx
  unsigned __int16 *v28; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int16 *v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  SourceString = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  if ( !Str1 || !*Str1 )
    goto LABEL_27;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v17 = AslStringDuplicate((wchar_t **)&SourceString, Str1);
    v12 = (WCHAR *)SourceString;
    if ( v17 < 0 )
      goto LABEL_33;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_33;
  }
  v20 = AslAlloc(v19, ResultLength);
  v14 = v20;
  if ( !v20 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_33;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v20, ResultLength, &ResultLength) < 0 )
    goto LABEL_14;
  v22 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_29;
  }
  if ( v22 != a3 )
    goto LABEL_17;
  v23 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  if ( !v22 )
    goto LABEL_14;
  if ( v22 <= 2 )
  {
    v28 = (unsigned __int16 *)AslAlloc(v21, (unsigned int)v14[3] + 2LL);
    v13 = v28;
    if ( !v28 )
      goto LABEL_14;
    memmove(v28, v23, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
    goto LABEL_42;
  }
  switch ( v22 )
  {
    case 3u:
      if ( Size != v14[3] )
        goto LABEL_28;
      v24 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_26:
      if ( !v24 )
      {
LABEL_28:
        v15 = 1;
        goto LABEL_29;
      }
LABEL_27:
      *a9 = 1;
      goto LABEL_28;
    case 4u:
      v24 = a5 == *v23;
      goto LABEL_26;
    case 7u:
      v26 = (unsigned __int16 *)AslAlloc(v21, (unsigned int)v14[3] + 2LL);
      v13 = v26;
      if ( !v26 )
        break;
      memmove(v26, v23, (unsigned int)v14[3]);
      v27 = v13;
      for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
            v27 < (unsigned __int16 *)((char *)v13 + (v14[3] & 0xFFFFFFFE));
            ++v27 )
      {
        if ( !*v27 )
        {
          if ( !v27[1] )
            break;
          *v27 = 59;
        }
      }
LABEL_42:
      if ( !(unsigned int)AslStringPatternMatchW(v32, v13) )
        goto LABEL_28;
      goto LABEL_27;
    case 0xBu:
      v24 = a6 == *(_QWORD *)v23;
      goto LABEL_26;
  }
LABEL_14:
  AslLogCallPrintf(1LL);
LABEL_29:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x74705041u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
LABEL_33:
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v15;
}
