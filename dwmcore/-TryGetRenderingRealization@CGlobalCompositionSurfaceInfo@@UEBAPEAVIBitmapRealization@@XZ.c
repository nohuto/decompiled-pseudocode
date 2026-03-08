/*
 * XREFs of ?TryGetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEBAPEAVIBitmapRealization@@XZ @ 0x1800DB790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::TryGetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rdx
  struct IBitmapRealization *result; // rax

  v1 = *((_QWORD *)this + 26);
  result = 0LL;
  if ( v1 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v1 + 8) + 16LL) + v1 + 8);
  return result;
}
