/*
 * XREFs of ??1CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAA@XZ @ 0x1C026E0B4
 * Callers:
 *     ??_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A620 (--_GCCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::~CCompositionMipmapSurfaceMarshaler(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 7) = 0LL;
  }
}
