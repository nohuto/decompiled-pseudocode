/*
 * XREFs of ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C00B0B2C
 * Callers:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C00B0AD0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBitmapUpdateBits(struct _CIT_BITMAP *a1, unsigned int a2, int a3)
{
  int v3; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx

  v3 = a3 - a2;
  v4 = a2 & 7;
  v5 = (unsigned __int64)a2 >> 3;
  v6 = (unsigned int)(v3 + 1);
  if ( v3 != -1 )
  {
    do
    {
      if ( v5 >= *((_QWORD *)a1 + 1) )
        return;
      if ( !v4 )
      {
        if ( v6 >= 8 )
        {
          v6 -= 8LL;
          *(_BYTE *)(v5 + *(_QWORD *)a1) = -1;
          goto LABEL_11;
        }
LABEL_5:
        *(_BYTE *)(*(_QWORD *)a1 + v5) |= 1 << v4;
        if ( !--v6 )
          return;
        ++v4;
      }
      if ( v4 < 8 )
        goto LABEL_5;
      v4 = 0LL;
LABEL_11:
      ++v5;
    }
    while ( v6 );
  }
}
