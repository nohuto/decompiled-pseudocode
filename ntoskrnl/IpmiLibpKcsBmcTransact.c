/*
 * XREFs of IpmiLibpKcsBmcTransact @ 0x140675A94
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x140675E00 (IpmiLibpKcsRequestAndReceive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IpmiLibpKcsHandleError @ 0x140675B3C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140675C88 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140675EF8 (IpmiLibpKcsSendRequestToBMC.c)
 */

__int64 __fastcall IpmiLibpKcsBmcTransact(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v6; // rcx
  int v7; // edi
  _WORD *v8; // r8

  v3 = *a2;
  if ( *a2 >= 0x100u )
    v3 = 256;
  v7 = IpmiLibpKcsSendRequestToBMC(a1, (char *)a2 + 5, v3, a3);
  if ( !v7 )
  {
    v8 = a2 + 1;
    if ( a2[1] > 0x100u )
      *v8 = 256;
    v7 = IpmiLibpKcsReceiveResponseFromBmc(v6, (char *)a2 + 261, v8, a3);
  }
  if ( v7 < 0 )
  {
    v7 = IpmiLibpKcsHandleError(v6, a3);
    if ( v7 < 0 )
    {
      if ( qword_140C2C7C8 )
        qword_140C2C7C8(qword_140C2C7D8);
    }
  }
  return (unsigned int)v7;
}
