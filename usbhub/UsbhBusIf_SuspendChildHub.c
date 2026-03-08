/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C001A0F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0001380 (UsbhUnlatchPdo.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0009B88 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0009CFC (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C000A364 (UsbhSetPdoIdleReady.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(struct _DEVICE_OBJECT *a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  int v6; // ebp
  _DWORD *v7; // rax

  v2 = PdoExt((__int64)a1);
  v3 = *((_QWORD *)v2 + 148);
  FdoExt(v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v4 = UsbhLatchPdo(v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( !v4 )
    return 3221225635LL;
  v5 = PdoExt((__int64)a1);
  v6 = UsbhSyncSuspendPdoPort((__int64)(v5 + 236), (__int64)a1, 0);
  if ( v6 >= 0 )
  {
    UsbhSet_Pdo_Dx(a1, (POWER_STATE)3);
    v7 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, (__int64)a1, (__int64)(v7 + 478));
  }
  UsbhUnlatchPdo(v3, v4, 0LL, 0x48536942u);
  return (unsigned int)v6;
}
