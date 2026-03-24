/*
 * XREFs of ??0?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800DEFD8
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_latencyData__ @ 0x1800013E0 (_anonymous_namespace_--_dynamic_initializer_for__g_latencyData__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::list<ComputeScribbleLatencyData>::list<ComputeScribbleLatencyData>()
{
  _QWORD *v0; // rax

  xmmword_18034B470 = 0LL;
  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v0 = v0;
  v0[1] = v0;
  *(_QWORD *)&xmmword_18034B470 = v0;
  return &xmmword_18034B470;
}
