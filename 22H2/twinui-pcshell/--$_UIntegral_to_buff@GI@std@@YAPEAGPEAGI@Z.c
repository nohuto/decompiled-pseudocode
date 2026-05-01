/*
 * XREFs of ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180108984
 * Callers:
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800BA2B4 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x1803C58AC (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<unsigned short,unsigned int>(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
