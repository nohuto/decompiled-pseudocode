/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C012D620
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     AddPalmRejectionDelayZone @ 0x1C01ADCD4 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx

  EnterCrit(0, 1);
  v6 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCrit();
  return v6;
}
