void UpdateDirtyVisRgnTrackers()
{
  struct _LIST_ENTRY *i; // rbx
  CVisRgnTrackerProp *p_Blink; // rcx

  for ( i = CVisRgnTrackerProp::s_DirtyList.Flink; i != &CVisRgnTrackerProp::s_DirtyList; i = i->Flink )
  {
    if ( i )
      p_Blink = (CVisRgnTrackerProp *)&i[-2].Blink;
    else
      p_Blink = 0LL;
    CVisRgnTrackerProp::Update(p_Blink);
  }
  CVisRgnTrackerProp::s_DirtyList.Flink = &CVisRgnTrackerProp::s_DirtyList;
  off_1C03570D8 = &CVisRgnTrackerProp::s_DirtyList;
}
