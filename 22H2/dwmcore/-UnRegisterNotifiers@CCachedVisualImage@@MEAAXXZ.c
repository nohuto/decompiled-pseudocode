/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x1800F85A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  (*((void (__fastcall **)(struct CResource **))*this + 24))(this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
}
