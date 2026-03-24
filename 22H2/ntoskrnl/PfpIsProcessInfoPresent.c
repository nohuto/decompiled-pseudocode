/*
 * XREFs of PfpIsProcessInfoPresent @ 0x14026E7E0
 * Callers:
 *     PfpCopyEvent @ 0x140631370 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1406315B0 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 1088) && *(_QWORD *)(a1 + 1128);
}
