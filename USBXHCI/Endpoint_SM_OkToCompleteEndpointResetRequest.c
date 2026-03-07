__int64 __fastcall Endpoint_SM_OkToCompleteEndpointResetRequest(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ett

  _m_prefetchw((const void *)(a1 + 32));
  LODWORD(result) = *(_DWORD *)(a1 + 32);
  do
  {
    v4 = (unsigned int)result;
    LODWORD(v4) = result ^ 0x80;
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), result ^ 0x80, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 0x80u) != 0LL )
    return Endpoint_SM_CompleteResetRequestFromClient(a1, v4, a3);
  return result;
}
