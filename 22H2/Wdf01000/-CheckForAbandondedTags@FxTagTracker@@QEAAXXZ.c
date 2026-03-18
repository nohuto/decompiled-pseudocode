/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005B5F0
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00021D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002940 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0005034 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C005B4C0 (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C005BA0C (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  char v3; // si
  KIRQL v4; // al
  FxTagTrackingBlock *m_Next; // rdi
  KIRQL v6; // r15
  FxTagTrackingBlock *v7; // rcx
  int level; // eax
  const char *globals; // rdx
  void *_a4; // r8
  FxObject *m_OwningObject; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( (this->m_OwningObject->m_ObjectFlags & 8) != 0 )
  {
    v3 = 1;
    if ( this->m_Next || this->m_FailedCount )
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  }
  else
  {
    v3 = 0;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v6 = v4;
  while ( m_Next )
  {
    v7 = m_Next;
    m_Next = m_Next->Next;
    level = v7->Line;
    globals = v7->File;
    _a4 = v7->Tag;
    m_OwningObject = this->m_OwningObject;
    if ( v3 )
    {
      WPP_IFR_SF_qqsd(m_Globals, 2u, (unsigned int)_a4, 0xCu, traceGuid, m_OwningObject, _a4, globals, level);
    }
    else
    {
      v3 = 1;
      WPP_IFR_SF_qqsd(m_Globals, 3u, (unsigned int)_a4, 0xDu, traceGuid, m_OwningObject, _a4, globals, level);
    }
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
}
