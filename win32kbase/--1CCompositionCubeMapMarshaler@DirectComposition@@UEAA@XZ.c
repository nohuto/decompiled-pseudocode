/*
 * XREFs of ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C026B9B4
 * Callers:
 *     ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A590 (--_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 7) = 0LL;
  }
}
