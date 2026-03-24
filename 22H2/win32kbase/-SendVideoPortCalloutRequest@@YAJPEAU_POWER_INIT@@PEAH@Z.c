/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C0118A8C
 * Callers:
 *     VideoPortCallout @ 0x1C011A560 (VideoPortCallout.c)
 * Callees:
 *     InitCreateSystemThreadsMsg @ 0x1C00B5150 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
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
