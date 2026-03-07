__int64 __fastcall PspComputeExecutionStateOld(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 1060) != 0 ? 2 : 0;
  result = v1 | 1;
  if ( !*(_DWORD *)(a1 + 1048) )
    return v1;
  return result;
}
