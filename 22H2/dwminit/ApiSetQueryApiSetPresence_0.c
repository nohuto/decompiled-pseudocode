/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180006290
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x1800059A8 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x180005A88 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180005B68 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180005CD4 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
