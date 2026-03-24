/*
 * XREFs of RegEventHandler @ 0x1C002C390
 * Callers:
 *     AMLIRegEventHandler @ 0x1C002C19C (AMLIRegEventHandler.c)
 * Callees:
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(-1072431090);
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
