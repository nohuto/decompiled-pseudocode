/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C01C0260
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edi
  unsigned int v4; // edx
  int result; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(__int16 *)(v1 + 30);
  if ( !*(_WORD *)(v1 + 30) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7213);
  v4 = (((v3 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v4 = ((v3 >> 15) & 0xFFFFFFFE) + 3;
  result = v4 | 0x100;
  if ( (BYTE4(gafAsyncKeyState) & 4) == 0 )
    return v4;
  return result;
}
