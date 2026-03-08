/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x140AD29E0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockCommon @ 0x140AD2CEC (ViKeAcquireSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeAcquireSpinLock(__int64 a1, __int64 a2, __int64 a3)
{
  return ViKeAcquireSpinLockCommon(a1, a3, a2);
}
