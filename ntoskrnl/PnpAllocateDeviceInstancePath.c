/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x14081D188
 * Callers:
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  __int64 Pool2; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  Pool2 = ExAllocatePool2(64LL, a2, 1232105040LL);
  *(_QWORD *)(a1 + 48) = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
