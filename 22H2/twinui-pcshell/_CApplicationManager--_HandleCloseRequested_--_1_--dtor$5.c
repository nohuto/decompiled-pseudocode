/*
 * XREFs of _CApplicationManager::_HandleCloseRequested_::_1_::dtor$5 @ 0x1801C61B1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleCloseRequested_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 72));
  }
}
