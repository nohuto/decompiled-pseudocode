/*
 * XREFs of PopDiagTraceClearDeepSleepConstraint @ 0x14028E6CC
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceClearDeepSleepConstraint(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CLEAR_CONSTRAINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &POP_ETW_DEEP_SLEEP_CLEAR_CONSTRAINT, 0LL, 1u, &UserData);
    }
  }
}
