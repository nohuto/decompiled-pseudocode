/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C01EAD20
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1?PsDetachSiloFromCurrentThread@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00172F0 (--1-$unique_storage@U-$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1-PsDetachSiloFromCurrentThread.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01E6388 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C01EAE28 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01EAE9C (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C03551A4 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Session; // esi
  DXGSESSIONMGR *v3; // rbp
  __int64 HostSilo; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  Session = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  HostSilo = PsGetHostSilo();
  v10 = PsAttachSiloToCurrentThread(HostSilo);
  v5 = 1;
  if ( a1 )
  {
    v5 = 2;
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(v3);
    }
    else
    {
      v5 = 3;
      if ( a1 != 2 )
      {
        if ( a1 == 3 )
        {
          v5 = 7;
        }
        else
        {
          v5 = 0;
          if ( a1 == 4 )
            v5 = 8;
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
  DxgkLogCodePointPacket(0x6Du, v5, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>(&v10);
  if ( Session >= 0 && !a1 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18502) )
      *((_BYTE *)SessionDataForSpecifiedSession + 18504) = DxgkpQueryHostDriverStoreAvailability();
  }
  return (unsigned int)Session;
}
