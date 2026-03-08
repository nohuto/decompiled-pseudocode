/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x140843624
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140843F90 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     LdrpOpenKey @ 0x14084370C (LdrpOpenKey.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084413C (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x140844284 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140A716A4 (RtlpLoadPolicyLanguageSpec.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // eax
  int PolicyLanguageSpec; // ebx
  void *v10; // rcx
  __int64 LanguageConfigList; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  Handle = 0LL;
  v4 = 0LL;
  DestinationString = 0LL;
  if ( a2 && a3 )
  {
    v4 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    if ( (int)LdrpOpenKey(&DestinationString, 0LL, v5, &Handle) >= 0 )
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
    v7 = LdrpOpenKey(&DestinationString, 0LL, v6, &Handle);
    PolicyLanguageSpec = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -1073741772 )
        PolicyLanguageSpec = 0;
    }
    else
    {
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(Handle);
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
      v10 = (void *)*a2;
      if ( (void *)*a2 != v4 )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
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
      *a2 = (__int64)v4;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
