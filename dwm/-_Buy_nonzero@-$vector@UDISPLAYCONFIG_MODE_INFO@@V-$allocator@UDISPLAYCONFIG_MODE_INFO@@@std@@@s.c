/*
 * XREFs of ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D744
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140007058 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000C41C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = a2 << 6;
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 6);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[v3];
  a1[2] = result;
  return result;
}
