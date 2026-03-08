/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C02F85E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01BAF14 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C03B8368 (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(char a1)
{
  CCD_BTL *v2; // rax

  v2 = CCD_BTL::Global();
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, a1 != 0);
}
