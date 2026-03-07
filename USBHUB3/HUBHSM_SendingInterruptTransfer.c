__int64 __fastcall HUBHSM_SendingInterruptTransfer(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_ReleaseWdfPowerReference(v1);
  HUBHTX_SendInterruptTransfer(v1);
  *(_WORD *)(v1 + 52) = 0;
  return 2053LL;
}
