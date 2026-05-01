/*
 * XREFs of ??_ETabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802F9970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ @ 0x1802F9858 (--1TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *__fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::`vector deleting destructor'(
        Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::~TabTransferEventBroker(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
