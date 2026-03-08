/*
 * XREFs of KiAssignFixedSubNodes @ 0x140B927DC
 * Callers:
 *     KiPerformAutomaticGroupConfiguration @ 0x140B929BC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAssignFixedSubNodes(__int64 *a1, __int64 a2, unsigned __int16 a3, char a4, _DWORD *a5, _WORD *a6)
{
  __int64 v7; // r12
  __int64 *v8; // r15
  _WORD *v9; // rdx
  _DWORD *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int16 i; // r8
  __int64 v15; // rax
  char v16; // cl
  unsigned int v17; // edi
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // r9
  unsigned __int16 *v20; // rbx
  _DWORD *v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rax

  v7 = (unsigned __int16)KiSubNodeCount;
  v8 = a1;
  v9 = a6;
  v10 = a5;
  v11 = 32LL;
  do
  {
    *v10++ = KiMaximumGroupSize;
    *v9++ = 0;
    --v11;
  }
  while ( v11 );
  if ( (_WORD)v7 )
  {
    v12 = v7;
    do
    {
      *(_WORD *)(*a1 + 6) = -1;
      v13 = *a1++;
      *(_BYTE *)(v13 + 5) &= ~1u;
      --v12;
    }
    while ( v12 );
    for ( i = 0; i < (unsigned __int16)v7; ++i )
    {
      v15 = v8[i];
      v16 = *(_BYTE *)(v15 + 5);
      if ( (v16 & 4) != 0 )
      {
        if ( i >= a3 )
        {
          v17 = KiMaximumGroupSize;
          v18 = 32;
          v19 = 0;
          if ( !a3 )
            goto LABEL_18;
          v20 = a6;
          v21 = a5;
          do
          {
            if ( *v21 >= (unsigned int)*(unsigned __int8 *)(v15 + 4) && *v20 < v17 )
            {
              v17 = *v20;
              v18 = v19;
            }
            ++v19;
            ++v21;
            ++v20;
          }
          while ( v19 < a3 );
          if ( v18 == 32 )
          {
LABEL_18:
            if ( !a4 )
              return 0;
            if ( !*(_WORD *)v15 )
            {
              if ( (v16 & 1) == 0 )
              {
                do
                  --i;
                while ( (*(_BYTE *)(v8[i] + 5) & 1) == 0 );
              }
              v22 = v8[i];
              v23 = *(unsigned __int16 *)(v22 + 6);
              *(_BYTE *)(v22 + 5) &= ~1u;
              *(_WORD *)(v22 + 6) = -1;
              --a6[v23];
              a5[(unsigned int)v23] += *(unsigned __int8 *)(v22 + 4);
            }
          }
          else
          {
            *(_WORD *)(v15 + 6) = v18;
            *(_BYTE *)(v15 + 5) = v16 | 1;
            ++a6[v18];
            a5[v18] -= *(unsigned __int8 *)(v15 + 4);
          }
        }
        else
        {
          *(_WORD *)(v15 + 6) = i;
          *(_BYTE *)(v15 + 5) = v16 | 1;
          ++a6[i];
          a5[i] -= *(unsigned __int8 *)(v8[i] + 4);
        }
      }
    }
  }
  return 1;
}
