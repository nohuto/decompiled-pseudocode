/*
 * XREFs of _PropertySetAssembler::GetAs_Windows::Foundation::Collections::IMap_HSTRING_____IInspectable______::_1_::dtor$0 @ 0x1803EB1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall PropertySetAssembler::GetAs_Windows::Foundation::Collections::IMap_HSTRING_____IInspectable______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 72));
  }
}
