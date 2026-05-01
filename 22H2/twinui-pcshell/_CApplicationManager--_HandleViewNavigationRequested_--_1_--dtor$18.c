/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$18 @ 0x1801757BF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~8u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((void *)(a2 + 48));
  }
}
