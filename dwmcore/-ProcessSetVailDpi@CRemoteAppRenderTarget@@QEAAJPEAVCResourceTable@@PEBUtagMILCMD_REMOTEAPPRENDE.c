/*
 * XREFs of ?ProcessSetVailDpi@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI@@@Z @ 0x1801C2BF0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetVailDpi(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 63) != v3 )
  {
    *((_DWORD *)this + 63) = v3;
    *((_BYTE *)this + 292) = 1;
  }
  return 0LL;
}
