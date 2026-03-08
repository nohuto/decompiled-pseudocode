/*
 * XREFs of ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004B174
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0023B7C (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LongPowerButtonHoldListener::Stop(LongPowerButtonHoldListener *this)
{
  if ( *(_QWORD *)this )
  {
    ExUnsubscribeWnfStateChange();
    *(_QWORD *)this = 0LL;
  }
}
