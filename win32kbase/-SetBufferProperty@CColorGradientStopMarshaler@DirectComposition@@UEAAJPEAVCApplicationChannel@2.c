/*
 * XREFs of ?SetBufferProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00BE560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::SetBufferProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 != 1 || !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_OWORD *)((char *)this + 60) = v7;
  *a6 = 1;
  return result;
}
