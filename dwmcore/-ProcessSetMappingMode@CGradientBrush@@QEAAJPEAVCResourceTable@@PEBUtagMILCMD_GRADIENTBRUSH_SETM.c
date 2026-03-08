/*
 * XREFs of ?ProcessSetMappingMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE@@@Z @ 0x1800F9264
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetMappingMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 39) != v3 )
  {
    *((_DWORD *)this + 39) = v3;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
  return 0LL;
}
