/*
 * XREFs of PpmIdleUpdateSelectionStatistics @ 0x1405832E8
 * Callers:
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmIdleUpdateSelectionStatistics(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  if ( a1 )
  {
    if ( (a1 & 0x80000000) != 0 )
    {
      if ( (unsigned int)a1 > 0x8000000C )
      {
        if ( (_DWORD)a1 != -2147483634 )
          return;
        v2 = 15;
      }
      else
      {
        v2 = a1 - 2147483646;
      }
    }
    else if ( (a1 & 0x100000000LL) != 0 )
    {
      v3 = *(_QWORD *)(a2 + 128);
      v2 = 2;
      if ( v3 )
        ++*(_QWORD *)(((unsigned __int64)(((unsigned int)a1 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v3 + 32) + 24);
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
  ++*(_QWORD *)(a2 + 8LL * v2);
}
