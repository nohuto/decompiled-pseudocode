/*
 * XREFs of ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A74F0
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C005A9B8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetRelativeSizeHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _DWORD *a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi

  v5 = 0;
  if ( a4 == 8 )
  {
    *((_DWORD *)this + 26) = *a3;
    *((_DWORD *)this + 27) = a3[1];
    if ( *((_QWORD *)this + 5) )
    {
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x22u);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x23u);
    }
    *((_DWORD *)this + 4) |= 0x2000000u;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
