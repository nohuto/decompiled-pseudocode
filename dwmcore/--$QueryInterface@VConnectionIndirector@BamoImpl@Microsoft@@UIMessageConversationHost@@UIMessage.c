__int64 __fastcall Microsoft::BamoImpl::Util::QueryInterface<Microsoft::BamoImpl::ConnectionIndirector,IMessageConversationHost,IMessageConversationBouncer>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_14;
  v5 = *a2 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
  if ( *a2 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
  if ( v5 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *a2 - *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1;
      if ( *a2 == *(_QWORD *)&GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data1 )
        v7 = a2[1] - *(_QWORD *)GUID_8a2fc306_f225_47dd_a4a4_6c28646de4a3.Data4;
      if ( v7 )
      {
        v8 = 0LL;
        goto LABEL_16;
      }
    }
    v9 = a1 + 24;
  }
  else
  {
LABEL_14:
    v9 = a1 + 16;
  }
  v8 = v9 & -(__int64)(a1 != 0);
LABEL_16:
  *a3 = v8;
  if ( !v8 )
    return 2147500034LL;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return 0LL;
}
