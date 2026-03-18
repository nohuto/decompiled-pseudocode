/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C01FA7E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // edi
  unsigned int v6; // edx
  int result; // eax

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(__int16 *)(v3 + 30);
  if ( !*(_WORD *)(v3 + 30) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = (((v5 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v6 = ((v5 >> 15) & 0xFFFFFFFE) + 3;
  result = v6 | 0x100;
  if ( (BYTE4(gafAsyncKeyState) & 4) == 0 )
    return v6;
  return result;
}
