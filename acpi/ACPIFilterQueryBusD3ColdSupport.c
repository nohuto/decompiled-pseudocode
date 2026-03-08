/*
 * XREFs of ACPIFilterQueryBusD3ColdSupport @ 0x1C0086F38
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIFilterQueryBusD3ColdSupport(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  struct _DEVICE_OBJECT *v3; // rcx
  __int64 result; // rax
  _QWORD v5[9]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v6[10]; // [rsp+70h] [rbp+7h] BYREF
  char v7; // [rsp+D8h] [rbp+6Fh] BYREF

  v7 = 0;
  memset(v5, 0, sizeof(v5));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  memset(v6, 0, 0x48uLL);
  v3 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 776);
  v5[4] = 0LL;
  v5[1] = &GUID_D3COLD_SUPPORT_INTERFACE;
  LOWORD(v5[0]) = 2075;
  v5[3] = v6;
  LODWORD(v5[2]) = 65608;
  result = ACPIInternalSendSynchronousIrp(v3);
  if ( (int)result >= 0 )
  {
    if ( v6[7] && ((int (__fastcall *)(_QWORD, char *))v6[7])(v6[1], &v7) >= 0 && v7 )
      *(_QWORD *)(DeviceExtension + 1008) |= 0x800uLL;
    result = v6[3];
    if ( v6[3] )
      return ((__int64 (__fastcall *)(_QWORD))v6[3])(v6[1]);
  }
  return result;
}
