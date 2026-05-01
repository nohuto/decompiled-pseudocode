/*
 * XREFs of ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_KAEB_K@Z @ 0x1800E8880
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800EABCC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800E5880 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pa.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,unsigned __int64>::operator[](
        __int64 a1,
        const unsigned __int8 *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::unordered_map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(a1, (__int64)v3, a2);
  return v3[0] + 24LL;
}
