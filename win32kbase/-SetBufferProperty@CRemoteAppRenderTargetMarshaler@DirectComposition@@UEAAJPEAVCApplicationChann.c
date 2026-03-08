/*
 * XREFs of ?SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0264810
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1 && Size == 16 )
  {
    memmove((char *)this + 72, a4, 0x10uLL);
    *((_DWORD *)this + 4) |= 0x80u;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
