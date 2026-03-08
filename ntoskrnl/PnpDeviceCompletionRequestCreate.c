/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x140688CA4
 * Callers:
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140793334 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x14068A5EC (PnpEnableWatchdog.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx

  Pool2 = ExAllocatePool2(64LL, 72LL, 829451856LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 32) = a2;
    *(_DWORD *)(Pool2 + 40) = -1073741595;
    *(_QWORD *)(Pool2 + 64) = PnpEnableWatchdog(2LL, Pool2, a1 + 56);
  }
  return v7;
}
