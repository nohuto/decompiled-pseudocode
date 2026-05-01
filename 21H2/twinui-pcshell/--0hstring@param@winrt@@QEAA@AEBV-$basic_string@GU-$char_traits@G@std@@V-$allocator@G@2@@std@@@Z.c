/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800A0F90
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     _lambda_7ebe327a947a791a3f61eeb2c5c67313_::operator() @ 0x180136D7C (_lambda_7ebe327a947a791a3f61eeb2c5c67313_--operator().c)
 * Callees:
 *     WINRT_WindowsCreateStringReference @ 0x180091442 (WINRT_WindowsCreateStringReference.c)
 */

HSTRING *__fastcall winrt::param::hstring::hstring(HSTRING *string, const WCHAR *sourceString)
{
  PCWSTR v2; // rax
  UINT32 v4; // edx

  v2 = sourceString;
  v4 = *((_DWORD *)sourceString + 4);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(PCWSTR *)v2;
  WINRT_WindowsCreateStringReference(v2, v4, (HSTRING_HEADER *)(string + 1), string);
  return string;
}
