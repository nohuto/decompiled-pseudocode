/*
 * XREFs of ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BB744
 * Callers:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005B1EC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B284 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C005B490 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C00617B8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C0098930 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C024AC7C (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024ACAC (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::DetachAndDelete(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rax

  if ( !*((_DWORD *)this + 2) )
    goto LABEL_9;
  for ( i = (_QWORD *)(*((_QWORD *)this + 2) + 40LL);
        (DirectComposition::CAnimationBinding *)*i != this;
        i = (_QWORD *)(*i + 32LL) )
  {
    ;
  }
  *i = *((_QWORD *)this + 4);
  for ( j = (_QWORD *)(*((_QWORD *)this + 3) + 8LL);
        (DirectComposition::CAnimationBinding *)*j != this;
        j = (_QWORD *)(*j + 40LL) )
  {
    ;
  }
  *j = *((_QWORD *)this + 5);
  if ( (*((_DWORD *)this + 2) & 3) != 0 )
  {
    v6 = (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  }
  if ( !*((_QWORD *)a2 + 44) )
  {
    *((_QWORD *)a2 + 44) = this;
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_OWORD *)this + 2) = 0LL;
  }
  else
  {
LABEL_9:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  }
}
