/*
 * XREFs of ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18001360C
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800134E4 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180244BE8 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180013640 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800E0D3C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseHeatMap(CPrimitiveGroup *this)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 640);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 648);
}
