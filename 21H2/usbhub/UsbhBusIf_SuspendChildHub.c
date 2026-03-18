/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C00014F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhSetPdoIdleReady @ 0x1C0004C18 (UsbhSetPdoIdleReady.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000AFE0 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000EC40 (UsbhSyncSuspendPdoPort.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax

  v2 = PdoExt(a1);
  v3 = *(_QWORD *)(v2 + 1184);
  FdoExt(v3);
  if ( (*(_DWORD *)(v2 + 1420) & 4) == 0 )
    return 3221225473LL;
  v4 = UsbhLatchPdo(v3, *(unsigned __int16 *)(v2 + 1428), 0LL, 1213425986LL);
  if ( !v4 )
    return 3221225635LL;
  v5 = PdoExt(a1);
  v6 = UsbhSyncSuspendPdoPort(v5 + 944, a1, 0LL);
  if ( v6 >= 0 )
  {
    UsbhSet_Pdo_Dx(a1, 3LL);
    v7 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, a1, v7 + 1912);
  }
  UsbhUnlatchPdo(v3, v4, 0LL, 1213425986LL);
  return (unsigned int)v6;
}
