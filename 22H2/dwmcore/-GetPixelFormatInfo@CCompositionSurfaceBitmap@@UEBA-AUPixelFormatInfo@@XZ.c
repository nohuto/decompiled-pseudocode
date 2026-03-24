/*
 * XREFs of ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18016E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180013D18 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CCompositionSurfaceBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  struct IBitmapRealization *RenderingRealization; // rax
  struct IBitmapRealization *v5; // rcx

  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(a1 - 64));
  if ( RenderingRealization )
  {
    v5 = (struct IBitmapRealization *)((char *)RenderingRealization
                                     + *(int *)(*((_QWORD *)RenderingRealization + 1) + 8LL)
                                     + 8);
    (**(void (__fastcall ***)(struct IBitmapRealization *, _DWORD *))v5)(v5, a2);
    if ( *(_BYTE *)(a1 + 128) )
      a2[1] = 3;
  }
  else
  {
    *a2 = 0;
    *(_QWORD *)(a2 + 1) = *(_BYTE *)(a1 + 128) != 0 ? 3 : 0;
  }
  return a2;
}
