/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18021A840
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8EE0 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  char *v2; // rbx

  v2 = (char *)this - 112;
  if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)this - 112)) )
    CResource::NotifyOnChanged((__int64)v2, 0, 0LL);
}
