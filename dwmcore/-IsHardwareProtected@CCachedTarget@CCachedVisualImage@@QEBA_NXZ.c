/*
 * XREFs of ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1802144D4
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::IsHardwareProtected(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
  v2 = *(int *)(*(_QWORD *)(v1 + 8) + 8LL) + v1 + 8;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
}
