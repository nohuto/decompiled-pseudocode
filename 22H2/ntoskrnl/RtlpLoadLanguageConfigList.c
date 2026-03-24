/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x14078F5A0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140790108 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     LdrpOpenKey @ 0x14078F688 (LdrpOpenKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x14078FCBC (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x14078FE60 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140980D50 (RtlpLoadPolicyLanguageSpec.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // eax
  int PolicyLanguageSpec; // ebx
  void *v11; // rcx
  __int64 LanguageConfigList; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a2 && a3 )
  {
    v5 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    if ( (int)LdrpOpenKey(&DestinationString, 0LL, v6, &Handle) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_6;
      NtClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v8 = LdrpOpenKey(&DestinationString, 0LL, v7, &Handle);
    PolicyLanguageSpec = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741772 )
        PolicyLanguageSpec = 0;
    }
    else
    {
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(Handle, a2, a3);
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_6:
  if ( Handle )
    NtClose(Handle);
  if ( PolicyLanguageSpec < 0 )
  {
    if ( a2 )
    {
      v11 = (void *)*a2;
      if ( (void *)*a2 != v5 )
      {
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        goto LABEL_22;
      }
    }
  }
  else if ( !*a2 )
  {
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( !LanguageConfigList )
    {
      PolicyLanguageSpec = -1073741801;
LABEL_22:
      *a2 = (__int64)v5;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
