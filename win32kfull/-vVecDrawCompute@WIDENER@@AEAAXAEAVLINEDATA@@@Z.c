/*
 * XREFs of ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0151848
 * Callers:
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01518B8 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0151944 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02F51CC (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 * Callees:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C02F4430 (-vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecDrawCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rdx
  int v4; // ecx
  int v5; // eax

  WIDEPENOBJ::vDetermineDrawVertex((WIDENER *)((char *)this + 824), (struct LINEDATA *)((char *)a2 + 48), a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *v3;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v4 = -v4;
    *((_DWORD *)a2 + 18) = v4;
    v5 = -v3[1];
  }
  else
  {
    *((_DWORD *)a2 + 18) = v4;
    v5 = v3[1];
  }
  *((_DWORD *)a2 + 19) = v5;
  *(_DWORD *)a2 |= 8u;
  *((_DWORD *)a2 + 18) = ((v4 >> 31) + 4 + v4) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 19) = ((*((int *)a2 + 19) >> 31) + *((_DWORD *)a2 + 19) + 4) & 0xFFFFFFF8;
}
