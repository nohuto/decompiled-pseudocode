/*
 * XREFs of ParseArgObj @ 0x1C005A5E0
 * Callers:
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     CopyObjData @ 0x1C004AEB4 (CopyObjData.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int v7; // r14d
  int v8; // r9d

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  v7 = v6;
  if ( (unsigned int)v6 < *(_DWORD *)(v5 + 60) )
  {
    CopyObjData(a2, *(_QWORD *)(v5 + 64) + 40 * v6);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=", v8);
      PrintObject(a2);
    }
  }
  else
  {
    LogError(-1072431099);
    AcpiDiagTraceAmlError(a1, -1072431099);
    PrintDebugMessage(122, (const void *)v7, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431099;
  }
  return v2;
}
