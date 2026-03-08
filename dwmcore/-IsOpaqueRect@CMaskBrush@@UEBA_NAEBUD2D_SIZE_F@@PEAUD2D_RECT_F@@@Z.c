/*
 * XREFs of ?IsOpaqueRect@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1800E5C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsOpaqueRect(CMaskBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  char v3; // bl
  __int64 v5; // rcx

  v3 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v5 = *((_QWORD *)this + 12);
    if ( v5 )
      return (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v5 + 296LL))(
               v5,
               a2,
               a3) != 0;
  }
  return v3;
}
