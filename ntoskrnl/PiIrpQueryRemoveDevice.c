/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x14096A1AC
 * Callers:
 *     PnpDisableDevice @ 0x1409559A8 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409561C8 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PnpFindMountableDevice @ 0x1403B20FC (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1403CF1B8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403CF5C0 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403CFA9C (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403D162C (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpAsynchronousCall @ 0x1406885F8 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  PVOID v7; // rsi
  __int64 v9; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+5Ch] [rbp-5h]
  PVOID Object[2]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v14[72]; // [rsp+70h] [rbp+Fh] BYREF

  v12 = 0;
  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(v14, 0, sizeof(v14));
  *(_WORD *)v14 = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v4 = 1;
    PnpLockMountableDevice(DeviceObject);
    v5 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)Object);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v9 = 0LL;
  v11 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, (__int128 *)v14, (IO_COMPLETION_ROUTINE *)PnpDiagnosticCompletionRoutine, &v9);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v11;
  }
  if ( a2 )
    *a2 = v9;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v7 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1]);
      ObfDereferenceObject(v7);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
