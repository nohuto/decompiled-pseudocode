/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1C0393F60
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0049EEC (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     KappxParseString @ 0x1C039408C (KappxParseString.c)
 *     KappxSafeSearch @ 0x1C0394128 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(const void **a1)
{
  char *Pool2; // rax
  char *v3; // r14
  unsigned __int16 v5; // di
  unsigned __int16 v6; // di
  char *v7; // r15
  int v8; // ebp
  unsigned __int16 v9; // ax
  __int64 v10; // rsi
  int v11; // ebx

  Pool2 = (char *)ExAllocatePool2(256LL, *(unsigned __int16 *)a1, 1483763777LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v5 = *(_WORD *)a1;
  memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
  v6 = v5 >> 1;
  v7 = v3;
  v8 = 0;
  while ( 1 )
  {
    v9 = KappxSafeSearch(v7, v6, 95LL);
    v10 = v9;
    if ( v9 == v6 && v8 != 4 )
    {
      v11 = -2147483643;
LABEL_14:
      ExFreePoolWithTag(v3, 0x58707041u);
      return (unsigned int)v11;
    }
    if ( !v8 )
      goto LABEL_12;
    if ( v8 != 1 && v8 != 2 )
      break;
    v11 = 0;
LABEL_13:
    v7 += 2 * v10 + 2;
    v6 += -1 - v10;
    if ( (unsigned int)++v8 >= 5 )
      goto LABEL_14;
  }
  if ( (unsigned int)(v8 - 3) <= 1 )
  {
LABEL_12:
    v11 = KappxParseString(v7);
    if ( v11 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
