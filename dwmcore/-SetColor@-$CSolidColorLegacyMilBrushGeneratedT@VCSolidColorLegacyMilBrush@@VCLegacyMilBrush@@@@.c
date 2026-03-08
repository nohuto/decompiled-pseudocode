/*
 * XREFs of ?SetColor@?$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x1800F85FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::SetColor(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax

  if ( *(float *)a2 != *((float *)a1 + 24)
    || *(float *)(a2 + 4) != *((float *)a1 + 25)
    || *(float *)(a2 + 8) != *((float *)a1 + 26)
    || *(float *)(a2 + 12) != *((float *)a1 + 27) )
  {
    v2 = *a1;
    *((_OWORD *)a1 + 6) = *(_OWORD *)a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
