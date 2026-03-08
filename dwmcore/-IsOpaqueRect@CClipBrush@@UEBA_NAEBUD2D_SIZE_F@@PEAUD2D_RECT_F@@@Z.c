/*
 * XREFs of ?IsOpaqueRect@CClipBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18021E220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::IsOpaqueRect(CClipBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v3; // rcx
  char v4; // bl

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v3 + 296LL))(
             v3,
             a2,
             a3) != 0;
  return v4;
}
