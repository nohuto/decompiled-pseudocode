/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x18021EF70
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802523B0 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[233]);
  this[233] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[234]);
  this[234] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[235]);
  this[235] = 0LL;
}
