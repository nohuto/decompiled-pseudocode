/*
 * XREFs of HalpInterruptUpdateLinesPostSwap @ 0x140A94E8C
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A94CE0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptUpdateLinesPostSwap(__int64 a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r10
  int v14; // ebp
  int *v15; // rcx
  int v16; // r9d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23; // zf

  v5 = 0;
  if ( *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) > 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *(_DWORD *)(v11 + v12 + 24);
      v15 = (int *)(v11 + v12 + 32);
      if ( v14 == 4 )
      {
        if ( *v15 == a2 )
          *v15 = a3;
      }
      else if ( v14 == 5 && *a4 == 5 )
      {
        v16 = a4[2];
        if ( (v16 & *v15) != 0 )
        {
          v17 = *v15 & ~v16;
          *v15 = v17;
          if ( *a5 == 5 )
            *v15 = a5[2] | v17;
        }
      }
      if ( *a4 == 6 && v14 == 6 )
      {
        v18 = a4[2];
        if ( *(_BYTE *)(v10 + v13 + 2) )
        {
          if ( *(_DWORD *)(v10 + v13 + 4) == v18 && (*(_DWORD *)(v10 + v13 + 8) & a4[3]) != 0 )
          {
            *(_DWORD *)(v11 + v12 + 36) |= a5[3];
            v22 = ~a4[3];
            v23 = (v22 & *(_DWORD *)(v10 + v13 + 8)) == 0;
            *(_DWORD *)(v10 + v13 + 8) &= v22;
            if ( v23 )
              *(_BYTE *)(v10 + v13 + 2) = 0;
          }
        }
        else if ( v18 == *v15 )
        {
          if ( v18 == a5[2] )
          {
            v19 = *(_DWORD *)(v11 + v12 + 36) & ~a4[3];
            *(_DWORD *)(v11 + v12 + 36) = v19;
            v20 = a5[3] | v19;
          }
          else
          {
            *(_BYTE *)(v10 + v13 + 2) = 1;
            *(_DWORD *)(v10 + v13 + 4) = *v15;
            v21 = *(_DWORD *)(v11 + v12 + 36) & ~a4[3];
            *(_DWORD *)(v10 + v13 + 8) = v21;
            *(_BYTE *)(v10 + v13 + 2) &= -(v21 != 0);
            *v15 = a5[2];
            v20 = a5[3];
          }
          *(_DWORD *)(v11 + v12 + 36) = v20;
        }
      }
      ++v5;
      v11 += 56LL;
      v10 += 16LL;
    }
    while ( v5 < *(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 20) );
  }
  return 0LL;
}
