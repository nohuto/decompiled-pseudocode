__int64 __fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v10; // rdi
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v8 = (a1[1] - *a1) >> 4;
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v5 + 16 * v8;
    if ( v7 == v8 )
      goto LABEL_3;
  }
  if ( v6 && (!v5 || v6 < 0 || v8 < v6) )
    _invalid_parameter_noinfo_noreturn();
  v12[0] = v5;
  v12[2] = v6;
  v12[1] = v8;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
    v13,
    v5 + 16 * v7,
    v3,
    v12);
LABEL_3:
  v10 = 16 * a3;
  result = detail::destruct_range<CVisualSurface::SourceCVI>(v3 - v10, v3, v5, v6);
  a1[1] -= v10;
  return result;
}
