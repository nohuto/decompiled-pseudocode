__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = a1[3];
  v3 = a1[1];
  v4 = ((unsigned __int64)(*(_DWORD *)(v3 + 16 * v2) & 0xFFF) + *(_QWORD *)(v3 + 16 * v2 + 8) + 4095LL) >> 12;
  result = a1[4] + 1LL;
  a1[4] = result;
  if ( result == v4 )
  {
    a1[4] = 0LL;
    v6 = v2 + 1;
    v7 = a1[2];
    a1[3] = v6;
    if ( v6 < v7 )
    {
      result = 2 * v6;
      if ( !*(_QWORD *)(v3 + 16 * v6 + 8) )
        v6 = v7;
      a1[3] = v6;
    }
  }
  return result;
}
