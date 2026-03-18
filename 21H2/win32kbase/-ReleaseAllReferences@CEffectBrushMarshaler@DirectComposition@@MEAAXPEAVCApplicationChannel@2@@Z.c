/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00AE580
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  char *v5; // rdx
  __int64 v6; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[10]);
  v4 = this[11];
  this[10] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = (char *)this[12];
  this[11] = 0LL;
  if ( v5 )
  {
    v6 = 0LL;
    if ( !*((_DWORD *)this + 26) )
      goto LABEL_5;
    do
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this[12] + v6));
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 26) );
    v5 = (char *)this[12];
    if ( v5 )
LABEL_5:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
    this[12] = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 27) = 0;
  }
}
