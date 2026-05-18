/*
 * XREFs of sub_1800B7ACC @ 0x1800B7ACC
 * Callers:
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_1800F51EC @ 0x1800F51EC (sub_1800F51EC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B7ACC(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x100uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    sub_1800F51EC(v2 + 4);
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
