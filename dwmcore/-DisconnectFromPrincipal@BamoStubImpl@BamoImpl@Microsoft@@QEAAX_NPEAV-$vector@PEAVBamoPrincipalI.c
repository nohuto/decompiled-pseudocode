char __fastcall Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(__int64 a1, char a2, __int64 a3)
{
  _QWORD *i; // rax
  _QWORD **v6; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rdx

  LOBYTE(i) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = 0;
  if ( (_BYTE)i && !a2 )
    LOBYTE(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( a3 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v6 = (_QWORD **)(a1 + 24);
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(int *)(v7 + 8) <= 0 )
      {
        for ( i = *(_QWORD **)a3; i != *(_QWORD **)(a3 + 8); ++i )
        {
          if ( *i == v7 )
            goto LABEL_14;
        }
        (**(void (__fastcall ***)(__int64))v7)(v7);
        v8 = *(_BYTE **)(a3 + 8);
        if ( v8 == *(_BYTE **)(a3 + 16) )
        {
          LOBYTE(i) = (unsigned __int8)std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
                                         (const void **)a3,
                                         v8,
                                         (_QWORD *)(a1 + 24));
        }
        else
        {
          i = *v6;
          *(_QWORD *)v8 = *v6;
          *(_QWORD *)(a3 + 8) += 8LL;
        }
      }
    }
  }
LABEL_14:
  *(_QWORD *)(a1 + 24) = 0LL;
  return (char)i;
}
