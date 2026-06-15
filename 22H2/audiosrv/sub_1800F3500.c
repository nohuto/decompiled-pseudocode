/*
 * XREFs of sub_1800F3500 @ 0x1800F3500
 * Callers:
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F3500(__int64 a1, int *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax

  if ( (_DWORD)a3 )
  {
    v5 = a5 + 16;
    a3 = (unsigned int)a3;
    if ( a4 <= 0x64 )
    {
      do
      {
        v7 = *a2;
        a2 += 131;
        *(_DWORD *)(v5 - 16) = v7;
        *(_QWORD *)(v5 - 8) = (unsigned int)*(a2 - 130);
        *(_DWORD *)v5 = a4;
        *(_WORD *)(v5 + 4) = 0;
        v5 += 24LL;
        --a3;
      }
      while ( a3 );
    }
    else
    {
      do
      {
        v6 = *a2;
        a2 += 131;
        *(_DWORD *)(v5 - 16) = v6;
        *(_QWORD *)(v5 - 8) = (unsigned int)*(a2 - 130);
        *(_DWORD *)v5 = 100;
        *(_WORD *)(v5 + 4) = 0;
        v5 += 24LL;
        --a3;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
