/*
 * XREFs of ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C00CE73C
 * Callers:
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00CE710 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00CA5B8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00CE7F4 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00CE8B4 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::UninitializeServerPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  struct CoreMessagingK::ServerPortInfo *v1; // rax
  struct CoreMessagingK::ServerPortInfo *v3; // rcx
  __int64 v4; // rsi
  void *v5; // rcx
  __int64 v6; // rbx

  v1 = CoreMessagingK::ServerPorts::s_PortInfos;
  v3 = 0LL;
  while ( v1 )
  {
    if ( v1 == a1 )
    {
      if ( v3 )
        *((_QWORD *)v3 + 6) = *((_QWORD *)a1 + 6);
      else
        CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)a1 + 6);
      break;
    }
    v3 = v1;
    v1 = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)v1 + 6);
  }
  v4 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  if ( v4 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 24);
      ZwClose(*(HANDLE *)v4);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v4);
      v4 = v6;
    }
    while ( v6 );
  }
  if ( *((_QWORD *)a1 + 1) )
  {
    CoreMessagingK::RegistrarClient::UnregisterObject(*((const unsigned __int16 **)a1 + 4));
    CoreMessagingK::RegistrarClient::UnregisterPort((const struct _GUID *)a1 + 1);
    ZwClose(*((HANDLE *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  v5 = (void *)*((_QWORD *)a1 + 4);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4E534D43u);
    *((_QWORD *)a1 + 4) = 0LL;
  }
}
