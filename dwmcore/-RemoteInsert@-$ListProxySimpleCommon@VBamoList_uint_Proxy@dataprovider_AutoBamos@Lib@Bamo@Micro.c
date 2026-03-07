__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteInsert(
        _QWORD *a1,
        unsigned int a2,
        int a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct Microsoft::Bamo::BaseBamoConnection *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  char *v17; // rcx
  char *v18; // rdi
  int v19; // eax
  Microsoft::BamoImpl::BamoImplObject *v20[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = a3;
  v3 = a1 + 6;
  v6 = (__int64)(a1[7] - a1[6]) >> 2;
  v7 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
  if ( a2 <= v6 )
  {
    if ( *(int *)(v8 + 8) <= 0 )
      v13 = 0LL;
    else
      v13 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v8 + 16);
    Microsoft::Bamo::Lock::Lock(v20, v13);
    v17 = (char *)v3[1];
    v18 = (char *)(*v3 + 4 * v7);
    if ( v17 == (char *)v3[2] )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(v3, (_BYTE *)(*v3 + 4 * v7), &v22);
    }
    else if ( v18 == v17 )
    {
      *(_DWORD *)v17 = a3;
      v3[1] += 4LL;
    }
    else
    {
      *(_DWORD *)v17 = *((_DWORD *)v17 - 1);
      v3[1] += 4LL;
      memmove_0(v18 + 4, v18, v17 - v18 - 4);
      *(_DWORD *)v18 = a3;
    }
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v20, v14, v15, v16);
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 120LL))(a1, (unsigned int)v7);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1187LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v19,
          (int)v20[0]);
    }
    return 0LL;
  }
  else
  {
    if ( *(int *)(v8 + 8) <= 0 )
      v9 = 0LL;
    else
      v9 = *(Microsoft::Bamo::BaseBamoConnection **)(v8 + 16);
    v10 = Microsoft::Bamo::BaseBamoConnection::TrackError(v9, a2);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10);
    return v11;
  }
}
