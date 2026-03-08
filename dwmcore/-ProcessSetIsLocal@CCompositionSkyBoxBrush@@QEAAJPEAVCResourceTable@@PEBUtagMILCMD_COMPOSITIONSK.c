/*
 * XREFs of ?ProcessSetIsLocal@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL@@@Z @ 0x180222A18
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetIsLocal(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 124) != v3 )
  {
    *((_BYTE *)this + 124) = v3;
    (*(void (__fastcall **)(CCompositionSkyBoxBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return 0LL;
}
