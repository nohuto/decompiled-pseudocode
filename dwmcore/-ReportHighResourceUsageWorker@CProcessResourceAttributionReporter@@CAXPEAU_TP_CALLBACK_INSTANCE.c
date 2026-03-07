void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  PSLIST_ENTRY v4; // rdi
  _QWORD *p_Next; // rbp
  struct _SLIST_ENTRY *Next; // rcx

  v4 = InterlockedFlushSList((PSLIST_HEADER)Context + 1);
  while ( v4 )
  {
    p_Next = &v4->Next;
    CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
      (CProcessResourceAttributionReporter *)Context,
      (struct CProcessResourceAttributionReporter::HighResourceUsageReport *)v4);
    Next = v4[1].Next;
    v4 = v4->Next;
    if ( Next )
    {
      std::_Deallocate<16,0>(Next, 8 * ((__int64)(p_Next[4] - (_QWORD)Next) >> 3));
      p_Next[2] = 0LL;
      p_Next[3] = 0LL;
      p_Next[4] = 0LL;
    }
    operator delete(p_Next, 0x30uLL);
  }
  _InterlockedExchange((volatile __int32 *)Context + 16, 0);
}
