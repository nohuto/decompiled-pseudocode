/*
 * XREFs of PopFxGetDeviceDStateReason @ 0x1402B9BF4
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x1402B90C0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxGetDeviceDStateReason(__int64 a1)
{
  signed __int32 v1; // eax
  unsigned int v2; // r8d
  signed __int32 v3; // ett
  int v4; // edx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // al

  _m_prefetchw((const void *)(a1 + 32));
  v1 = *(_DWORD *)(a1 + 32);
  v2 = 0;
  do
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v1, v1);
  }
  while ( v3 != v1 );
  v4 = v1 & 0x2000;
  _m_prefetchw((const void *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5, v5);
  }
  while ( v6 != v5 );
  v7 = v5 & 1;
  if ( v4 )
    return 2;
  else
    LOBYTE(v2) = v7 != 0;
  return v2;
}
