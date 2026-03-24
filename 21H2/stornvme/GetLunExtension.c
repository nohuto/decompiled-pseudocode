/*
 * XREFs of GetLunExtension @ 0x1C0004630
 * Callers:
 *     NVMeMapError @ 0x1C00010FC (NVMeMapError.c)
 *     ProcessNvmeHealthInfoLog @ 0x1C0004590 (ProcessNvmeHealthInfoLog.c)
 *     NVMeAdminCommandErrorLog @ 0x1C0006790 (NVMeAdminCommandErrorLog.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001A52C (NVMeLogTelemetryWaitForCmdComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v4; // r8d
  __int64 *i; // rcx

  if ( a2 == -1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 208);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  for ( i = (__int64 *)(a1 + 1736); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_DWORD *)(result + 16) == a2 )
        break;
    }
    if ( ++v4 >= v3 )
      return 0LL;
  }
  return result;
}
