/*
 * XREFs of ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01518B8
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C01511BA (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02F4208 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0151848 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInDraw(WIDENER *a1, _QWORD *a2)
{
  struct LINEDATA *v4; // rdx
  _QWORD *result; // rax

  v4 = (struct LINEDATA *)*((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 8) == 0 )
    WIDENER::vVecDrawCompute(a1, v4);
  result = a2;
  *a2 = *(_QWORD *)(*((_QWORD *)a1 + 88) + 72LL);
  return result;
}
