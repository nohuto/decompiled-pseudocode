/*
 * XREFs of _CDesktopPositioner::_CloseView_::_1_::dtor$3 @ 0x18045EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CDesktopPositioner::_CloseView_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 96));
  }
}
