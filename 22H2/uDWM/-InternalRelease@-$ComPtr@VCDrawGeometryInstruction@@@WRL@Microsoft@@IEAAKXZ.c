/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F7E0
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800057F4 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005940 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001FAB0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x180084440 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800AD5B8 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B6E58 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(CBaseObject **a1)
{
  CBaseObject *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CBaseObject::Release(v1);
  }
  return result;
}
