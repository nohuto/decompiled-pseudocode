/*
 * XREFs of ??4?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Device1@@@Z @ 0x1802AB104
 * Callers:
 *     ?InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z @ 0x1802AB6F0 (-InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11Device1>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
