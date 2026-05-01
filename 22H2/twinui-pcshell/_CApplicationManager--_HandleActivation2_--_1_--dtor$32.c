/*
 * XREFs of _CApplicationManager::_HandleActivation2_::_1_::dtor$32 @ 0x1801750A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleActivation2_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 236) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 236) &= ~2u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((void *)(a2 + 208));
  }
}
