/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C01F7140
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  char v8; // cl
  int result; // eax

  v4 = *(__int16 *)(a1 + 32);
  if ( !*(_WORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7527);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = (((v4 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( v6 != 1 )
    v7 = ((v4 >> 15) & 0xFFFFFFFE) + 3;
  v8 = *(_BYTE *)(SGDGetUserSessionState(((v4 >> 15) & 0xFFFFFFFE) + 3, a2, a3, a4) + 13996);
  result = v7 | 0x100;
  if ( (v8 & 4) == 0 )
    return v7;
  return result;
}
