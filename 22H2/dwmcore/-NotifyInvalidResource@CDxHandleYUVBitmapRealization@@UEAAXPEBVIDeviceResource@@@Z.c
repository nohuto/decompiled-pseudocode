/*
 * XREFs of ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180266258
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x1800F8AD0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802662AC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyInvalidResource(
        CDxHandleYUVBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rbx
  const struct IDeviceResource *v4; // rdx

  v2 = (char *)this - 376;
  CDxHandleYUVBitmapRealization::ReleaseTexture((CDxHandleYUVBitmapRealization *)((char *)this - 376));
  v4 = 0LL;
  if ( v2 )
    v4 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 45) + 20LL) - 360);
  CDeviceResource::NotifyInvalid((CDxHandleYUVBitmapRealization *)((char *)this - 88), v4);
}
