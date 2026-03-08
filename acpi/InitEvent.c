/*
 * XREFs of InitEvent @ 0x1C005093C
 * Callers:
 *     Event @ 0x1C0050550 (Event.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 */

__int64 __fastcall InitEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx

  v5 = 0;
  *(_WORD *)(a3 + 66) = 7;
  *(_DWORD *)(a3 + 88) = 32;
  v6 = (_QWORD *)HeapAlloc(a2, 1314276680, 0x20u);
  *(_QWORD *)(a3 + 96) = v6;
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, *(unsigned int *)(a3 + 88));
    KeInitializeSpinLock(v7 + 3);
    v7[2] = v7 + 1;
    v7[1] = v7 + 1;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    PrintDebugMessage(65, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v5;
}
