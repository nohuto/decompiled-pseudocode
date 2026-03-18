/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005A64C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  return this;
}
