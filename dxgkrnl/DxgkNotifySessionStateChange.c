__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Session; // esi
  DXGSESSIONMGR *v3; // rbp
  __int64 HostSilo; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  Session = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  HostSilo = PsGetHostSilo();
  v16 = PsAttachSiloToCurrentThread(HostSilo);
  v8 = 1;
  if ( a1 )
  {
    v8 = 2;
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(v3, v5, v6, v7);
    }
    else
    {
      v8 = 3;
      if ( a1 != 2 )
      {
        if ( a1 == 3 )
        {
          v8 = 7;
        }
        else
        {
          v8 = 0;
          if ( a1 == 4 )
            v8 = 8;
        }
      }
    }
  }
  else
  {
    Session = DXGSESSIONMGR::CreateSession(v3);
    if ( Session >= 0 )
      Session = DpiSessionCreateCallback();
  }
  DxgkLogCodePointPacket(0x6Du, v8, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>(&v16);
  if ( Session >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18502) )
      *((_BYTE *)SessionDataForSpecifiedSession + 18504) = DxgkpQueryHostDriverStoreAvailability();
  }
  return (unsigned int)Session;
}
