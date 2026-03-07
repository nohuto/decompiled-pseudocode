__int64 __fastcall detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  char v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v6 = *a1;
  v7 = (a1[1] - v6) >> 6;
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = v6 + (v7 << 6);
  v4 = a3 << 6;
  if ( a3 != v7 )
  {
LABEL_5:
    v9[2] = 0LL;
    v9[0] = v6;
    v9[1] = v7;
    ((void (__fastcall *)(char *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>)(
      v10,
      v4 + v6,
      v3,
      v9);
  }
  result = detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v3 - v4, v3);
  a1[1] -= v4;
  return result;
}
