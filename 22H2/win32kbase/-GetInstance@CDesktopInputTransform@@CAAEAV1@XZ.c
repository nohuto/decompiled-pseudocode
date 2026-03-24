/*
 * XREFs of ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00886C8
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01BABE0 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01BAC68 (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BACCC (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01BADD8 (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BAEBC (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputTransform *CDesktopInputTransform::GetInstance(void)
{
  if ( (dword_1C02510E8 & 1) == 0 )
  {
    dword_1C02510E8 |= 1u;
    qword_1C02510F0 = (__int64)&CPushLock::`vftable';
    xmmword_1C02510F8 = 0LL;
    xmmword_1C0251108 = 0LL;
  }
  return (struct CDesktopInputTransform *)&qword_1C02510F0;
}
