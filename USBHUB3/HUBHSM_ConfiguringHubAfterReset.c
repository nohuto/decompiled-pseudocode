__int64 __fastcall HUBHSM_ConfiguringHubAfterReset(__int64 a1)
{
  HUBFDO_LogHubResetRecoveryWasInvoked(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
