/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00B42E0
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  _QWORD *v1; // rax
  char *v3; // rdx
  char *v4; // rdx
  char *v5; // rdx

  v1 = *(_QWORD **)this;
  v3 = *(char **)(*(_QWORD *)this + 88LL);
  if ( v3 )
  {
    if ( v3 != (char *)v1[9] )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
      v1 = *(_QWORD **)this;
    }
    v1[11] = 0LL;
    v1 = *(_QWORD **)this;
  }
  v4 = (char *)v1[10];
  if ( v4 )
  {
    if ( v4 != (char *)v1[9] )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
      v1 = *(_QWORD **)this;
    }
    v1[10] = 0LL;
    v1 = *(_QWORD **)this;
  }
  v5 = (char *)v1[9];
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
