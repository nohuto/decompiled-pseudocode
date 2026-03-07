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
