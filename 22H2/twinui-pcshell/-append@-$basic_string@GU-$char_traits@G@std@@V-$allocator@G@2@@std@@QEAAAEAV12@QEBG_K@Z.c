/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802497F4
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@AEBV10@@Z @ 0x1800AF844 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800AF90C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1800AF90C.c)
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15C0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x1800B5D00 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116D40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116D40.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BAA0 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180246A40 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1802678E4 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1802678E4.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@0@Z @ 0x1802B8ED0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1802B8ED0.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x1803C58AC (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1802453F4 (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 */

void **__fastcall std::wstring::append(void **Src, const void *a2, unsigned __int64 a3)
{
  void *v4; // rcx
  bool v5; // cf
  __int64 v6; // rsi
  _QWORD *v7; // rdi

  v4 = Src[2];
  if ( a3 > (_BYTE *)Src[3] - (_BYTE *)v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
             Src,
             a3,
             a3,
             a2,
             a3);
  v5 = (unsigned __int64)Src[3] < 8;
  v6 = (__int64)v4 + a3;
  Src[2] = (char *)v4 + a3;
  v7 = Src;
  if ( !v5 )
    v7 = *Src;
  memmove_0((char *)v7 + 2 * (_QWORD)v4, a2, 2 * a3);
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
