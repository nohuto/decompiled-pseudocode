__int64 __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v4 = 104 * a3;
  v3 = v5 + 8 * ((a1[1] - *a1) >> 3);
  if ( a3 != v7 )
  {
LABEL_5:
    v9[2] = 0LL;
    v9[0] = v5;
    v9[1] = v7;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
      v10,
      v4 + v5,
      v3,
      v9);
  }
  result = detail::destruct_range<EffectInput>(v3 - v4, v3);
  a1[1] -= v4;
  return result;
}
