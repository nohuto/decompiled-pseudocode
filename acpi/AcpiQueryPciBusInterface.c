/*
 * XREFs of AcpiQueryPciBusInterface @ 0x1C008A38C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall AcpiQueryPciBusInterface(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  __int64 Pool2; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int v6; // esi
  __int64 v7; // rcx
  __int32 v8; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v9[9]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[256]; // [rsp+88h] [rbp-80h] BYREF

  v8 = 0;
  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( *(_QWORD *)(DeviceExtension + 80) )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1181770561LL);
  if ( !Pool2 )
    return 3221225626LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 784));
  if ( AttachedDeviceReference )
  {
    LOWORD(v9[0]) = 2075;
    v9[1] = &GUID_BUS_INTERFACE_STANDARD;
    LODWORD(v9[2]) = 65600;
    v9[4] = &v8;
    v9[3] = Pool2;
    v6 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference, (__int64)v9, 0LL);
    ObfDereferenceObject(AttachedDeviceReference);
    if ( v6 >= 0 )
    {
      *(_QWORD *)(DeviceExtension + 80) = Pool2;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x100) == 0 )
      {
        _InterlockedExchange((volatile __int32 *)(DeviceExtension + 100), v8);
        _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x100u);
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int))(Pool2 + 56))(
             *(_QWORD *)(Pool2 + 8),
             0LL,
             v10,
             0LL,
             26) == 26
        && (v10[14] & 0x7F) == 1
        && v10[25] )
      {
        v7 = v10[25] | v8 & 0xFFFF00u;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x200) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(DeviceExtension + 104), v7);
          _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x200u);
        }
        (*(void (__fastcall **)(__int64))(PmHalDispatchTable + 72))(v7);
      }
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = -1073741823;
  }
  ExFreePoolWithTag((PVOID)Pool2, 0x46706341u);
  return (unsigned int)v6;
}
