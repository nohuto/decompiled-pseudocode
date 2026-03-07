CScopedClipStack::ClippingScopeState *__fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  CScopedClipStack::ClippingScopeState *v6; // rbx
  signed __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  CScopedClipStack::ClippingScopeState *v12; // rdi
  CScopedClipStack::ClippingScopeState *v13; // rsi
  CScopedClipStack::ClippingScopeState *i; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  CScopedClipStack::ClippingScopeState *v21; // rdx
  LPVOID v22; // rbx
  CScopedClipStack::ClippingScopeState *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r11
  __int64 v28; // r10
  CScopedClipStack::ClippingScopeState *v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  signed __int64 v31; // [rsp+30h] [rbp-58h]
  _BYTE v32[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0xD37A6F4DE9BD37A7uLL * ((v4 - v2) >> 3)) )
  {
    v16 = 0xD37A6F4DE9BD37A7uLL * ((v2 - *(_QWORD *)a1) >> 3);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(a1, 0xD37A6F4DE9BD37A7uLL * ((v4 - *(_QWORD *)a1) >> 3), v17);
    v19 = operator new(saturated_mul(v18, 0xB8uLL));
    v20 = *((_QWORD *)a1 + 1);
    v21 = *(CScopedClipStack::ClippingScopeState **)a1;
    v22 = v19;
    v29 = (CScopedClipStack::ClippingScopeState *)v19;
    v30 = v16;
    v31 = 0LL;
    std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
      v32,
      v21,
      v20,
      &v29);
    detail::destruct_range<CScopedClipStack::ClippingScopeState>(*(CScopedClipStack::ClippingScopeState **)a1);
    v23 = *(CScopedClipStack::ClippingScopeState **)a1;
    v24 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v2 = *(_QWORD *)a1 + 184 * v16;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 184 * v18;
  }
  v6 = *(CScopedClipStack::ClippingScopeState **)a1;
  v7 = 0xD37A6F4DE9BD37A7uLL * ((v2 - *(_QWORD *)a1) >> 3);
  v8 = v7 - a2;
  v9 = *(_QWORD *)a1 + 8 * ((v2 - *(_QWORD *)a1) >> 3);
  if ( !v9 )
    goto LABEL_21;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  if ( v2 != v2 - 184 * v10 )
  {
    v25 = 0LL;
    v26 = v2 - 184;
    while ( 1 )
    {
      CScopedClipStack::ClippingScopeState::ClippingScopeState(v9 + 184 * v25, v26);
      if ( v4 == v28 )
        break;
      v26 = v4 - 184;
      if ( v27 )
      {
        v25 = v27 - 1;
        if ( v27 == 1 )
          continue;
      }
      goto LABEL_21;
    }
  }
  if ( v8 <= 1 )
  {
    v11 = 184 * a2;
    goto LABEL_8;
  }
  if ( v7 && (!v6 || v7 < 0) )
LABEL_21:
    _invalid_parameter_noinfo_noreturn();
  v11 = 184 * a2;
  v30 = v7;
  v31 = v7;
  v29 = v6;
  std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
    v32,
    (char *)v6 + 184 * a2,
    (char *)v6 + 184 * v7 - 184,
    &v29);
LABEL_8:
  v12 = (CScopedClipStack::ClippingScopeState *)((char *)v6 + 184 * a2 + 184);
  if ( v9 < (unsigned __int64)v12 )
    v12 = (CScopedClipStack::ClippingScopeState *)v9;
  v13 = (CScopedClipStack::ClippingScopeState *)((char *)v6 + v11);
  for ( i = v13; i != v12; i = (CScopedClipStack::ClippingScopeState *)((char *)i + 184) )
    CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(i, v4);
  *((_QWORD *)a1 + 1) += 184LL;
  return v13;
}
