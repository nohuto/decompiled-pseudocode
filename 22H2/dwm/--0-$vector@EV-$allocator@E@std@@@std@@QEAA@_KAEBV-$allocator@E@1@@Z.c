/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x14000861C
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memset_0 @ 0x14000430C (memset_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400083F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::vector<unsigned char>(_QWORD *a1, size_t a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
    *a1 = v4;
    v5 = (char *)v4 + a2;
    a1[2] = (char *)v4 + a2;
    memset_0(v4, 0, a2);
    a1[1] = v5;
  }
  return a1;
}
