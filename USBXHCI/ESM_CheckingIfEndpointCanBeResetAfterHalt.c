__int64 __fastcall ESM_CheckingIfEndpointCanBeResetAfterHalt(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( !*(_BYTE *)(v1 + 37) || !Endpoint_AreTransfersPending(*(_QWORD *)(a1 + 960)) )
    return 33LL;
  *(_DWORD *)(v1 + 288) = -1073741823;
  return 21LL;
}
