/*
 * XREFs of ?SetAlignmentY@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilVerticalAlignment@@@Z @ 0x1800FCAAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetAlignmentY(
        __int64 *a1,
        int a2)
{
  __int64 v3; // rax

  if ( a2 != *((_DWORD *)a1 + 37) )
  {
    v3 = *a1;
    *((_DWORD *)a1 + 37) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
