/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C0024BE8
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0022370 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C0025224 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(
        FxChildList *this,
        WDFDEVICE__ *PreviousDevice,
        unsigned int Flags)
{
  unsigned __int64 *p_m_ListLock; // r14
  unsigned __int64 ObjectHandleUnchecked; // rdi
  bool v8; // bl
  KIRQL v9; // r12
  int v10; // r10d
  char v11; // r9
  _LIST_ENTRY *p_m_DescriptionListHead; // r10
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // r11
  _LIST_ENTRY *p_m_ModificationListHead; // r8
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *v17; // rcx

  p_m_ListLock = &this->m_ListLock;
  ObjectHandleUnchecked = 0LL;
  v8 = PreviousDevice == 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
    goto $Done_7;
  v10 = 1;
  v11 = v8;
  if ( (Flags & 1) == 0 )
    goto LABEL_11;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  Flink = this->m_DescriptionListHead.Flink;
  if ( Flink == &this->m_DescriptionListHead )
  {
    v10 = 1;
LABEL_11:
    if ( (Flags & 4) != 0 )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      for ( i = this->m_ModificationListHead.Flink; i != p_m_ModificationListHead; i = i->Flink )
      {
        if ( !BYTE2(i[2].Blink) )
        {
          v17 = i[-1].Flink;
          if ( v11 && LODWORD(i[1].Flink) == v10 )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)v17->Blink);
            goto $Done_7;
          }
          if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)v17->Blink) == PreviousDevice )
            v11 = v10;
        }
      }
    }
    goto $Done_7;
  }
  while ( BYTE2(Flink[5].Flink) )
  {
LABEL_9:
    Flink = Flink->Flink;
    if ( Flink == p_m_DescriptionListHead )
      goto LABEL_10;
  }
  Blink = Flink[1].Blink;
  if ( !v11 || !FxDeviceDescriptionEntry::MatchStateToFlags((FxDeviceDescriptionEntry *)Flink, Flags) )
  {
    if ( (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)Blink->Blink) == PreviousDevice )
      v11 = 1;
    goto LABEL_9;
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Blink->Blink);
  if ( !ObjectHandleUnchecked )
  {
LABEL_10:
    v10 = 1;
    goto LABEL_11;
  }
$Done_7:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)ObjectHandleUnchecked;
}
