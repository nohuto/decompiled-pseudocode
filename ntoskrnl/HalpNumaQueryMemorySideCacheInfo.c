/*
 * XREFs of HalpNumaQueryMemorySideCacheInfo @ 0x1408619D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x140931B9C (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaQueryMemorySideCacheInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r11
  unsigned int v6; // r10d
  int v8; // r14d
  int v9; // ebx
  int v10; // ebp
  int v11; // eax

  v4 = HalpHmaConfig;
  if ( HalpHmaConfig )
  {
    if ( a4 == 40 )
    {
      v8 = 0;
      v9 = *(_DWORD *)HalpHmaConfig - 1;
      v6 = -1073741275;
      if ( v9 >= 0 )
      {
        do
        {
          v10 = (v8 + v9) >> 1;
          v11 = HalpNumaCompareMemorySideCacheNodeAndLevel(
                  a1,
                  a2,
                  *(unsigned int *)(v4 + 40LL * v10 + 8),
                  *(unsigned int *)(v4 + 40LL * v10 + 28));
          if ( v11 >= 0 )
          {
            if ( v11 <= 0 )
            {
              v6 = 0;
              *(_OWORD *)a3 = *(_OWORD *)(v4 + 40LL * v10 + 8);
              *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 + 40LL * v10 + 24);
              *(_QWORD *)(a3 + 32) = *(_QWORD *)(v4 + 40LL * v10 + 40);
              return v6;
            }
            v8 = v10 + 1;
          }
          else
          {
            v9 = v10 - 1;
          }
        }
        while ( v8 <= v9 );
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741496;
  }
  return v6;
}
