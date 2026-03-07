__int64 __fastcall HUBHSM_ResettingHubOnResume(__int64 a1)
{
  HUBPARENT_ResetHub(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
