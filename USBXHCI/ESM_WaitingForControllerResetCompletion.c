__int64 __fastcall ESM_WaitingForControllerResetCompletion(__int64 a1, __int64 a2, int a3)
{
  Endpoint_SM_OkToCompleteEndpointResetRequest(*(_QWORD *)(a1 + 960), a2, a3);
  return 1000LL;
}
