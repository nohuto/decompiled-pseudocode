/*
 * XREFs of ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x1800F618C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetIsCenterHollow(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 152) != v3 )
  {
    *((_BYTE *)this + 152) = v3;
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
  return 0LL;
}
