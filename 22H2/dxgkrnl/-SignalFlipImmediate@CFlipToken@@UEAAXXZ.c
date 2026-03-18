/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C007A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0077AEC (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C007A1CC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 */

void __fastcall CFlipToken::SignalFlipImmediate(CompositionSurfaceObject **this)
{
  char AnalogExclusive; // al

  AnalogExclusive = CompositionSurfaceObject::GetAnalogExclusive(this[4]);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)this, AnalogExclusive);
}
