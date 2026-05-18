/*
 * XREFs of sub_180101CA0 @ 0x180101CA0
 * Callers:
 *     <none>
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 *     __RTtypeid @ 0x18011E0C4 (__RTtypeid.c)
 */

bool __fastcall sub_180101CA0(__int64 a1, __int64 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == a2 )
    return 1;
  v5 = _RTtypeid(a2);
  v6 = _RTtypeid(a1);
  return !(unsigned int)_std_type_info_compare(v6 + 8, v5 + 8)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(_RTDynamicCast(
                                              a2,
                                              0LL,
                                              &Spectre::Engine::ISceneNodeTraversal `RTTI Type Descriptor',
                                              &Spectre::Engine::DistanceFromCameraSceneNodeTraversal `RTTI Type Descriptor',
                                              1)
                                          + 8);
}
