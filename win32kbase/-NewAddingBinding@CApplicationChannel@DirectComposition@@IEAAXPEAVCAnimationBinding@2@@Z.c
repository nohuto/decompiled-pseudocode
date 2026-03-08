/*
 * XREFs of ?NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B25C
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B08C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::NewAddingBinding(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding *a2)
{
  if ( *((int *)this + 6) > 2 )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = a2;
  }
}
