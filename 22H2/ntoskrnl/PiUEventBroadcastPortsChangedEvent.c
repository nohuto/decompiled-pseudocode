/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x1408A2BDC
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140773AE0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x1406BA950 (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1406BB0F8 (_RegRtlQueryValue.c)
 */

void __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, __int64 a3)
{
  __int64 v4; // rdx
  struct _DMA_ADAPTER *SessionById; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+Fh] BYREF
  int v8; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v11[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v8 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
  {
    v7 = 32;
    if ( (int)RegRtlQueryValue(Handle, L"PortName", &v8, v11, &v7) >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(ExplicitScope, v4);
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          HalPutDmaAdapter(SessionById);
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
}
