/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C02A9148
 * Callers:
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C03B8900 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     PREALLOCMEM2 @ 0x1C00F02EC (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
        unsigned int *a1,
        void **a2,
        _DWORD *a3,
        _OWORD *a4)
{
  int v6; // edx
  int v9; // ebp
  unsigned int v10; // eax
  char *v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // rcx

  v6 = *a1;
  if ( *a1 < *a3 )
    goto LABEL_8;
  v9 = v6 + 32;
  v10 = (v6 + 32) << 7;
  if ( *a2 )
  {
    v11 = PREALLOCMEM2(*a2, v6 << 7, v10, 1179012423LL);
  }
  else
  {
    if ( !v10 )
      return 3221225495LL;
    v11 = (char *)Win32AllocPoolZInit(v10, 1179012423LL);
  }
  if ( v11 )
  {
    *a2 = v11;
    *a3 = v9;
LABEL_8:
    v12 = (char *)*a2;
    v13 = (unsigned __int64)*a1 << 7;
    *(_OWORD *)&v12[v13] = *a4;
    *(_OWORD *)&v12[v13 + 16] = a4[1];
    *(_OWORD *)&v12[v13 + 32] = a4[2];
    *(_OWORD *)&v12[v13 + 48] = a4[3];
    *(_OWORD *)&v12[v13 + 64] = a4[4];
    *(_OWORD *)&v12[v13 + 80] = a4[5];
    *(_OWORD *)&v12[v13 + 96] = a4[6];
    *(_OWORD *)&v12[v13 + 112] = a4[7];
    ++*a1;
    return 0LL;
  }
  return 3221225495LL;
}
