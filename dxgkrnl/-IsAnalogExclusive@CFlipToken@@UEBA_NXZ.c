/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C0079350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0076E4C (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 */

char __fastcall CFlipToken::IsAnalogExclusive(CompositionSurfaceObject **this)
{
  return CompositionSurfaceObject::GetAnalogExclusive(this[4]);
}
