/*
 * XREFs of PspSetJobIoAttributionProcessCallback @ 0x14079ABB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetDiskIoAttributionOnProcess @ 0x140295634 (IoSetDiskIoAttributionOnProcess.c)
 */

__int64 __fastcall PspSetJobIoAttributionProcessCallback(__int64 a1, __int64 *a2)
{
  IoSetDiskIoAttributionOnProcess(*a2, a1);
  return 0LL;
}
