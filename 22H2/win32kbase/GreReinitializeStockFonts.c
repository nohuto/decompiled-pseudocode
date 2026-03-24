/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00B73E0
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0137CE4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreReinitializeStockFonts(unsigned int a1, int a2)
{
  __int64 result; // rax

  if ( qword_1C0255370 )
    result = qword_1C0255370();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0255378;
    if ( qword_1C0255378 )
      result = qword_1C0255378(a1);
  }
  if ( a2 )
    gDrvDpiAdjustedForLoggedOnUser = 1;
  return result;
}
