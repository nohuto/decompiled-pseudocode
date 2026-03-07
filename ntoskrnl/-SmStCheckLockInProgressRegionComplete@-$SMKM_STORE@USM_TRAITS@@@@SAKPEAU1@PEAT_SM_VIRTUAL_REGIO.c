__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 6576) != a2 )
    return 1LL;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 6360, a3) == -1073741536 )
  {
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 1LL;
  }
  return 0LL;
}
