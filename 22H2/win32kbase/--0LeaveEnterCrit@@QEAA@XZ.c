/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00850DC
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  return this;
}
