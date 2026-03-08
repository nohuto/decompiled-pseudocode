/*
 * XREFs of ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0083898
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0083098 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C00C0834 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00D26F0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00C0CDC (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C00CA500 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::DrainPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  int v2; // eax
  int v3; // eax
  struct CoreMessagingK::ClientPortInfo **v4; // rax
  __int64 MessageAttribute; // rax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v8[48]; // [rsp+58h] [rbp-B0h] BYREF
  _PORT_MESSAGE v9; // [rsp+88h] [rbp-80h] BYREF

  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v7 = 512LL;
        v6 = 40LL;
        v2 = AlpcInitializeMessageAttribute(0x20000000LL, v8, 40LL, &v6);
        if ( v2 < 0 )
          CoreMessagingK::Runtime::BugCheck(1537LL, v2, 0LL);
        v3 = ZwAlpcSendWaitReceivePort(*((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, &v9, &v7, v8, 0LL);
        if ( v3 != -1073741789 )
          break;
LABEL_15:
        MessageAttribute = AlpcGetMessageAttribute(v8, 0x20000000LL);
        ZwAlpcCancelMessage(*((_QWORD *)a1 + 1), 0LL, MessageAttribute);
      }
    }
    while ( v3 == -1073741769 || v3 == -1073740032 || v3 == -1073740031 );
    if ( v3 )
      break;
    if ( LOBYTE(v9.u2.ZeroInit) == 5 || LOBYTE(v9.u2.ZeroInit) == 6 )
    {
      v4 = (struct CoreMessagingK::ClientPortInfo **)AlpcGetMessageAttribute(v8, 0x20000000LL);
      CoreMessagingK::ServerPorts::HandleClientDisconnect(a1, *v4);
    }
    else if ( LOBYTE(v9.u2.ZeroInit) == 10 )
    {
      CoreMessagingK::ServerPorts::HandleConnectionRequest(a1, &v9);
    }
    else if ( (v9.u2.s2.Type & 0x2000) != 0 )
    {
      goto LABEL_15;
    }
  }
  if ( v3 != 258 )
    CoreMessagingK::Runtime::BugCheck(1538LL, v3, 0LL);
}
