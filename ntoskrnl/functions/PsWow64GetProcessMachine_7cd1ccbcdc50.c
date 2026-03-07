__int16 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int16 result; // ax

  if ( !*(_QWORD *)(a1 + 1408) )
    return -31132;
  result = *(_WORD *)(a1 + 2412);
  if ( !result )
    return -31132;
  return result;
}
