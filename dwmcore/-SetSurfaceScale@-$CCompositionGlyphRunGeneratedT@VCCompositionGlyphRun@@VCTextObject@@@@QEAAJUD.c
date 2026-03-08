/*
 * XREFs of ?SetSurfaceScale@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x1801C6A80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetSurfaceScale(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  a1[12] = a2;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  return 0LL;
}
