/*
 * XREFs of ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C0006500
 * Callers:
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0003460 (-DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::ShouldDeferDisposeLocked(FxObject *this, unsigned __int8 *PreviousIrql)
{
  unsigned __int16 m_ObjectFlags; // ax

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 )
    return 1;
  if ( (m_ObjectFlags & 0x10) == 0 )
    return 0;
  if ( !PreviousIrql )
    return KeGetCurrentIrql() != 0;
  return *PreviousIrql != 0;
}
