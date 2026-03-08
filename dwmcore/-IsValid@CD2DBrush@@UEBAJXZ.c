/*
 * XREFs of ?IsValid@CD2DBrush@@UEBAJXZ @ 0x180299AE0
 * Callers:
 *     ?IsValid@CD2DBrush@@$4PPPPPPPM@A@EBAJXZ @ 0x18011BDB0 (-IsValid@CD2DBrush@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBrush::IsValid(CD2DBrush *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 4) )
    return 2291662989LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 12) + 8LL) - 96;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
