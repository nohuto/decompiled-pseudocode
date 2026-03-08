/*
 * XREFs of ?GetSize@CColorKeyBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180131830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmapRealization::GetSize(CColorKeyBitmapRealization *this, __int64 a2)
{
  (***((void (__fastcall ****)(_QWORD))this - 6))(*((_QWORD *)this - 6));
  return (struct D2D_SIZE_U)a2;
}
