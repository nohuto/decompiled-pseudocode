/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00D2060
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DA244 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreReinitializeStockFonts(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( qword_1C02D58F0 && (int)qword_1C02D58F0() >= 0 && qword_1C02D58F8 )
    qword_1C02D58F8(v3);
  result = SGDGetSessionState(a1);
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)(result + 24) + 1284LL) = 1;
  return result;
}
