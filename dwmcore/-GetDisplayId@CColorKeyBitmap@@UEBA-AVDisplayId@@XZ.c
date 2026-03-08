/*
 * XREFs of ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x1802B35A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::GetDisplayId(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32));
  return a2;
}
