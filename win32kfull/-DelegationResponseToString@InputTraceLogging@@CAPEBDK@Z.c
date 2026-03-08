/*
 * XREFs of ?DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B6658
 * Callers:
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01437FA (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01B6C5C (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DelegationResponseToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Reassign";
  v2 = v1 - 1;
  if ( !v2 )
    return "Release";
  if ( v2 == 1 )
    return "Retain";
  return "UNKNOWN";
}
