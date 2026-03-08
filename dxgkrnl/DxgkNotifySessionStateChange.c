/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1C01DDA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1?PsDetachSiloFromCurrentThread@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0016F80 (--1-$unique_storage@U-$resource_policy@PEAU_EJOB@@$$A6AXPEAU1@@Z$1-PsDetachSiloFromCurrentThread.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01D9338 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DpiSessionCreateCallback @ 0x1C01DDB08 (DpiSessionCreateCallback.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01DDB7C (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C0350714 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

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
