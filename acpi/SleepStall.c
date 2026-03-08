/*
 * XREFs of SleepStall @ 0x1C0006400
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C00514EC (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // ecx

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( *(_QWORD *)(v5 + 16) <= 0xFFuLL )
      {
        KeStallExecutionProcessor(*(_DWORD *)(v5 + 16));
        return v4;
      }
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 178;
      goto LABEL_10;
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 177;
LABEL_10:
      PrintDebugMessage(v7, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
      return v4;
    }
    if ( v6 )
    {
      v4 = SleepQueueRequest(a1, (unsigned int)v6);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
