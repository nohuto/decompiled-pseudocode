/*
 * XREFs of SmStorePhysicalRequestIssue @ 0x1409D4DC0
 * Callers:
 *     SmStoreCreate @ 0x1409D4C2C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D4D34 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D4F20 (SmStoreResize.c)
 * Callees:
 *     IoInitializeIrp @ 0x1402CABC0 (IoInitializeIrp.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 */

__int64 __fastcall SmStorePhysicalRequestIssue(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  USHORT v20; // dx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  unsigned int v25; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp+0h] BYREF
  __int64 v28; // [rsp+48h] [rbp+18h]
  __int64 savedregs; // [rsp+60h] [rbp+30h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+38h]

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v20 = 72 * DeviceObject->StackSize + 208;
  v21 = v20 + 15LL;
  if ( v21 <= v20 )
    v21 = 0xFFFFFFFFFFFFFF0LL;
  v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
  v23 = alloca(v22);
  v24 = alloca(v22);
  IoInitializeIrp((PIRP)&Event, v20, DeviceObject->StackSize);
  v28 = a3;
  *(_QWORD *)(a16 - 16) = SmKmGenericCompletion;
  *(_QWORD *)(a16 - 8) = &Event;
  *(_BYTE *)(a16 - 69) = -32;
  *(_BYTE *)(a16 - 72) = 14;
  *(_QWORD *)(a16 - 32) = DeviceObject;
  *(_DWORD *)(a16 - 48) = a2;
  *(_DWORD *)(a16 - 56) = a4;
  *(_DWORD *)(a16 - 64) = a5;
  v25 = IofCallDriver(DeviceObject, (PIRP)&Event);
  if ( v25 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v25 = savedregs;
  }
  *a6 = retaddr;
  return v25;
}
