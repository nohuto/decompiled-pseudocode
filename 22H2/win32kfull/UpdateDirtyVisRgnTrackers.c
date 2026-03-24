/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x1C0039300
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C003935C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void UpdateDirtyVisRgnTrackers()
{
  struct _LIST_ENTRY *i; // rbx
  CVisRgnTrackerProp *v1; // rcx

  for ( i = CVisRgnTrackerProp::s_DirtyList.Flink; i != &CVisRgnTrackerProp::s_DirtyList; i = i->Flink )
  {
    if ( i )
      v1 = (CVisRgnTrackerProp *)&i[-1];
    else
      v1 = 0LL;
    CVisRgnTrackerProp::Update(v1);
  }
  CVisRgnTrackerProp::s_DirtyList.Flink = &CVisRgnTrackerProp::s_DirtyList;
  off_1C032A280 = &CVisRgnTrackerProp::s_DirtyList;
}
