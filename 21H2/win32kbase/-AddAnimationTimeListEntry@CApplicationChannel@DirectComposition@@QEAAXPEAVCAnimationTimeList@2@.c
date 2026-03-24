/*
 * XREFs of ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C009644C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00285B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0096300 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationTimeList *a2)
{
  if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = a2;
    *((_DWORD *)a2 + 6) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 12);
  }
}
