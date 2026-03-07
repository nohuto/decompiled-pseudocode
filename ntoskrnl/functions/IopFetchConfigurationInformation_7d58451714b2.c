__int64 __fastcall IopFetchConfigurationInformation(
        PZZWSTR *SymbolicLinkList,
        GUID *InterfaceClassGuid,
        unsigned int a3,
        unsigned int *a4)
{
  PZZWSTR v4; // rdi
  unsigned int v8; // ebx
  PZZWSTR v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax
  WCHAR *v13; // rcx

  v4 = *SymbolicLinkList;
  v8 = 0;
  if ( IoGetDeviceInterfaces(InterfaceClassGuid, 0LL, 0, SymbolicLinkList) < 0 )
  {
    if ( v4 )
      *v4 = 0;
    return 3221225473LL;
  }
  else
  {
    v9 = *SymbolicLinkList;
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    while ( (_DWORD)v10 )
    {
      ++v8;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
      v13 = &v9[v12];
      v10 = -1LL;
      v9 = v13 + 1;
      do
        ++v10;
      while ( v9[v10] );
    }
    *a4 = v8;
    return v8 < a3 ? 0xC0000001 : 0;
  }
}
