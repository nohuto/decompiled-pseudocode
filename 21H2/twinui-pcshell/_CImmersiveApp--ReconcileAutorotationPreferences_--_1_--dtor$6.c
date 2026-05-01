/*
 * XREFs of _CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor$6 @ 0x1801752B3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~8u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((void *)(a2 + 96));
  }
}
