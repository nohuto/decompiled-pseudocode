/*
 * XREFs of ?EntryRemoved@FxRelatedDeviceList@@MEAAXPEAUFxTransactionedEntry@@@Z @ 0x1C00898C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRelatedDeviceList::EntryRemoved(FxRelatedDeviceList *this, FxTransactionedEntry *Entry)
{
  if ( LODWORD(Entry[1].m_ListLink.Blink) == 2 )
    ++this->m_NeedReportMissing;
}
