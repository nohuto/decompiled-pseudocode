__int64 __fastcall ESM_StoppingEndpoint(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  ++*(_DWORD *)(v1 + 156);
  Endpoint_SM_SendStopEndpointCommand(v1);
  return 1000LL;
}
