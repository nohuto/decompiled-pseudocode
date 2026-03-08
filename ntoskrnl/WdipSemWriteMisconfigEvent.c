/*
 * XREFs of WdipSemWriteMisconfigEvent @ 0x1409DB5F8
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140833CFC (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemWriteMisconfigEvent(ULONGLONG a1, __int16 a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-40h] BYREF
  __int16 *v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  int *v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int16 v9; // [rsp+88h] [rbp+18h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  if ( !a1 )
    return -1073741811;
  v4.Ptr = a1;
  v5 = &v9;
  *(_QWORD *)&v4.Size = 16LL;
  v7 = &v10;
  v6 = 2LL;
  v8 = 4LL;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_INIT_MISCONFIG, 0LL, 3u, &v4);
}
