__int64 __fastcall bIsCompatible(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( (*(_WORD *)(a3 + 100) || *(_QWORD *)(a3 + 24)) && *(_QWORD *)(a3 + 48) != a4 )
    return 0;
  if ( a2 )
  {
    *a1 = a2;
  }
  else
  {
    if ( a5 && *(_DWORD *)(a3 + 96) != *(_DWORD *)(a4 + 2076) )
      return 0;
    if ( (*(_DWORD *)(a4 + 2140) & 0x100) != 0 )
      *a1 = 0LL;
    else
      *a1 = *(_QWORD *)(a4 + 1776);
  }
  return v5;
}
