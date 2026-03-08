/*
 * XREFs of PoFxUnregisterDevice @ 0x140981B50
 * Callers:
 *     DifPoFxUnregisterDeviceWrapper @ 0x1405E7CF0 (DifPoFxUnregisterDeviceWrapper.c)
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x14058779C (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 */

void __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(struct _KEVENT **)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  PopFxDestroyDeviceDpm(v1, a1);
}
