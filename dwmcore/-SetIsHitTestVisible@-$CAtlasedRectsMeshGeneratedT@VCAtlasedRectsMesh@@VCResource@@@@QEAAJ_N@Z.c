/*
 * XREFs of ?SetIsHitTestVisible@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJ_N@Z @ 0x1800F8154
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetIsHitTestVisible(__int64 *a1, char a2)
{
  __int64 v2; // rax

  if ( a2 != *((_BYTE *)a1 + 64) )
  {
    v2 = *a1;
    *((_BYTE *)a1 + 64) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
