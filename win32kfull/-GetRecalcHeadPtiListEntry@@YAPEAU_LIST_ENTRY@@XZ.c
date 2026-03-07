struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  __int64 v0; // rcx

  if ( (unsigned int)IsPackedQueueRecalc() )
    return (struct _LIST_ENTRY *)(SGDGetUserSessionState(v0) + 16880);
  else
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 456LL) + 168LL);
}
