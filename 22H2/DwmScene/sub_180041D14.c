/*
 * XREFs of sub_180041D14 @ 0x180041D14
 * Callers:
 *     sub_180041D80 @ 0x180041D80 (sub_180041D80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041D14(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800C8E88(a1);
}
