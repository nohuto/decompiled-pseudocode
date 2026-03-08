/*
 * XREFs of ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C0395448
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C020E618 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C039524C (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseIntArray(const unsigned __int16 *a1, unsigned int *a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax

  LODWORD(v4) = *a4;
  v5 = 0;
  if ( !a3 )
  {
LABEL_11:
    *a4 = v4;
    return 0LL;
  }
  while ( 1 )
  {
    *a2 = 0;
    v8 = 0;
    if ( a1[(unsigned int)v4] >= 0x30u )
    {
      v9 = 0;
      do
      {
        v10 = a1[(unsigned int)v4];
        if ( v10 > 0x39 )
          break;
        v4 = (unsigned int)(v4 + 1);
        ++v8;
        v9 = v10 + 2 * (5 * v9 - 24);
        *a2 = v9;
        if ( v8 >= 5 )
          goto LABEL_12;
      }
      while ( a1[v4] >= 0x30u );
    }
    if ( v5 >= a3 - 1 )
      goto LABEL_10;
    if ( a1[(unsigned int)v4] != 46 )
      break;
    LODWORD(v4) = v4 + 1;
LABEL_10:
    ++v5;
    ++a2;
    if ( v5 >= a3 )
      goto LABEL_11;
  }
LABEL_12:
  WdLogSingleEntry1(3LL, a1);
  return 3221225485LL;
}
