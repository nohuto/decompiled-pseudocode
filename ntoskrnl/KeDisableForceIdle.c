/*
 * XREFs of KeDisableForceIdle @ 0x14057A800
 * Callers:
 *     KiInitializeForceIdle @ 0x14080B574 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
