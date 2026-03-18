/*
 * XREFs of PopTraceNetRefreshTimerArmed @ 0x140992AE8
 * Callers:
 *     PopNetArmRefreshTimer @ 0x140996670 (PopNetArmRefreshTimer.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

void __fastcall PopTraceNetRefreshTimerArmed(unsigned __int64 a1)
{
  REGHANDLE v2; // rbx
  unsigned __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED) )
    {
      UserData.Reserved = 0;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v3;
      v3 = a1 / 0xA;
      EtwWrite(v2, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED, 0LL, 1u, &UserData);
    }
  }
}
