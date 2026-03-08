/*
 * XREFs of HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x1C00125D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseResetReference @ 0x1C0010C30 (HUBMUX_ReleaseResetReference.c)
 */

__int64 __fastcall HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled(__int64 a1)
{
  HUBMUX_ReleaseResetReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
