/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C00659E0 (GreReferenceObject.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011ECA0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiGetETM @ 0x1C013F9C0 (NtGdiGetETM.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0159EB4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B784 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
