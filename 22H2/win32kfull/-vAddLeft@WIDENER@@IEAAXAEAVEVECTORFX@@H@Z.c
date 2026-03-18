/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C015E18C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02F21F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02F2418 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C015E238 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 984), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
