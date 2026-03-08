/*
 * XREFs of ParseString @ 0x1C005C440
 * Callers:
 *     ParsePackage @ 0x1C0058160 (ParsePackage.c)
 *     ParseArg @ 0x1C005A46C (ParseArg.c)
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 */

__int64 __fastcall ParseString(__int64 a1, const char **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  const char *v9; // rdx
  void *v10; // rax

  v4 = 0;
  if ( **a2 == 13 )
  {
    ++*a2;
    *(_WORD *)(a3 + 2) = 2;
    v8 = -1LL;
    v9 = *a2;
    do
      ++v8;
    while ( v9[v8] );
    *(_DWORD *)(a3 + 24) = v8 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"", *a2);
    v10 = (void *)HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(a3 + 24));
    *(_QWORD *)(a3 + 32) = v10;
    if ( v10 )
    {
      memmove(v10, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(139, 0LL, 0LL, 0LL, 0LL);
      v4 = -1073741670;
    }
    *a2 += *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(-1072431103);
      AcpiDiagTraceAmlError(a1, -1072431103);
      PrintDebugMessage(140, (const void *)*(unsigned __int8 *)*a2, *a2, 0LL, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
