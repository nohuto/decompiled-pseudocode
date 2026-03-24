/*
 * XREFs of ?IsBrushGraphRequired@CClipBrush@@AEBA_NXZ @ 0x1801B7DF8
 * Callers:
 *     ?SetSource@CClipBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801B7F80 (-SetSource@CClipBrush@@QEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::IsBrushGraphRequired(CClipBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3
    && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 55LL)
     || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 56LL))(
          *((_QWORD *)this + 10),
          136LL)) )
  {
    return 1;
  }
  return v2;
}
