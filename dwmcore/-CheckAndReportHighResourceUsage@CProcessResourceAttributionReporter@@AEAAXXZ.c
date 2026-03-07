void __fastcall CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(
        CProcessResourceAttributionReporter *this)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp+8h] BYREF

  ListEntry = 0LL;
  v5[0] = off_1802CB170;
  v5[1] = &ListEntry;
  v3 = *((_QWORD *)this + 7);
  v5[7] = v5;
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v3, this, v5);
  if ( ListEntry )
  {
    InterlockedPushEntrySList((PSLIST_HEADER)this + 1, ListEntry);
    ListEntry = 0LL;
    if ( !_InterlockedExchange((volatile __int32 *)this + 16, 1) )
      SubmitThreadpoolWork(*((PTP_WORK *)this + 1));
    if ( ListEntry )
      CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        (CProcessResourceAttributionReporter::HighResourceUsageReport *)ListEntry,
        v4);
  }
}
