/*
 * XREFs of ?GetCurrentUILanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109AD8
 * Callers:
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109994 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180090EF4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailabilityHelpers::GetCurrentUILanguage(__int64 a1)
{
  size_t v2; // rax
  WCHAR *v3; // rax
  WCHAR *v4; // rbx
  BOOL UserPreferredUILanguages; // eax
  WCHAR *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  ULONG pcchLanguagesBuffer; // [rsp+38h] [rbp+10h] BYREF
  ULONG pulNumLanguages; // [rsp+40h] [rbp+18h] BYREF
  WCHAR *v11; // [rsp+48h] [rbp+20h]

  pcchLanguagesBuffer = 0;
  if ( !GetUserPreferredUILanguages(8u, &pulNumLanguages, 0LL, &pcchLanguagesBuffer) )
    goto LABEL_2;
  v2 = 2LL * pcchLanguagesBuffer;
  if ( !is_mul_ok(pcchLanguagesBuffer, 2uLL) )
    v2 = -1LL;
  v3 = (WCHAR *)operator new[](v2, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v11 = v3;
  if ( v3 )
  {
    UserPreferredUILanguages = GetUserPreferredUILanguages(8u, &pulNumLanguages, v3, &pcchLanguagesBuffer);
    v6 = (WCHAR *)&szAgent;
    if ( UserPreferredUILanguages )
      v6 = v4;
    std::wstring::wstring(a1, v6);
    operator delete(v4, v7);
  }
  else
  {
LABEL_2:
    std::wstring::wstring(a1, &szAgent);
  }
  return a1;
}
