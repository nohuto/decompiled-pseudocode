void __fastcall CSceneWorld::AddDirtySceneObject(CSceneWorld *this, struct CSceneObject *a2)
{
  char *v2; // rdi
  struct CSceneObject **i; // rax
  __int64 *v5; // rdx
  struct CSceneObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 128;
  for ( i = (struct CSceneObject **)*((_QWORD *)this + 16); i != *((struct CSceneObject ***)this + 17); ++i )
  {
    if ( *i == a2 )
      return;
  }
  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CSceneObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (__int64 *)*((_QWORD *)v2 + 1);
  if ( v5 == *((__int64 **)v2 + 2) )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64 **)v2,
      v5,
      (__int64 *)&v6);
  }
  else
  {
    v6 = 0LL;
    *v5 = (__int64)a2;
    *((_QWORD *)v2 + 1) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
}
