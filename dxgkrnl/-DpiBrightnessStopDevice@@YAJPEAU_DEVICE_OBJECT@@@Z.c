/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C039DAC8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // r14d
  __int16 v4; // cx
  void (__fastcall *v5)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2340) )
  {
    KeWaitForSingleObject(DeviceExtension + 4408, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 >= 0 || !DeviceExtension[1162] )
    {
      v4 = *((_WORD *)DeviceExtension + 2341);
      if ( v4 == 2 || v4 == 3 )
      {
        v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 588);
        if ( v5 )
          v5(*((_QWORD *)DeviceExtension + 586));
      }
    }
    memset(DeviceExtension + 4680, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4408), 0);
  }
  return 0LL;
}
