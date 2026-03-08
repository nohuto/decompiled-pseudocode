/*
 * XREFs of HalpAcpiDetectPiix4Work @ 0x140801C80
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 */

__int64 __fastcall HalpAcpiDetectPiix4Work(__int64 a1)
{
  __int64 v1; // rcx

  HalpMmAllocCtxFree(a1, a1);
  LOBYTE(v1) = 1;
  return HalpPiix4Detect(v1);
}
