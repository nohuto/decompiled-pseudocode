/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006970 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C003AD60 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00053A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C0006500 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0041D2C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, void *Tag, int Line, const char *File)
{
  unsigned __int32 v5; // edi
  FxTagTracker *m_Lock; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v5 )
  {
    if ( FxObject::ShouldDeferDisposeLocked(this, 0LL) )
    {
      FxObject::SetObjectStateLocked(this, 0xBu);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      FxObject::ProcessDestroy(this);
    }
  }
  return v5;
}
