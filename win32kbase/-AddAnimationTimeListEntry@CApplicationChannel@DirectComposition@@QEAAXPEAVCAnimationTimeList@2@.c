/*
 * XREFs of ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00B8928
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B8760 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationTimeList *a2)
{
  if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 55);
    *((_QWORD *)this + 55) = a2;
    *((_DWORD *)a2 + 6) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 12);
  }
}
