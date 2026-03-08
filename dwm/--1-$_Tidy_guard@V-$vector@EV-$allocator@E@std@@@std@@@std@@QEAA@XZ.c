/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x14000C638
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x14000D8BC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<unsigned char>::_Tidy();
  return result;
}
