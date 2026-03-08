/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x140993B60
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x140857318 (PopPowerButtonBugcheckConfigure.c)
 */

char __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  return PopPowerButtonBugcheckConfigure(a1, 1, &v2);
}
