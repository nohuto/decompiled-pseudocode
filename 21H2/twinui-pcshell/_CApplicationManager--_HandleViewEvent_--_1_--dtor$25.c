/*
 * XREFs of _CApplicationManager::_HandleViewEvent_::_1_::dtor$25 @ 0x1801758F7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewEvent_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((void *)(a2 + 56));
  }
}
