__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // di
  __int64 DxgkWin32kInterface; // rax
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD, unsigned int *, __int64, _DWORD *); // rax
  int v15; // ebx
  _DWORD *v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // r8

  v5 = a1;
  WdLogSingleEntry1(4LL, a1);
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v15 = -1073741637;
    goto LABEL_9;
  }
  v10 = 0;
  if ( (v5 & 7) == 4 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
    v10 = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
      if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
        v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
      if ( *v17 == 3 )
      {
        v10 = 1;
        goto LABEL_15;
      }
    }
    if ( v10 )
LABEL_15:
      v5 = v5 & 0xEFFFFFF8 | 0x10000002;
  }
  v12 = DxDdGetDxgkWin32kInterface(v9, v8);
  v13 = 0LL;
  v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, __int64, _DWORD *))(v12 + 216);
  if ( !v10 )
    v13 = a4;
  v15 = v14(v5 & 0xFFFFFFEF, v5 & 0x10, a2, a3, v13);
  if ( v15 >= 0 && v10 && a4 )
  {
    v18 = *a2;
    if ( *a2 > 1 )
    {
      v19 = 1;
      do
      {
        v20 = 216LL * v19;
        if ( *(_DWORD *)(a3 + 116) != *(_DWORD *)(v20 + a3 + 116) )
          break;
        if ( *(_DWORD *)(a3 + 120) != *(_DWORD *)(v20 + a3 + 120) )
          break;
        ++v19;
      }
      while ( v19 < v18 );
      *a4 = v19 < v18 ? 4 : 2;
    }
    else
    {
      *a4 = 1;
    }
  }
LABEL_9:
  WdLogSingleEntry1(4LL, v15);
  return (unsigned int)v15;
}
