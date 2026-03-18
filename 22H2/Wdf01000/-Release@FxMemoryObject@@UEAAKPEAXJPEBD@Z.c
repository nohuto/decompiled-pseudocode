/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0004EC0
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x1C001D8F0 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0005034 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00550FC (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int32 v6; // edi
  unsigned __int16 m_ObjectFlags; // ax

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    Flink = this[-1].m_ChildEntry.Flink;
  else
    Flink = 0LL;
  if ( Flink )
    FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  v6 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v6 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, 0xBu);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      FxObject::ProcessDestroy(this);
    }
  }
  return v6;
}
