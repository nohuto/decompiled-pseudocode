__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // esi
  char v10; // r14
  __int64 v11; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // eax
  Microsoft::BamoImpl::BamoImplObject *v17[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[7] - a1[6]) >> 2) )
  {
    v9 = 0;
    v10 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v11 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v11 + 8) <= 0 )
      v12 = 0LL;
    else
      v12 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v11 + 16);
    Microsoft::Bamo::Lock::Lock(v17, v12);
    if ( v10 )
      v9 = *(_DWORD *)(a1[6] + 4 * v3);
    memmove_0((void *)(a1[6] + 4 * v3), (const void *)(a1[6] + 4 * v3 + 4), a1[7] - (a1[6] + 4 * v3 + 4));
    a1[7] -= 4LL;
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v17, v13, v14, v15);
    if ( v10 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 136LL))(a1, (unsigned int)v3, v9);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1233LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v16,
          (int)v17[0]);
    }
    return 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v4 + 8) <= 0 )
      v5 = 0LL;
    else
      v5 = *(Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
    v6 = Microsoft::Bamo::BaseBamoConnection::TrackError(v5, a2);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6);
    return v7;
  }
}
