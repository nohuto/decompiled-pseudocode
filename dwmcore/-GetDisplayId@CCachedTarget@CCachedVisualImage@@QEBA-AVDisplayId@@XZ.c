/*
 * XREFs of ?GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA?AVDisplayId@@XZ @ 0x1802143E8
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::GetDisplayId(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
  v4 = *(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2);
  return a2;
}
