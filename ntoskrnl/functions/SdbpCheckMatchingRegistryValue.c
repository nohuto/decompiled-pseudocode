__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v12; // r15
  _WORD *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  _DWORD *v23; // r14
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  bool v29; // zf
  _WORD *v30; // rax
  _WORD *v31; // rcx
  _WORD *v33; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  __int16 *v37; // [rsp+A8h] [rbp+58h]

  v37 = a4;
  SourceString = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  if ( !Str1 || !*Str1 )
    goto LABEL_35;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v17 = AslStringDuplicate((wchar_t **)&SourceString, Str1);
    v12 = (WCHAR *)SourceString;
    if ( v17 < 0 )
      goto LABEL_39;
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
    goto LABEL_39;
  }
  v20 = AslAlloc(v19, ResultLength);
  v14 = v20;
  if ( !v20 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_39;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v20, ResultLength, &ResultLength) < 0 )
    goto LABEL_14;
  v22 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_36;
  }
  if ( v22 != a3 )
    goto LABEL_17;
  v23 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  v24 = v22 - 1;
  if ( !v24 || (v25 = v24 - 1) == 0 )
  {
    v33 = AslAlloc(v21, (unsigned int)v14[3] + 2LL);
    v13 = v33;
    if ( !v33 )
      goto LABEL_14;
    memmove(v33, v23, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
LABEL_47:
    if ( !(unsigned int)AslStringPatternMatchExW(v37, v13) )
      goto LABEL_48;
LABEL_35:
    *a9 = 1;
    v15 = 1;
    if ( !v14 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    if ( Size != v14[3] )
      goto LABEL_48;
    v29 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_34:
    if ( v29 )
      goto LABEL_35;
LABEL_48:
    v15 = 1;
    goto LABEL_36;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    v29 = a5 == *v23;
    goto LABEL_34;
  }
  v28 = v27 - 3;
  if ( !v28 )
  {
    v30 = AslAlloc(v21, (unsigned int)v14[3] + 2LL);
    v13 = v30;
    if ( !v30 )
      goto LABEL_14;
    memmove(v30, v23, (unsigned int)v14[3]);
    v31 = v13;
    for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0; v31 < (_WORD *)((char *)v13 + (v14[3] & 0xFFFFFFFE)); ++v31 )
    {
      if ( !*v31 )
      {
        if ( !v31[1] )
          goto LABEL_47;
        *v31 = 59;
      }
    }
    goto LABEL_47;
  }
  if ( v28 == 4 )
  {
    v29 = a6 == *(_QWORD *)v23;
    goto LABEL_34;
  }
LABEL_14:
  AslLogCallPrintf(1LL);
LABEL_36:
  ExFreePoolWithTag(v14, 0x74705041u);
LABEL_37:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
LABEL_39:
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v15;
}
