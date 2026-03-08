/*
 * XREFs of ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x1801029C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180102A30 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessCreate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_CREATE *a3)
{
  int v5; // eax

  *(_QWORD *)((char *)this + 18460) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 4606) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 6);
  CLegacyRenderTarget::SetSDRBoost(this, 1.0);
  v5 = 3;
  if ( *((_DWORD *)a3 + 7) < 3u )
    v5 = 2;
  *((_DWORD *)this + 4607) = v5;
  return 0LL;
}
