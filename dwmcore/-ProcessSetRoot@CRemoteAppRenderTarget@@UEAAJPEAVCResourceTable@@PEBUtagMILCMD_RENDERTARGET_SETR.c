/*
 * XREFs of ?ProcessSetRoot@CRemoteAppRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1801E7F70
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1801E3C40 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetRoot(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETROOT *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = CRenderTarget::ProcessSetRoot(this, a2, a3);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6 )
      *(_BYTE *)(v5 + 4713) = 1;
  }
  return result;
}
