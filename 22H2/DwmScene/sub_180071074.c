/*
 * XREFs of sub_180071074 @ 0x180071074
 * Callers:
 *     sub_180075BFC @ 0x180075BFC (sub_180075BFC.c)
 * Callees:
 *     sub_1800110E8 @ 0x1800110E8 (sub_1800110E8.c)
 *     sub_1800EA790 @ 0x1800EA790 (sub_1800EA790.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180071074(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::SymbolShaderExtension>::`vftable';
    sub_1800EA790(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  sub_1800110E8(a1, (__int64)(v3 + 4));
  return a1;
}
