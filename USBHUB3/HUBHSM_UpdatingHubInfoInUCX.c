__int64 __fastcall HUBHSM_UpdatingHubInfoInUCX(__int64 a1)
{
  HUBUCX_UpdateHubInformationUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
