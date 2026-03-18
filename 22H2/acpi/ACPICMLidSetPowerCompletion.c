/*
 * XREFs of ACPICMLidSetPowerCompletion @ 0x1C00198C0
 * Callers:
 *     ACPICMLidSetPower @ 0x1C0019820 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0016FF4 (ACPIBusIrpSetSystemPower.c)
 *     ACPIButtonEvent @ 0x1C00189F0 (ACPIButtonEvent.c)
 *     ACPICMButtonSetPower @ 0x1C0018C10 (ACPICMButtonSetPower.c)
 */

__int64 __fastcall ACPICMLidSetPowerCompletion(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _DEVICE_OBJECT *v7; // rsi
  __int64 DeviceExtension; // rax
  int v9; // ebp
  int v10; // r15d
  __int64 v11; // r13
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  char v15; // di

  v4 = *(_QWORD *)(a4 + 184);
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 40);
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v7);
  v9 = *(_DWORD *)(v4 + 16);
  v10 = 0;
  *(_DWORD *)(v4 + 16) = 0;
  v11 = DeviceExtension;
  if ( a2 < 0 )
    return ACPIBusIrpSetSystemPower(v7, (PIRP *)a4, v4);
  v13 = (KSPIN_LOCK *)(DeviceExtension + 184);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  v15 = *(_BYTE *)(v11 + 192);
  *(_BYTE *)(v11 + 192) = v9 != 0;
  KeReleaseSpinLock(v13, v14);
  LOBYTE(v10) = v15 != 0;
  if ( (v9 != 0) != v10 )
    ACPIButtonEvent((ULONG_PTR)v7, v9 != 0 ? -2146697216 : 786432);
  return ACPICMButtonSetPower(v7, a4);
}
