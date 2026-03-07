__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 i; // rbx
  __int64 v14; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  result = 0xD37A6F4DE9BD37A7uLL;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v10 = 0xD37A6F4DE9BD37A7uLL * (v7 >> 3);
  v11 = a2;
  if ( a2 + a3 > v10 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 184 * v10;
    if ( v8 == v10 )
      goto LABEL_3;
  }
  if ( v11 && (!v4 || v11 < 0 || v10 < v11) )
    _invalid_parameter_noinfo_noreturn();
  v15[2] = v11;
  v15[0] = v4;
  v15[1] = v10;
  result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>)(
             v16,
             v4 + 184 * v8,
             v3,
             v15);
LABEL_3:
  v12 = 184 * a3;
  for ( i = v3 - 184 * a3; i != v3; i += 184LL )
  {
    v14 = *(_QWORD *)(i + 168);
    if ( v14 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, a2, a3, v11);
  }
  a1[1] -= v12;
  return result;
}
