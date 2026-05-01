/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$2 @ 0x1800EAE82
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800E7E44 (--1-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    std::unordered_map<unsigned __int64,unsigned __int64>::~unordered_map<unsigned __int64,unsigned __int64>(*(_QWORD *)(a2 + 144));
  }
}
