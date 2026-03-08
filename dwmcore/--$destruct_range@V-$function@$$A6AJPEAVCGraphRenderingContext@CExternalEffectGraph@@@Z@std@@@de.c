/*
 * XREFs of ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x1800D206C
 * Callers:
 *     ?clear_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D139C (-clear_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800D1F88 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800D2104 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
