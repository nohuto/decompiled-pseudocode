/*
 * XREFs of ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A7488
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C005A9B8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetOffsetHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _DWORD *a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi

  v5 = 0;
  if ( a4 == 12 )
  {
    *((_DWORD *)this + 18) = *a3;
    *((_DWORD *)this + 19) = a3[1];
    *((_DWORD *)this + 20) = a3[2];
    if ( *((_QWORD *)this + 5) )
    {
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 1u);
      DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 2u);
    }
    *((_DWORD *)this + 4) |= 0x80u;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
