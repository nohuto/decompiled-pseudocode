/*
 * XREFs of ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C02F474C
 * Callers:
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C02F36F8 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C02F49C0 (-vNextPoint@LINER@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BEZIER::vInit(BEZIER *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  BOOL v7; // eax

  v7 = a4 == gpeqErrorLow && BEZIER32::bInit(this, a2, 0LL);
  *((_DWORD *)this + 42) = v7;
  if ( !v7 )
    BEZIER64::vInit(this, a2, 0LL, a4);
}
