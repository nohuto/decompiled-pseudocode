/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAU_FONTSUB@@0PEBU0@@Z @ 0x1C011954C
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C0394610 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0132890 (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  _OWORD *v6; // rdx
  __int128 v7; // xmm0
  _OWORD *v8; // rbx
  unsigned int v10; // edi
  void *v11; // rax

  if ( gcfsTable < *a3 )
    goto LABEL_2;
  v10 = gcfsTable + 32;
  if ( gpfsTable )
    v11 = (void *)PREALLOCMEM2(gpfsTable);
  else
    v11 = PALLOCMEM2(196 * (gcfsTable + 32), 1651729991LL, 1);
  if ( v11 )
  {
    gpfsTable = v11;
    *a3 = v10;
LABEL_2:
    v6 = (char *)gpfsTable + 196 * gcfsTable;
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    v6[4] = a4[4];
    v6[5] = a4[5];
    v6[6] = a4[6];
    v6 += 8;
    v7 = a4[7];
    v8 = a4 + 8;
    *(v6 - 1) = v7;
    *v6 = *v8;
    v6[1] = v8[1];
    v6[2] = v8[2];
    v6[3] = v8[3];
    *((_DWORD *)v6 + 16) = *((_DWORD *)v8 + 16);
    ++gcfsTable;
    return 0LL;
  }
  return 3221225495LL;
}
