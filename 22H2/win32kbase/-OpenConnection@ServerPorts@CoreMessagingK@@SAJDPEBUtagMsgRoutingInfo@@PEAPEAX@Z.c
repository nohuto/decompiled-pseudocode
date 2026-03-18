/*
 * XREFs of ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0069028
 * Callers:
 *     CoreMsgOpenConnection @ 0x1C0068F78 (CoreMsgOpenConnection.c)
 * Callees:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0068B1C (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C006915C (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C00696F0 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0235054 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

int __fastcall CoreMessagingK::ServerPorts::OpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  int result; // eax
  struct CoreMessagingK::ServerPortInfo *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct CoreMessagingK::CoreMsgObject *v10; // rcx
  int v11; // [rsp+20h] [rbp-48h] BYREF
  struct CoreMessagingK::CoreMsgObject *v12; // [rsp+28h] [rbp-40h] BYREF
  struct _GUID v13; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v11 = 0;
  v13 = 0LL;
  result = CoreMessagingK::RegistrarClient::PrepareConnection(a2, (enum MsgError *)&v11, &v13);
  if ( result >= 0 )
  {
    if ( v11 == 5 )
      return 0;
    if ( v11 == 10 )
      return -1073741670;
    if ( v11 )
      return -1073741823;
    v7 = CoreMessagingK::ServerPorts::s_PortInfos;
    if ( !CoreMessagingK::ServerPorts::s_PortInfos )
      goto LABEL_24;
    do
    {
      v8 = *(_QWORD *)&v13.Data1 - *((_QWORD *)v7 + 2);
      if ( *(_QWORD *)&v13.Data1 == *((_QWORD *)v7 + 2) )
        v8 = *(_QWORD *)v13.Data4 - *((_QWORD *)v7 + 3);
      if ( !v8 )
        break;
      v7 = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)v7 + 6);
    }
    while ( v7 );
    if ( !v7 )
LABEL_24:
      CoreMessagingK::Runtime::BugCheck(1536LL, 0LL, 0LL);
    CoreMessagingK::ServerPorts::DrainPort(v7);
    v9 = *((_QWORD *)v7 + 5);
    if ( !v9 )
      return -1073741823;
    do
    {
      if ( *(_DWORD *)(v9 + 8) == *(_DWORD *)a2 && *(_DWORD *)(v9 + 12) == *((_DWORD *)a2 + 1) )
        break;
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v9 );
    if ( !v9 )
      return -1073741823;
    result = CoreMessagingK::CoreMsgObject::Create(
               a1,
               (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ConnectionTargetInfo::s_Vtbl,
               &v12,
               a3);
    if ( result >= 0 )
    {
      v10 = v12;
      *((_QWORD *)v12 + 2) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v10 + 3) = v9;
      ++*(_DWORD *)(v9 + 16);
      return 0;
    }
  }
  return result;
}
