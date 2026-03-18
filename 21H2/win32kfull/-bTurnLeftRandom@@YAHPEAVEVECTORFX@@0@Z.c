/*
 * XREFs of ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C01315BC
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C0130EE8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0131D34 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CDE10 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bTurnLeftRandom(struct EVECTORFX *a1, struct EVECTORFX *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *((int *)a1 + 1);
  v3 = *(int *)a1;
  v4 = *((int *)a2 + 1);
  if ( (int)(v2 ^ v4 ^ v3 ^ *(_DWORD *)a2) >= 0 )
    return v4 * v3 < v2 * *(int *)a2;
  else
    return ((unsigned int)v4 ^ (unsigned int)v3) >> 31;
}
