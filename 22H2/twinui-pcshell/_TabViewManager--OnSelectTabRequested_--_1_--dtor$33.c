/*
 * XREFs of _TabViewManager::OnSelectTabRequested_::_1_::dtor$33 @ 0x1802E2F45
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnSelectTabRequested_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 64));
  }
}
