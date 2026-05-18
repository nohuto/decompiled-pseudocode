/*
 * XREFs of sub_1800B0DC8 @ 0x1800B0DC8
 * Callers:
 *     sub_1800B1238 @ 0x1800B1238 (sub_1800B1238.c)
 * Callees:
 *     sub_1800F3DAC @ 0x1800F3DAC (sub_1800F3DAC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B0DC8(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DepthBufferGeneric>::`vftable';
    sub_1800F3DAC(v2 + 4);
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
