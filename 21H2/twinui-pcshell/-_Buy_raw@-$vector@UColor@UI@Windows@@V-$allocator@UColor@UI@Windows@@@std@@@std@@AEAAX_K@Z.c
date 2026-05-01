/*
 * XREFs of ?_Buy_raw@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1804C04EC
 * Callers:
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1804C04B4 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_unchecked@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@PEAV12@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@PEAV10@00@Z @ 0x1804C067C (--$_Copy_unchecked@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@P.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1804C08B8 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<Windows::UI::Color>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rcx
  _QWORD *v5; // rax
  char *result; // rax

  v3 = 4 * a2;
  v4 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v4 = -1LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *a1 = v5;
  a1[1] = v5;
  result = (char *)v5 + v3;
  a1[2] = result;
  return result;
}
