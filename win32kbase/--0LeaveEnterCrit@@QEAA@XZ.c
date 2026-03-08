/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0089B08
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004D20 (RIMAddInjectionDeviceOfType.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  return this;
}
