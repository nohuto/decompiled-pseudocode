/*
 * XREFs of GetLunExtension @ 0x1C001B7C4
 * Callers:
 *     NVMeAdminCommandErrorLog @ 0x1C001B804 (NVMeAdminCommandErrorLog.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001FF44 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C0020118 (NVMeMapError.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C0024B24 (ProcessNvmeHealthInfoLog.c)
 *     ProcessNvmeReservationNotification @ 0x1C0024E54 (ProcessNvmeReservationNotification.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024F48 (ProcessNvmeSanitizeStatus.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *i; // rcx
  __int64 result; // rax

  if ( a2 == -1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 232);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = (__int64 *)(a1 + 1952); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_DWORD *)(result + 16) == a2 )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
