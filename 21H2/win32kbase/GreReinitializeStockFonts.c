/*
 * XREFs of GreReinitializeStockFonts @ 0x1C00C4D10
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D54F0 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall GreReinitializeStockFonts(unsigned int a1, int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B0F0;
  if ( qword_1C029B0F0 )
  {
    result = (__int64 (*)(void))qword_1C029B0F0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029B0F8;
      if ( qword_1C029B0F8 )
        result = (__int64 (*)(void))qword_1C029B0F8(a1);
    }
  }
  if ( a2 )
    gDrvDpiAdjustedForLoggedOnUser = 1;
  return result;
}
