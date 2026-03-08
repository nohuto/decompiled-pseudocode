/*
 * XREFs of ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CB540
 * Callers:
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C00F00FC (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CC1E8 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::CompletionReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "DeviceInput";
  v1 = a1 - 1;
  if ( !v1 )
    return "ButtonOnlyFrame";
  v2 = v1 - 1;
  if ( !v2 )
    return "EndStaleContacts";
  v3 = v2 - 1;
  if ( !v3 )
    return "EndActiveContacts";
  v4 = v3 - 1;
  if ( !v4 )
    return "SuppressActiveContacts";
  if ( v4 == 1 )
    return "SuppressLowerRanked";
  return "UNKNOWN";
}
