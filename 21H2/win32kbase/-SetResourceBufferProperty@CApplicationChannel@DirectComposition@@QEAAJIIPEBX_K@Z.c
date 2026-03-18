/*
 * XREFs of ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z @ 0x1C0085E24
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0085E70 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceBufferProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const void *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r10
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (v6 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) != 0LL )
  {
    return DirectComposition::CApplicationChannel::SetResourceBufferProperty(this, v6, a3, a4, a5);
  }
  else
  {
    return 3221225506LL;
  }
}
