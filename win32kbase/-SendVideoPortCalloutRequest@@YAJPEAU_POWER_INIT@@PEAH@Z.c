/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C00D9D3C
 * Callers:
 *     VideoPortCallout @ 0x1C00D9A60 (VideoPortCallout.c)
 * Callees:
 *     InitCreateSystemThreadsMsg @ 0x1C00C7FC0 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  int SystemThreadsMsg; // eax
  _DWORD v6[240]; // [rsp+20h] [rbp-3D8h] BYREF

  memset(v6, 0, 0x3B8uLL);
  SystemThreadsMsg = InitCreateSystemThreadsMsg(v6, 4u, (__int64)a1);
  *a2 = SystemThreadsMsg;
  if ( !SystemThreadsMsg )
    return 3221225495LL;
  LOWORD(v6[1]) |= 3u;
  return LpcRequestPort(CsrApiPort, v6);
}
