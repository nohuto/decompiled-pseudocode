/*
 * XREFs of ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00261C4
 * Callers:
 *     ?AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ @ 0x1C00689E0 (-AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00241C0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C002625C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

void __fastcall FxChildList::ReenumerateEntry(FxChildList *this, FxDeviceDescriptionEntry *Entry)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bl
  unsigned __int8 v6; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ReenumerateEntryLocked(this, Entry, 0);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v5);
  FxChildList::DrainFreeListHead(this, &freeHead, v6);
}
