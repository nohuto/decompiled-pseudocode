/*
 * XREFs of sub_180021630 @ 0x180021630
 * Callers:
 *     sub_180022DDC @ 0x180022DDC (sub_180022DDC.c)
 * Callees:
 *     sub_18003D6E0 @ 0x18003D6E0 (sub_18003D6E0.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180021630(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x98uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::RenderStateD3D11>::`vftable';
    sub_18003D6E0(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
