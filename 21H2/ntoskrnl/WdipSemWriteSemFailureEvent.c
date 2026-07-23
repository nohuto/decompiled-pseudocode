/*
 * XREFs of WdipSemWriteSemFailureEvent @ 0x140930910
 * Callers:
 *     WdipSemDisableScenario @ 0x140789510 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14078979C (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140788BBC (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemWriteSemFailureEvent(
        const EVENT_DESCRIPTOR *a1,
        ULONGLONG a2,
        __int16 a3,
        const GUID *a4,
        char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-40h] BYREF
  __int16 *v7; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+48h] [rbp-28h]
  char *v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h]
  __int16 v11; // [rsp+90h] [rbp+20h] BYREF

  v11 = a3;
  if ( !a1 || !a2 || !a4 )
    return -1073741811;
  v6.Ptr = a2;
  *(_QWORD *)&v6.Size = 16LL;
  v7 = &v11;
  v8 = 2LL;
  v9 = &a5;
  v10 = 4LL;
  return WdipSemWriteEvent((__int64)a1, a1, a4, 3u, &v6);
}
