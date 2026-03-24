/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C0298920
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C013D7C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C02ED97C (-SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(__int64 a1, __int64 a2)
{
  bool v2; // bl
  CCD_BTL *v3; // rax

  v2 = (_BYTE)a1 != 0;
  v3 = CCD_BTL::Global(a1, a2);
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v3, v2);
}
