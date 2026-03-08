/*
 * XREFs of ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C0089CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 */

FxSyncRequest *__fastcall FxSyncRequest::`scalar deleting destructor'(FxSyncRequest *this, char a2)
{
  FxSyncRequest *v4; // rcx

  FxSyncRequest::~FxSyncRequest(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxSyncRequest *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
