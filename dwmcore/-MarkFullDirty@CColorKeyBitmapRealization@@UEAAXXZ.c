/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x1802AD1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmapRealization::MarkFullDirty(CColorKeyBitmapRealization *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 32LL) + 40LL))(*(_QWORD *)(*((_QWORD *)this - 6)
                                                                                                  + 32LL));
  CD2DBitmapCache::MarkFullInvalid((CColorKeyBitmapRealization *)((char *)this - 152));
}
