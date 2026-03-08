/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406824BC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpIrpQueryCapabilities @ 0x140682520 (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x140684D74 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[64]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
