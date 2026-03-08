/*
 * XREFs of ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B0F6C
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18011F1B0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802B0FC0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyInvalidResource(
        CDxHandleYUVBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rbx
  const struct IDeviceResource *v4; // rdx

  v2 = (char *)this - 400;
  CDxHandleYUVBitmapRealization::ReleaseTexture((CDxHandleYUVBitmapRealization *)((char *)this - 400));
  v4 = 0LL;
  if ( v2 )
    v4 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 48) + 20LL) - 384);
  CDeviceResource::NotifyInvalid((CDxHandleYUVBitmapRealization *)((char *)this - 80), v4);
}
