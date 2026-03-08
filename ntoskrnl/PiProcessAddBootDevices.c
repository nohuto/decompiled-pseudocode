/*
 * XREFs of PiProcessAddBootDevices @ 0x1408519D0
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x140B67204 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x140291E3C (PoFxPrepareDevice.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PiProcessAddBootDevices(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v2 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v2 + 300) == 772 && (*(_DWORD *)(v2 + 396) & 0x6002) == 0 && !*(_QWORD *)(v2 + 432) )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    BYTE4(v4) = PnPBootDriversInitialized;
    if ( (int)PipCallDriverAddDevice(v2, (__int64)&v4) >= 0 )
      PoFxPrepareDevice(v2, 0);
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
  return 0LL;
}
