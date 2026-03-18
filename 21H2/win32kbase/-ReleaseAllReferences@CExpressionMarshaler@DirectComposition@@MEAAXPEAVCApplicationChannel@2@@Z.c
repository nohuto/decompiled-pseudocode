/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000B160
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000B260 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000B2B0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[25];
  if ( v4 )
  {
    v5 = 0LL;
    if ( !*((_DWORD *)this + 52) )
      goto LABEL_5;
    do
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *((struct DirectComposition::CWeakReferenceBase **)this[25] + v5));
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *((_DWORD *)this + 52) );
    v4 = this[25];
    if ( v4 )
LABEL_5:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
    this[25] = 0LL;
  }
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  v6 = this[27];
  if ( v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
    this[27] = 0LL;
  }
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  v7 = this[17];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[17] = 0LL;
  }
  v8 = this[20];
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    this[20] = 0LL;
  }
}
