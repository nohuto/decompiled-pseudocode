/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C00DC928
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C00DC840 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  _QWORD *v5; // rcx
  __int16 v6; // r9
  _QWORD *i; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r10
  _QWORD *v14; // rax
  __int64 v15; // r8

  if ( a1 )
  {
    if ( !(unsigned int)IsVisible((__int64)a1) )
      return 0LL;
    i = (_QWORD *)*((_QWORD *)a3 + 1);
    if ( (*((_DWORD *)a3 + 12) & 2) != 0 && (v6 & 0x400) != 0 )
      return 0LL;
    v8 = (_QWORD *)i[13];
    if ( v5 != v8 )
    {
      v9 = v5 + 13;
      v10 = v5;
      v11 = (_QWORD *)v5[13];
      v12 = v11;
      while ( v8 != v11 )
      {
        v5 = v11;
        if ( !v11 )
          return 0LL;
        v11 = (_QWORD *)v11[13];
      }
      if ( v5 != i )
      {
        v10 = v5;
        while ( v5 != i )
        {
          v5 = (_QWORD *)v5[11];
          if ( !v5 )
            goto LABEL_17;
        }
        return 0LL;
      }
      if ( (*((_DWORD *)a3 + 12) & 2) == 0 )
        return 0LL;
      if ( v10 != i )
      {
        if ( i != v12 )
        {
          v14 = (_QWORD *)*v9;
          do
          {
            v10 = v14;
            v14 = (_QWORD *)v14[13];
          }
          while ( i != v14 );
        }
        for ( i = (_QWORD *)i[14]; i && i != v10; i = (_QWORD *)i[11] )
        {
          v15 = i[5];
          if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0
            && !*(_QWORD *)(v15 + 168)
            && (*(_BYTE *)(v15 + 26) & 8) == 0
            && !SubtractRect((__int64)a2, &a2->left, (int *)(v15 + 88)) )
          {
            return 0LL;
          }
LABEL_17:
          ;
        }
      }
    }
  }
  return IntersectRect(a2, &a2->left, (int *)a3 + 6);
}
