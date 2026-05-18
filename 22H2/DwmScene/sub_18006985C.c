/*
 * XREFs of sub_18006985C @ 0x18006985C
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180104D98 @ 0x180104D98 (sub_180104D98.c)
 * Callees:
 *     sub_1800DD2FC @ 0x1800DD2FC (sub_1800DD2FC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006985C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_1800DD2FC(v2 + 4);
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
