_QWORD *__fastcall CRenderingEffect::GetCommonSuperset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *, __int64, char *))(*(_QWORD *)a2 + 80LL))(a2, &v7, a3, &v6);
  if ( !v6 )
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v7);
  v4 = v7;
  v7 = 0LL;
  *a1 = v4;
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>(&v7);
  return a1;
}
