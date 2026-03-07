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
