/*
 * XREFs of sub_1800B90D4 @ 0x1800B90D4
 * Callers:
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 * Callees:
 *     sub_1800B8C50 @ 0x1800B8C50 (sub_1800B8C50.c)
 */

char __fastcall sub_1800B90D4(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  __int64 v4; // r10
  _DWORD *v5; // rbx
  __int64 v7; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  if ( v4 )
  {
    v7 = v4 + 80LL * *(unsigned __int16 *)(a1 + 34);
    if ( a3 < *(_DWORD *)(v7 + 4) )
    {
      if ( !a4 )
      {
LABEL_4:
        sub_1800B8C50(v7, a2);
        return 1;
      }
      v7 = 0LL;
      v9 = v4 + 80LL * *(unsigned __int16 *)(a1 + 32);
      if ( v4 != v9 )
      {
        do
        {
          if ( *(_DWORD *)(v4 + 8) == a4 )
          {
            v10 = *(_DWORD *)(v4 + 4);
            if ( v10 > a3 && (!v7 || v10 < *(_DWORD *)(v7 + 4)) )
              v7 = v4;
          }
          v4 += 80LL;
        }
        while ( v4 != v9 );
        if ( v7 )
        {
          a2 = v5;
          goto LABEL_4;
        }
      }
    }
  }
  return 0;
}
