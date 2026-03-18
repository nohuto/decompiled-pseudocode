/*
 * XREFs of ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001F974
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001F720 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00275C0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00A7F10 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00AAA58 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ClearAnimationTimeList(
        DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CAnimationMarshaler **v1; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  DirectComposition::CAnimationMarshaler **v4; // rdi
  DirectComposition::CAnimationMarshaler *v5; // rcx

  v1 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 55);
  if ( v1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    do
    {
      v4 = (DirectComposition::CAnimationMarshaler **)v1[1];
      v5 = *v1;
      v1[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v5, PerformanceCounter.QuadPart);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v1);
      v1 = v4;
    }
    while ( v4 );
    *((_QWORD *)this + 55) = 0LL;
  }
}
