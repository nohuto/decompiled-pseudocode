/*
 * XREFs of ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x18021EC04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdate(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TABLETRANSFEREFFECT *a3)
{
  *((_BYTE *)this + 176) = *((_BYTE *)a3 + 8);
  *((_BYTE *)this + 177) = *((_BYTE *)a3 + 9);
  *((_BYTE *)this + 178) = *((_BYTE *)a3 + 10);
  *((_BYTE *)this + 179) = *((_BYTE *)a3 + 11);
  *((_BYTE *)this + 180) = *((_BYTE *)a3 + 12);
  (*(void (__fastcall **)(CTableTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
