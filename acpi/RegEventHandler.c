/*
 * XREFs of RegEventHandler @ 0x1C004CC0C
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0048A7C (AMLIRegEventHandler.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(3222536206LL);
    AcpiDiagTraceAmlError(0LL, -1072431090);
    PrintDebugMessage(165, 0, 0, 0, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
