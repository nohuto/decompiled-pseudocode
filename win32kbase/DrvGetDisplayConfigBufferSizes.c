__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 DxgkWin32kInterface; // rax
  bool v10; // di
  _DWORD *v11; // rax

  v3 = a1;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    if ( (v3 & 7) == 4 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
      v10 = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
      if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        v11 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v11 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v11 == 3 )
          goto LABEL_11;
      }
      if ( v10 )
LABEL_11:
        v3 = v3 & 0xEFFFFFF8 | 0x10000002;
    }
    v6 = DxDdGetDxgkWin32kInterface(v5, v4);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v6 + 208))(v3, a2);
  }
  else
  {
    v7 = -1073741637;
  }
  WdLogSingleEntry1(4LL, v7);
  return (unsigned int)v7;
}
