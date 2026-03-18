/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0217CA8
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214690 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0215C20 (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  char **v2; // rbx
  __int64 v3; // rsi

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v2 = (char **)((char *)this + 120);
  v3 = 4LL;
  do
  {
    if ( *v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v2);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
}
