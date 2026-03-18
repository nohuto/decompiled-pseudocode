/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0062EB0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0062FE0 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE3DC (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C0201F90 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
