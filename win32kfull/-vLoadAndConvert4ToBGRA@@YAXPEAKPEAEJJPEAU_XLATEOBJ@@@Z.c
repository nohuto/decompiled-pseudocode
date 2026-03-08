/*
 * XREFs of ?vLoadAndConvert4ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E6CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert4ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rax
  int v7; // r8d
  unsigned __int8 *v8; // r11
  ULONG cEntries; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  ULONG v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  ULONG v15; // ecx
  ULONG v16; // ecx
  __int64 v17; // rax

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = (__int64)a3 >> 1;
    v7 = -a3 & 1;
    v8 = &a2[v6];
    if ( a4 < v7 )
      v7 = a4;
    if ( v7 )
    {
      cEntries = a5->cEntries;
      v10 = *v8 & 0xF;
      if ( (unsigned int)v10 > cEntries )
        v10 = (unsigned int)v10 % cEntries;
      ++v8;
      *a1++ = *(&a5[3].cEntries + v10) | 0xFF000000;
      --a4;
    }
    if ( a4 >= 2 )
    {
      v11 = (unsigned __int64)(unsigned int)a4 >> 1;
      a4 -= 2 * ((unsigned int)a4 >> 1);
      do
      {
        v12 = a5->cEntries;
        v13 = *v8 >> 4;
        if ( v13 > v12 )
          v13 %= v12;
        v14 = *v8 & 0xF;
        *a1 = *(&a5[3].cEntries + v13) | 0xFF000000;
        v15 = a5->cEntries;
        if ( v14 > v15 )
          v14 %= v15;
        ++v8;
        a1[1] = *(&a5[3].cEntries + v14) | 0xFF000000;
        a1 += 2;
        --v11;
      }
      while ( v11 );
    }
    if ( a4 )
    {
      v16 = a5->cEntries;
      v17 = *v8 >> 4;
      if ( (unsigned int)v17 > v16 )
        v17 = (unsigned int)v17 % v16;
      *a1 = *(&a5[3].cEntries + v17) | 0xFF000000;
    }
  }
}
