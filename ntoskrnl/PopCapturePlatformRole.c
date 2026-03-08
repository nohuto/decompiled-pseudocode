/*
 * XREFs of PopCapturePlatformRole @ 0x140796DC4
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopConfigureHeteroPolicies @ 0x1408273AC (PopConfigureHeteroPolicies.c)
 *     PopDripsWatchdogInitializeActions @ 0x140B936AC (PopDripsWatchdogInitializeActions.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = (unsigned int)PopPlatformRole;
  v1 = 0;
  if ( !PopPlatformRole )
  {
    LOBYTE(v1) = dword_140C3CB50 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&PopPlatformRole, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
