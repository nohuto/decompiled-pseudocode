/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0061BB0
 * Callers:
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064FA0 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0263490 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026AB20 (-ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005F8A4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx
  __int64 i; // rdi
  void *v6; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13) + 8 * i));
    v6 = (void *)*((_QWORD *)this + 13);
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
  }
}
