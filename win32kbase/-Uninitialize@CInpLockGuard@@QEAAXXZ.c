/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0094C10
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0094B2C (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00954DC (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00CB204 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::Uninitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
