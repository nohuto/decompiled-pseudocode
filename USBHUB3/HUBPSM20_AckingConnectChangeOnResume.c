__int64 __fastcall HUBPSM20_AckingConnectChangeOnResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  HUBHTX_AckPortChangeUsingControlTransfer(*(_QWORD *)(a1 + 960), a2, a3, a4);
  return 1000LL;
}
