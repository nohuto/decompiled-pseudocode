/*
 * XREFs of PpmIdleUpdateSelectionStatistics @ 0x140567308
 * Callers:
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateSelectionStatistics(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    result = 0x80000000LL;
    if ( (a1 & 0x80000000) != 0 )
    {
      if ( (unsigned int)a1 > 0x8000000C )
        return result;
      v2 = a1 - 2147483646;
    }
    else if ( (a1 & 0x100000000LL) != 0 )
    {
      v4 = *(_QWORD *)(a2 + 120);
      v2 = 2;
      if ( v4 )
        ++*(_QWORD *)(((unsigned __int64)(((unsigned int)a1 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v4 + 32) + 24);
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  result = v2;
  ++*(_QWORD *)(a2 + 8LL * v2);
  return result;
}
