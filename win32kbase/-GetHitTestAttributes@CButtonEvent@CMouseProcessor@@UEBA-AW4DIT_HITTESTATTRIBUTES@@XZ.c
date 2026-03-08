/*
 * XREFs of ?GetHitTestAttributes@CButtonEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C022D170
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetHitTestAttributes(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7431);
  result = 8LL;
  if ( *(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  return result;
}
