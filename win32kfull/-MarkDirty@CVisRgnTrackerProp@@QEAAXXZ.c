/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C007B4F0
 * Callers:
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this)
{
  struct _LIST_ENTRY *v1; // rcx
  struct _LIST_ENTRY *Flink; // rax

  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v1 = (struct _LIST_ENTRY *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
      __fastfail(3u);
    v1->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    v1->Blink = &CVisRgnTrackerProp::s_DirtyList;
    Flink->Blink = v1;
    CVisRgnTrackerProp::s_DirtyList.Flink = v1;
  }
}
