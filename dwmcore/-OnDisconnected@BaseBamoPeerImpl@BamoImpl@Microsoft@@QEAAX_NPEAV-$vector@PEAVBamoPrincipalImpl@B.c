void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        __int64 a1,
        char a2,
        __int64 a3,
        char *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD **)(a1 + 56);
  *(_BYTE *)(a1 + 49) = 1;
  *(_QWORD *)a4 = v5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  while ( v5 )
  {
    v8 = v5[3];
    v9 = 0LL;
    for ( i = *(_QWORD **)(v8 + 32); i; i = (_QWORD *)i[5] )
    {
      if ( i == v5 )
      {
        v11 = v5[5];
        if ( v9 )
          v9[5] = v11;
        else
          *(_QWORD *)(v8 + 32) = v11;
        v5[5] = 0LL;
        break;
      }
      v9 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        727LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        a4);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal((__int64)v5, a2, a3);
    *a5 = v5;
    v5 = (_QWORD *)v5[6];
  }
}
