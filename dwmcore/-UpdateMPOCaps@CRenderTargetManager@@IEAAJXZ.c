__int64 __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  __int64 *v2; // r14
  int v3; // edi
  __int64 *i; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *((_BYTE *)this + 576) = 1;
  v2 = (__int64 *)*((_QWORD *)this + 2);
  v3 = 0;
  for ( i = (__int64 *)*((_QWORD *)this + 1); i != v2; ++i )
  {
    v6 = *i;
    v10 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v6, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v10) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1BBu, 0LL);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
