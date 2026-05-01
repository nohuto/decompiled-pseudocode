/*
 * XREFs of _ShellFeedsAvailabilityHelpers::GetCurrentLanguage_::_1_::dtor$0 @ 0x180109A02
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800CEA40 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::GetCurrentLanguage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::wstring::~wstring(*(_QWORD **)(a2 + 40));
  }
}
