__int64 __fastcall RIMEnsureUsageWithinLogicalBoundary(__int64 a1)
{
  int v1; // r9d
  int v3; // r10d
  int v4; // r8d
  int v5; // r8d
  __int64 result; // rax
  int v7; // ecx

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 < 0 )
  {
    v3 = *(_DWORD *)(a1 + 52);
    v4 = 1 << (*(_WORD *)(a1 + 56) - 1);
    if ( (v4 & v3) != 0 )
      v5 = v3 | -v4;
    else
      v5 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v5;
  }
  result = *(unsigned int *)(a1 + 52);
  if ( (int)result < v1 )
  {
    *(_DWORD *)(a1 + 52) = v1;
    result = (unsigned int)v1;
  }
  v7 = *(_DWORD *)(a1 + 36);
  if ( (int)result > v7 )
    *(_DWORD *)(a1 + 52) = v7;
  return result;
}
