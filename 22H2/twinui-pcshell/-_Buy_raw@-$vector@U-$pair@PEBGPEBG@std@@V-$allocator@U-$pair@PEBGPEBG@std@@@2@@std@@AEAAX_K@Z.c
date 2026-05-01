/*
 * XREFs of ?_Buy_raw@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z @ 0x18020F93C
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18020B580 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x180295238 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_raw(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rcx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v3 = 2 * a2;
  v4 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v4 = -1LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[v3];
  a1[2] = result;
  return result;
}
