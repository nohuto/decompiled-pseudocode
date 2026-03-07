_QWORD *__fastcall std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  CResource *v9; // rcx
  CResource *v10; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = (CResource *)*(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      CResource::InternalRelease(v9);
  }
  v10 = *(CResource **)(*(_QWORD *)(a1 + 8) - 8LL);
  if ( v10 )
    CResource::InternalRelease(v10);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
