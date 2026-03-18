/*
 * XREFs of _Init_thread_footer @ 0x18010F9C0
 * Callers:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180017BD0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B0F0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002BB40 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x18008CF7C (-GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800ED6AC (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FB388 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x180234B60 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_1803E5698);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_1803E5698);
  return Init_thread_notify();
}
