/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca____::_1_::dtor$0 @ 0x1802F474A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 64));
  }
}
