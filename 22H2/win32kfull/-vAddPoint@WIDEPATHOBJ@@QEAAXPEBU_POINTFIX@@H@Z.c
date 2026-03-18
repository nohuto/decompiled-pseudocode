/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1C015E29C
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C015D96A (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C015E5F2 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C02F1CF4 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C02F21F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02F2418 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02F2844 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, const struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r8

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v2 < *((_QWORD *)this + 17) )
  {
    *v2 = *a2;
    *((_QWORD *)this + 16) += 8LL;
  }
  else
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, 0LL, 0);
  }
}
