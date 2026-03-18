/*
 * XREFs of WmipDisableCollectOrEvent @ 0x1407D62A4
 * Callers:
 *     WmipDeleteMethod @ 0x1406C6CF0 (WmipDeleteMethod.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 *     WmipSendDisableRequest @ 0x1407D6314 (WmipSendDisableRequest.c)
 */

__int64 __fastcall WmipDisableCollectOrEvent(__int64 a1, int a2)
{
  int v3; // edx
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // ebx

  v3 = a2 - 2244924;
  if ( !v3 )
  {
    v4 = 0;
LABEL_3:
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    LOBYTE(v5) = v4;
    v6 = WmipSendDisableRequest(a1, v5);
    KeReleaseMutex(&WmipSMMutex, 0);
    return v6;
  }
  if ( v3 == 4 )
  {
    v4 = 1;
    goto LABEL_3;
  }
  return 3221225647LL;
}
