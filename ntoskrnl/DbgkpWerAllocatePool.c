/*
 * XREFs of DbgkpWerAllocatePool @ 0x1409386C4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerAllocatePool(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1466393156LL);
}
