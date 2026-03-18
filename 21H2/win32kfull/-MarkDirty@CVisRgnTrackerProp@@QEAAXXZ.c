/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C006A698
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this)
{
  struct _LIST_ENTRY *v1; // rax
  struct _LIST_ENTRY *Flink; // rcx

  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v1 = (struct _LIST_ENTRY *)((char *)this + 24);
    Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
      __fastfail(3u);
    v1->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    v1->Blink = &CVisRgnTrackerProp::s_DirtyList;
    Flink->Blink = v1;
    CVisRgnTrackerProp::s_DirtyList.Flink = v1;
  }
}
