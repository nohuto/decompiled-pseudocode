__int64 __fastcall HUBHSM_CancellingInterruptTransferOnSuspend(__int64 a1)
{
  HUBHTX_CancelInterruptTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
