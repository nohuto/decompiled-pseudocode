/*
 * XREFs of ?IsReadyToDraw@CClipBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18021E270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CClipBrush::IsReadyToDraw(CClipBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rcx
  bool v4; // bl
  bool v6; // al
  bool v7; // zf
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  v9 = 0;
  v6 = 0;
  if ( v3 )
  {
    v7 = (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, bool *))(*(_QWORD *)v3 + 288LL))(
           v3,
           a2,
           &v9) == 0;
    v6 = v9;
    v4 = !v7;
  }
  *a3 = v6;
  return v4;
}
