__int64 __fastcall std::move_backward<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = (a3 - a2) >> 6;
  if ( v8 > 0 )
  {
    if ( *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 < 0 && a4[1] - *v5 < (unsigned __int64)-v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4 + (*v5 << 6);
  while ( a2 != v7 )
  {
    v10 -= 64LL;
    v7 -= 64LL;
    std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>::operator=(v10, v7);
  }
  result = a1;
  *v5 = (v10 - *a4) >> 6;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
