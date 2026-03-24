/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00749C0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00730D0 (UnInitializeInputComponents.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00748A8 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00748E0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00AF7E4 (-CleanupDomainLocks@@YAXXZ.c)
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
