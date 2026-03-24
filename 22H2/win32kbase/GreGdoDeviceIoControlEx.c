/*
 * XREFs of GreGdoDeviceIoControlEx @ 0x1C00C4CB0
 * Callers:
 *     xxxRemoteConnect @ 0x1C0117AB0 (xxxRemoteConnect.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E47C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall GreGdoDeviceIoControlEx(
        struct _DEVICE_OBJECT *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7,
        BOOLEAN a8)
{
  return GreDeviceIoControlImpl(a1, a2, a3, a4, a5, a6, a7, a8, 1);
}
