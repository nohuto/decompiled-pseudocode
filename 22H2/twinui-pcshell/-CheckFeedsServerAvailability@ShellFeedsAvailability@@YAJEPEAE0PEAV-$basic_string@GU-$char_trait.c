/*
 * XREFs of ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801073BC
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z @ 0x180108058 (-SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG0K@Z.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108D88 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180109994 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x180115DE8 (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::CheckFeedsServerAvailability(char a1, _BYTE *a2, bool *a3, char *a4)
{
  const unsigned __int16 *v8; // r8
  unsigned int v9; // r9d
  BYTE *v10; // rdx
  ShellFeedsAvailabilityHelpers *v11; // rcx
  unsigned __int8 IsNetworkConnectivityAvailable; // al
  unsigned __int8 *v13; // r8
  int v14; // eax
  unsigned int v15; // ebx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v19[8]; // [rsp+20h] [rbp-48h] BYREF
  BYTE *lpData[4]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(lpData);
  v10 = (BYTE *)lpData;
  if ( lpData[3] >= (BYTE *)8 )
    v10 = lpData[0];
  ShellFeedsRegistryHelper::SetShellFeedsRegKey(L"osLocale", v10, v8, v9);
  if ( !*a2 && !a1 )
    goto LABEL_11;
  IsNetworkConnectivityAvailable = ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable(v11);
  *a3 = IsNetworkConnectivityAvailable == 0;
  if ( !IsNetworkConnectivityAvailable )
    goto LABEL_11;
  v19[0] = 0;
  v19[1] = 0;
  v14 = ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer((ShellFeedsAvailabilityHelpers *)&v19[1], v19, v13);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = v19[0];
    *a3 = v19[0];
    if ( !v16 )
    {
      v17 = v19[1];
      *a2 = v19[1];
      if ( !v17 )
        std::wstring::assign(a4, L"FeedsNotPresentOnServer", 0x17uLL);
    }
LABEL_11:
    v15 = 0;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v14);
LABEL_12:
  std::wstring::_Tidy_deallocate(lpData);
  return v15;
}
