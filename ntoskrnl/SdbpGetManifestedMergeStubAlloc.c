/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     SdbpGetMergeSdbsDisabled @ 0x14066B714 (SdbpGetMergeSdbsDisabled.c)
 *     AslStringDuplicate @ 0x1406D51D8 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     RtlGetNtSystemRoot @ 0x1407F7270 (RtlGetNtSystemRoot.c)
 *     AslRegistryGetKey @ 0x14084BF1C (AslRegistryGetKey.c)
 *     AslPathToSystemPath @ 0x140A526E4 (AslPathToSystemPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  wchar_t *v3; // rsi
  wchar_t *v4; // r12
  wchar_t *v5; // r13
  int MergeSdbsDisabled; // ebx
  int Key; // eax
  int v9; // r14d
  const wchar_t **v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  ULONG Length; // ebx
  ULONG v14; // r12d
  wchar_t *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  ULONG v18; // ebx
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *NtSystemRoot; // rax
  char *v23; // rbx
  size_t v24; // r8
  const wchar_t *KeyValueInformation; // [rsp+30h] [rbp-20h]
  wchar_t *v26; // [rsp+38h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+50h] BYREF
  ULONG v30; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0;
  v3 = 0LL;
  ResultLength = 0;
  v4 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  KeyHandle[0] = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&v30);
  if ( MergeSdbsDisabled >= 0 )
  {
    if ( v30 )
      return (unsigned int)-1073741772;
    Key = AslRegistryGetKey(
            KeyHandle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
            0x80000100,
            1);
    MergeSdbsDisabled = Key;
    if ( Key < 0 )
    {
      if ( Key != -1073741772 )
        AslLogCallPrintf(1LL);
      goto LABEL_48;
    }
    v9 = 1;
    v10 = (const wchar_t **)&off_14000A138;
    do
    {
      if ( !wcsicmp(a2, *v10) )
        break;
      ++v9;
      v10 += 4;
    }
    while ( (__int64)v10 < (__int64)&qword_14000A1F8 );
    v3 = 0LL;
    v5 = 0LL;
    if ( v9 >= 7 )
    {
LABEL_47:
      MergeSdbsDisabled = -1073741772;
      goto LABEL_48;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a2[v12] );
    Length = 2 * v12 + 18;
    v30 = Length;
    v4 = (wchar_t *)AslAlloc(0LL, Length);
    KeyValueInformation = v4;
    if ( !v4 )
    {
      MergeSdbsDisabled = -1073741801;
      AslLogCallPrintf(1LL);
LABEL_48:
      if ( (unsigned __int64)KeyHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        ZwClose(KeyHandle[0]);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x74705041u);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x74705041u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74705041u);
      return (unsigned int)MergeSdbsDisabled;
    }
    v14 = 0;
    v15 = (wchar_t *)KeyValueInformation;
    while ( 1 )
    {
      v16 = ZwEnumerateValueKey(KeyHandle[0], v14, KeyValuePartialInformation, v15, Length, &ResultLength);
      MergeSdbsDisabled = v16;
      if ( v16 == -2147483643 || v16 == -1073741789 )
        goto LABEL_25;
      if ( v16 == -2147483622 )
      {
        v4 = (wchar_t *)KeyValueInformation;
        goto LABEL_47;
      }
      if ( v16 < 0 )
        goto LABEL_44;
      v15 = (wchar_t *)KeyValueInformation;
      if ( *((_DWORD *)KeyValueInformation + 1) == 1 )
        break;
LABEL_26:
      Length = v30;
      ++v14;
    }
    if ( !wcsicmp(a2, KeyValueInformation + 6) )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a2[v17] );
      v18 = 2 * v17 + 538;
      v19 = v18;
      v5 = (wchar_t *)AslAlloc(0LL, v18);
      if ( !v5 )
      {
        MergeSdbsDisabled = -1073741801;
        goto LABEL_44;
      }
      MergeSdbsDisabled = ZwEnumerateValueKey(KeyHandle[0], v14, KeyValueBasicInformation, v5, v18, &ResultLength);
      if ( MergeSdbsDisabled >= 0 )
      {
        if ( (unsigned __int64)ResultLength + 2 > v19 )
        {
          MergeSdbsDisabled = -1073741789;
          goto LABEL_44;
        }
        NtSystemRoot = RtlGetNtSystemRoot(v21, v20);
        v23 = NtSystemRoot;
        v24 = -1LL;
        do
          ++v24;
        while ( *(_WORD *)&NtSystemRoot[2 * v24] );
        if ( wcsnicmp((const wchar_t *)NtSystemRoot, v5 + 6, v24) )
        {
          MergeSdbsDisabled = AslStringDuplicate(&v26, v5 + 6);
          if ( MergeSdbsDisabled < 0 )
            goto LABEL_39;
        }
        else
        {
          do
            ++v11;
          while ( *(_WORD *)&v23[2 * v11] );
          MergeSdbsDisabled = AslPathToSystemPath(&v26, &v5[v11 + 6]);
          if ( MergeSdbsDisabled < 0 )
          {
LABEL_39:
            AslLogCallPrintf(1LL);
            v3 = v26;
LABEL_45:
            v4 = (wchar_t *)KeyValueInformation;
            goto LABEL_48;
          }
        }
        v3 = v26;
        if ( v26 )
        {
          MergeSdbsDisabled = 0;
          *a1 = v26;
          v3 = 0LL;
          goto LABEL_45;
        }
        MergeSdbsDisabled = -1073741801;
      }
LABEL_44:
      AslLogCallPrintf(1LL);
      goto LABEL_45;
    }
LABEL_25:
    v15 = (wchar_t *)KeyValueInformation;
    goto LABEL_26;
  }
  AslLogCallPrintf(1LL);
  return (unsigned int)MergeSdbsDisabled;
}
