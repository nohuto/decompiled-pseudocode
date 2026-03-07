__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::MarkPrincipalReadyOnPropertiesRefreshed(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 *i; // rdx
  __int64 v9; // rax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  if ( Principal )
  {
    for ( i = (__int64 *)*((_QWORD *)Principal + 4); i; i = (__int64 *)i[5] )
    {
      if ( *(_DWORD *)(i[4] + 36) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Principal + 2) + 32LL) + 32LL) )
        break;
    }
    v9 = *i;
    *((_BYTE *)i + 57) = 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 64))(i);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        263LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)(unsigned int)v10,
        v11);
    return 0LL;
  }
  else
  {
    v5 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, -2018375668, 0);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x604,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v5);
    return v6;
  }
}
