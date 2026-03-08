/*
 * XREFs of ?vLoadAndConvert8ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E6E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert8ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  unsigned __int8 *v6; // r8
  unsigned __int8 *v7; // r9
  __int64 v8; // rax
  ULONG cEntries; // ecx

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = &a2[a3];
    v7 = &v6[a4];
    while ( v6 != v7 )
    {
      v8 = *v6;
      cEntries = a5->cEntries;
      if ( (unsigned int)v8 > cEntries )
        v8 = (unsigned int)v8 % cEntries;
      *a1++ = *(&a5[3].cEntries + v8) | 0xFF000000;
      ++v6;
    }
  }
}
