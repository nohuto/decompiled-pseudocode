__int64 __fastcall HUBDSM_PurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  **(_BYTE **)(v1 + 16) = 1;
  HUBUCX_PurgeDeviceIoUsingUCXIoctl(v1);
  return 1000LL;
}
