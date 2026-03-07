__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        volatile signed __int32 **this,
        int a2,
        int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(volatile signed __int32 **, __int64, void ***, __int64 *); // rdi
  int v13; // eax
  void (__fastcall *v14)(__int64, __int64); // rdi
  __int64 v15; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v16; // rax
  unsigned int v17; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v25 = 0LL;
  *a5 = 0LL;
  v10 = (*((__int64 (__fastcall **)(volatile signed __int32 **, _QWORD *))*this + 5))(this, v23);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x77D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v21);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize((Microsoft::BamoImpl::BamoImplObject **)v11, this, a2, a3, a4);
  v12 = (__int64 (__fastcall *)(volatile signed __int32 **, __int64, void ***, __int64 *))*((_QWORD *)*this + 6);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v13 = v12(this, v11, &a5, &v25);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x787,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v13,
      v22);
  if ( (_BYTE)a5 )
  {
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 96LL);
    v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)this[2] + 48LL))(this[2]);
    v14(v11, v15);
    if ( v25 )
    {
      v16 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
      v17 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
              v16,
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)v11);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, v17);
    }
    *(_QWORD *)(v11 + 64) = this[14];
    this[14] = (volatile signed __int32 *)v11;
    *v5 = (void *)v11;
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v25);
    return 0LL;
  }
  else
  {
    v19 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
            -2018375668,
            0);
    v20 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x790,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v19);
    wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v25);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    return v20;
  }
}
