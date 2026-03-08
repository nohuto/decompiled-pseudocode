/*
 * XREFs of ?IsBrushGraphRequired@CClipBrush@@AEBA_NXZ @ 0x18021E170
 * Callers:
 *     ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x180223D60 (-OnBrushChanged@CCompositionTextLine@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::IsBrushGraphRequired(CClipBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 11);
  if ( v3
    && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 57LL)
     || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
          *((_QWORD *)this + 11),
          137LL)) )
  {
    return 1;
  }
  return v2;
}
