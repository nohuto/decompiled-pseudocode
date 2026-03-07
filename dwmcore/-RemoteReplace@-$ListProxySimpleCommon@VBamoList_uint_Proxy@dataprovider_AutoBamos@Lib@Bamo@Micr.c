__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        int a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  Microsoft::Bamo::BaseBamoConnection *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // ebp
  char v12; // si
  __int64 v13; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  int v18; // eax
  Microsoft::BamoImpl::BamoImplObject *v19[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[7] - a1[6]) >> 2) )
  {
    v11 = 0;
    v12 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v13 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v13 + 8) <= 0 )
      v14 = 0LL;
    else
      v14 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v13 + 16);
    Microsoft::Bamo::Lock::Lock(v19, v14);
    if ( v12 )
      v11 = *(_DWORD *)(a1[6] + 4 * v5);
    *(_DWORD *)(a1[6] + 4 * v5) = a3;
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v19, v15, v16, v17);
    if ( v12 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 144LL))(a1, (unsigned int)v5, v11);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1280LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v18,
          (int)v19[0]);
    }
    return 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v6 + 8) <= 0 )
      v7 = 0LL;
    else
      v7 = *(Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
    v8 = Microsoft::Bamo::BaseBamoConnection::TrackError(v7, a2);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8);
    return v9;
  }
}
