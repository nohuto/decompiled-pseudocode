/*
 * XREFs of ??1CShapePtr@@QEAA@XZ @ 0x18016B954
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180067ED0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180076460 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C79E0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CShapePtr::~CShapePtr(CShapePtr *this)
{
  CShapePtr::Release(this);
}
