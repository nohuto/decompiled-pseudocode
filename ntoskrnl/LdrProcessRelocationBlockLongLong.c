/*
 * XREFs of LdrProcessRelocationBlockLongLong @ 0x1409BEF68
 * Callers:
 *     LdrRelocateImageWithBias @ 0x1409BF024 (LdrRelocateImageWithBias.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1405AE774 (LdrpArmProcessRelocation.c)
 *     LdrpGenericProcessRelocation @ 0x1405AE854 (LdrpGenericProcessRelocation.c)
 *     LdrpThumbProcessRelocation @ 0x1405AE8FC (LdrpThumbProcessRelocation.c)
 */

unsigned __int16 *__fastcall LdrProcessRelocationBlockLongLong(
        unsigned __int16 a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  unsigned __int16 *v5; // rbx
  int v7; // r14d
  unsigned __int64 v8; // rbp
  unsigned int v9; // eax

  v5 = a4;
  v7 = a1;
  v8 = (unsigned __int64)&a4[a3];
  if ( (unsigned __int64)a4 >= v8 )
    return v5;
  while ( 1 )
  {
    if ( ((1 << (*v5 >> 12)) & 0x3A0) == 0 )
    {
      v9 = LdrpGenericProcessRelocation(v5, a2, a5);
      goto LABEL_9;
    }
    if ( v7 != 448 )
      break;
    v9 = LdrpArmProcessRelocation(v5, a2, a5);
LABEL_9:
    if ( !v9 )
      return 0LL;
    v5 += v9;
    if ( (unsigned __int64)v5 >= v8 )
      return v5;
  }
  if ( v7 == 450 || v7 == 452 )
  {
    v9 = LdrpThumbProcessRelocation(v5, a2, a5);
    goto LABEL_9;
  }
  return 0LL;
}
