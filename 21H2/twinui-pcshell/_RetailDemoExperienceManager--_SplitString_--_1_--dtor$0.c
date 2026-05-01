/*
 * XREFs of _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x18025DC8F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180209C38 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 */

void __fastcall RetailDemoExperienceManager::_SplitString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    std::vector<std::wstring>::~vector<std::wstring>(*(_QWORD **)(a2 + 48));
  }
}
