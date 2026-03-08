/*
 * XREFs of ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00250D8
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0023ED4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00243F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C0025120 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0025424 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00265BC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C00266A4 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxChildList::MarkDescriptionNotPresentWorker(
        FxChildList *this,
        FxDeviceDescriptionEntry *DescriptionEntry,
        unsigned __int8 ModificationCanBeQueued)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  _LIST_ENTRY *Blink; // rdx

  p_m_ModificationLink = &DescriptionEntry->m_ModificationLink;
  if ( !ModificationCanBeQueued || p_m_ModificationLink->Flink == p_m_ModificationLink )
  {
    DescriptionEntry->m_FoundInLastScan = 0;
    DescriptionEntry->m_ModificationState = ModificationRemoveNotify;
    Blink = this->m_ModificationListHead.Blink;
    if ( Blink->Flink != &this->m_ModificationListHead )
      __fastfail(3u);
    p_m_ModificationLink->Flink = &this->m_ModificationListHead;
    p_m_ModificationLink->Blink = Blink;
    Blink->Flink = p_m_ModificationLink;
    this->m_ModificationListHead.Blink = p_m_ModificationLink;
  }
}
