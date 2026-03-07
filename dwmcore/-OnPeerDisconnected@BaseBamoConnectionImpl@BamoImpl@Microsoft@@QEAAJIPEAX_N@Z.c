__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  __int64 v7; // r8
  int v8; // eax
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v12; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3);
  LOBYTE(v7) = a4;
  v8 = (*((__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl **, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))*this
        + 7))(
         this,
         a3,
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2027LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8,
      v14);
  v10 = this[14];
  v11 = 0LL;
  while ( 1 )
  {
    if ( !v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2199LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v9);
    if ( v10 == a3 )
      break;
    v11 = v10;
    v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)v10 + 8);
  }
  v12 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 8);
  if ( v11 )
    *((_QWORD *)v11 + 8) = v12;
  else
    this[14] = v12;
  *((_QWORD *)a3 + 8) = 0LL;
  (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0LL;
}
