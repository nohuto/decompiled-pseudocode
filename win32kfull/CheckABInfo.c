/*
 * XREFs of CheckABInfo @ 0x1C02523FC
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C025325C (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckABInfo(__int64 a1, int a2, int a3, __int16 *a4, unsigned __int16 *a5)
{
  char *v5; // r10
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // dx
  __int16 v10; // r11
  __int16 v11; // ax
  char v12; // r8
  char v13; // r8
  __int16 v14; // ax
  __int16 v15; // r11
  __int64 result; // rax

  v5 = *(char **)(a1 + 8);
  v7 = 0;
  if ( !v5 )
    return 4294967256LL;
  switch ( a3 )
  {
    case 1:
      v9 = 2;
      goto LABEL_11;
    case 2:
      goto LABEL_9;
    case 3:
    case 254:
      v9 = 256;
LABEL_11:
      if ( *((_QWORD *)v5 + 1) && *((_WORD *)v5 + 1) <= v9 )
        goto LABEL_13;
      return 4294967256LL;
    case 255:
LABEL_9:
      v9 = 16;
      goto LABEL_11;
  }
  v9 = 0;
LABEL_13:
  v10 = *a4;
  v11 = *a4 | 0x80;
  v12 = *v5;
  *a4 = v11;
  if ( (v12 & 1) != 0 )
  {
    v13 = v5[1];
    if ( !v13 )
      return 0LL;
    v14 = v10 & 0xFF7F;
    v15 = v10 | 0x180;
    if ( v13 == -1 )
      v15 = v14;
    else
      v7 = v9;
    *a4 = v15;
    v9 = v7;
  }
  else
  {
    if ( a2 != 6 )
      return 4294967287LL;
    if ( (v12 & 4) != 0 )
    {
      v11 = v10 | 0x280;
      *a4 = v10 | 0x280;
    }
    if ( (v12 & 8) != 0 )
    {
      if ( a3 != 6 )
        return 4294967285LL;
      *a4 = v11 | 0x400;
    }
  }
  result = 1LL;
  *a5 = v9;
  return result;
}
