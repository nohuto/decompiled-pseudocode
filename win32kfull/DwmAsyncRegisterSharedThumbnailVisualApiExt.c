/*
 * XREFs of DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x1C00114B0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedThumbnailVisual @ 0x1C00114F4 (DwmAsyncRegisterSharedThumbnailVisual.c)
 */

__int64 __fastcall DwmAsyncRegisterSharedThumbnailVisualApiExt(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return DwmAsyncRegisterSharedThumbnailVisual(a1, a5, a6, a7, a8);
}
