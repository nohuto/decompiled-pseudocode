unsigned __int64 __fastcall detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15[4]; // [rsp+20h] [rbp-48h] BYREF
  char v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = 0xCCCCCCCCCCCCCCCDuLL * ((v3 - v4) >> 3);
  if ( result < a2 )
  {
    v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v4 - *a1) >> 3);
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18015B514LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xCCCCCCCCCCCCCCCDuLL * ((v3 - *a1) >> 3)),
           0xCCCCCCCCCCCCCCCDuLL * ((v3 - *a1) >> 3),
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 0x28uLL));
    v9 = (__int64 *)a1[1];
    v10 = *a1;
    v15[0] = (__int64)v8;
    v15[2] = 0LL;
    v11 = (__int64)v8;
    v15[1] = v6;
    std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>(
      (__int64)v16,
      v10,
      v9,
      v15);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkRenderParameters>(*a1, a1[1]);
    v12 = (void *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *a1;
    result = 5 * v7;
    a1[1] = *a1 + 40 * v6;
    a1[2] = v14 + 40 * v7;
  }
  return result;
}
