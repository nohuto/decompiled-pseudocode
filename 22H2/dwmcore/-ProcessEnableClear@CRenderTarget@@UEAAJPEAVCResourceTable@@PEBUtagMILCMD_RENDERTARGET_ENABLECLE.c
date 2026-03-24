/*
 * XREFs of ?ProcessEnableClear@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x18016FAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::ProcessEnableClear(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 128) != v3 )
  {
    *((_BYTE *)this + 128) = v3;
    *((_BYTE *)this + 129) = 1;
  }
  return 0LL;
}
