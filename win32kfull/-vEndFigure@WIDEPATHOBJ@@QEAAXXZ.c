/*
 * XREFs of ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C0151742
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C0150B0A (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C02F3AE4 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPATHOBJ::vEndFigure(WIDEPATHOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v2 = (*((_QWORD *)this + 16) - v1 - 24) >> 3;
  *(_DWORD *)(v1 + 16) |= 2u;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = v2;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 8
                                                               * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 40LL)
                                                                                  + 20LL)
                                                                + 3LL);
}
