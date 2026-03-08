/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140956BCC
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x1407F80C0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, __int128 *a2, __int64 a3)
{
  __int64 SessionById; // rax
  __int64 v5; // rdx
  void *v6; // rbx
  unsigned int v9; // [rsp+50h] [rbp+Fh] BYREF
  int v10; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 v12; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v13[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v10 = 0;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = RegRtlQueryValue(Handle, L"PortName", &v10, v13, &v9);
    if ( (int)SessionById >= 0 )
    {
      v12 = *a2;
      if ( a1 == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED, (__int64)&v12);
      }
      else
      {
        SessionById = MmGetSessionById(a1, v5);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED_SESSION, (__int64)&v12);
          LODWORD(SessionById) = ObfDereferenceObject(v6);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
