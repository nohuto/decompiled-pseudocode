/*
 * XREFs of ?HasSwapChainContent@CClipBrush@@UEBA_NXZ @ 0x18021E130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CClipBrush::HasSwapChainContent(CClipBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 256LL))(v1) != 0;
  return v2;
}
