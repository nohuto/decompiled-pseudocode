/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BA930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 i; // rdi
  char *v6; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
  v4 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[10] = 0LL;
  if ( this[11] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this[11] + i));
    v6 = (char *)this[11];
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
    this[11] = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
  }
}
