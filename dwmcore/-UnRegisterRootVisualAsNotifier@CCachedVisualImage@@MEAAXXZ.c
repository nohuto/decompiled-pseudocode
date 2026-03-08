/*
 * XREFs of ?UnRegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAXXZ @ 0x1800FC970
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterRootVisualAsNotifier(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
}
