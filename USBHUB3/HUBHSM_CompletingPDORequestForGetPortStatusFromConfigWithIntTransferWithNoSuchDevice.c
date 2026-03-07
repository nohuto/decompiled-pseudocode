__int64 __fastcall HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice(__int64 a1)
{
  HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), 0xC000000E);
  return 2053LL;
}
