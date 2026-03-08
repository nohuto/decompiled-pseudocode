/*
 * XREFs of ObpLockHandleDataBaseEntry @ 0x1407D90B0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpInsertHandleCount @ 0x1407D9228 (ObpInsertHandleCount.c)
 */

__int64 __fastcall ObpLockHandleDataBaseEntry(__int64 a1, int *a2, unsigned int *a3)
{
  int *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  int *v9; // rcx
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // eax
  int v14; // r11d
  _DWORD *v15; // r8
  __int64 inserted; // r9
  unsigned int v17; // r14d
  int v18; // ecx

  v5 = a2;
  v6 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  v7 = a1 - v6;
  v8 = (*(_BYTE *)(a1 + 27) & 0x40) == 0;
  v9 = *(int **)(a1 - v6);
  if ( v8 )
  {
    v14 = *v9;
    v15 = v9 + 2;
    inserted = 0LL;
    v17 = 0;
    if ( !*v9 )
      goto LABEL_29;
    do
    {
      if ( *(int **)v15 == v5 )
      {
        v18 = *(unsigned __int8 *)(v7 + 11);
        if ( (_BYTE)v18 != 0xFF )
        {
          ++*((_BYTE *)v15 + 11);
          *a3 = v17 + HIBYTE(*(_DWORD *)(v7 + 8)) + (*(_DWORD *)(v7 + 8) & 0xFFFFFF);
          return 0LL;
        }
        a2 = (int *)(*(_DWORD *)(v7 + 8) & 0xFFFFFF);
        inserted = 0LL;
        v17 += (_DWORD)a2 + v18;
      }
      else if ( !*(_QWORD *)v15 )
      {
        inserted = (__int64)v15;
      }
      v15 += 4;
      --v14;
    }
    while ( v14 );
    if ( inserted )
      goto LABEL_16;
    if ( v17 < 0xFFFF01 )
    {
LABEL_29:
      inserted = ObpInsertHandleCount(a1, a2, v15, 0LL);
      if ( inserted )
      {
LABEL_16:
        *(_DWORD *)(inserted + 8) &= 0xFF000000;
        v13 = v17 + 1;
        *(_BYTE *)(inserted + 11) = 1;
        *(_QWORD *)inserted = v5;
        goto LABEL_9;
      }
    }
  }
  else
  {
    if ( !v9 )
    {
      *(_BYTE *)(v7 + 11) = 1;
      *(_DWORD *)(v7 + 8) &= 0xFF000000;
      *(_QWORD *)v7 = a2;
      *a3 = 1;
      return 0LL;
    }
    if ( v9 == a2 )
    {
      a2 = (int *)*(unsigned __int8 *)(v7 + 11);
      if ( (_BYTE)a2 != 0xFF )
      {
        *(_BYTE *)(v7 + 11) = (_BYTE)a2 + 1;
        *a3 = (*(_DWORD *)(v7 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v7 + 8));
        return 0LL;
      }
    }
    v11 = 0;
    if ( v9 != v5 || (v11 = (*(_DWORD *)(v7 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v7 + 8)), v11 < 0xFFFF01) )
    {
      v12 = ObpInsertHandleCount(a1, a2, a3, v6);
      if ( v12 )
      {
        *(_DWORD *)(v12 + 8) &= 0xFF000000;
        *(_BYTE *)(v12 + 11) = 1;
        *(_QWORD *)v12 = v5;
        v13 = v11 + 1;
LABEL_9:
        *a3 = v13;
        return 0LL;
      }
    }
  }
  return 3221225626LL;
}
