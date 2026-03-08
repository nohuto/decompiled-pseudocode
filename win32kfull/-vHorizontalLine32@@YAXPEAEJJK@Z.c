/*
 * XREFs of ?vHorizontalLine32@@YAXPEAEJJK@Z @ 0x1C0151B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine32(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  unsigned __int8 *v4; // r10
  unsigned __int64 v5; // r8

  if ( a3 != a2 )
  {
    v4 = &a1[4 * a2];
    v5 = (unsigned __int64)(4LL * a3 - 4LL * a2) >> 2;
    if ( v5 )
    {
      if ( ((unsigned __int8)v4 & 4) != 0 )
      {
        *(_DWORD *)v4 = a4;
        if ( !--v5 )
          return;
        v4 += 4;
      }
      memset64(v4, a4 | ((unsigned __int64)a4 << 32), v5 >> 1);
      if ( (v5 & 1) != 0 )
        *(_DWORD *)&v4[4 * v5 - 4] = a4;
    }
  }
}
