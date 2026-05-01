/*
 * XREFs of ??$find@PEBGU?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x1804C8898
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800DB4A0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 *     ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x1804C91B0 (-IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18020FC64 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,int>(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 **a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // r11
  _QWORD *v8; // r11
  _QWORD *result; // rax

  v3 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a1;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( (int)std::wstring::compare((__int64 *)(v7 + 32), *a3) >= 0 )
    {
      v6 = v8;
      v7 = *v8;
    }
    else
    {
      v7 = v8[2];
    }
  }
  if ( v6 == v3 || (int)std::wstring::compare(v6 + 4, *a3) > 0 )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
