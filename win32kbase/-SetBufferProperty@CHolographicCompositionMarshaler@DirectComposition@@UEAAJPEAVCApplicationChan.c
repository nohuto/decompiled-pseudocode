/*
 * XREFs of ?SetBufferProperty@CHolographicCompositionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0265960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicCompositionMarshaler::SetBufferProperty(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 || a5 != 16 )
    return 3221225485LL;
  if ( *((_BYTE *)this + 88) )
    return 3221225506LL;
  *(_OWORD *)((char *)this + 72) = *a4;
  *((_BYTE *)this + 88) = 1;
  if ( *((_BYTE *)this + 68) )
    *((_DWORD *)this + 4) |= 0x40u;
  *a6 = 1;
  return result;
}
