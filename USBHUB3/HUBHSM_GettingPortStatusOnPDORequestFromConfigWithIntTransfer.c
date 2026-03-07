__int64 __fastcall HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer(__int64 a1)
{
  HUBHTX_GetRequestedPortStatusUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
