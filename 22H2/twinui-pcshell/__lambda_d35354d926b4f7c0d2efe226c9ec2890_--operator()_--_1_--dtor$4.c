/*
 * XREFs of __lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator()_::_1_::dtor$4 @ 0x1800CFAEF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800CEA40 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall _lambda_d35354d926b4f7c0d2efe226c9ec2890_::operator()_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::wstring::~wstring((_QWORD *)(a2 + 56));
  }
}
