/*
 * XREFs of ?ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE@@@Z @ 0x18016FB08
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetAlphaMode(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE *a3)
{
  int v3; // edx
  int v4; // xmm0_4
  __int64 v5; // rcx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 23) )
  {
    *((_DWORD *)this + 23) = v3;
    if ( v3 == 3 )
      v4 = (int)FLOAT_1_0;
    else
      v4 = 0;
    *((_DWORD *)this + 31) = v4;
    *((_BYTE *)this + 129) = 1;
    v5 = *((_QWORD *)this + 20);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  }
  return 0LL;
}
