void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  if ( a2 )
  {
    ExFreeToPagedLookasideList(this + 12, a2);
  }
  else
  {
    WdLogSingleEntry1(1LL, 4780LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker", 4780LL, 0LL, 0LL, 0LL, 0LL);
  }
}
