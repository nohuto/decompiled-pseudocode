/*
 * XREFs of DpiSessionCreateCallback @ 0x1C01DDB08
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01DDA00 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C02099A0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0217240 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( !_InterlockedCompareExchange(&dword_1C013B4A0, 1, 0) )
  {
    v2 = KeWaitForSingleObject(&stru_1C013B4E8, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      WdLogSingleEntry1(2LL, v2);
      v0 = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
    _InterlockedExchange(&dword_1C013B4A0, 2);
  }
  return v0;
}
