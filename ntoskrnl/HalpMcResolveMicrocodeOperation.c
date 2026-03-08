/*
 * XREFs of HalpMcResolveMicrocodeOperation @ 0x1405197AC
 * Callers:
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall HalpMcResolveMicrocodeOperation(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !McMicrocodeOperation )
  {
    if ( a1 )
    {
      McMicrocodeOperation = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlFindExportedRoutineByName(
                                                                               *(_QWORD *)(a1 + 48),
                                                                               "McMicrocodeOperation");
      return McMicrocodeOperation == 0LL ? 0xC00000BB : 0;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
