/*
 * XREFs of sub_1800407F8 @ 0x1800407F8
 * Callers:
 *     sub_180040840 @ 0x180040840 (sub_180040840.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800407F8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  v2 = a1[23];
  if ( v2 )
  {
    a1[23] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_18009B18C(a1);
}
