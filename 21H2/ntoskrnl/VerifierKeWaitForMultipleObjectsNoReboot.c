/*
 * XREFs of VerifierKeWaitForMultipleObjectsNoReboot @ 0x1409DC9C0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeWaitForMultipleObjectsCommon @ 0x1409DD470 (ViKeWaitForMultipleObjectsCommon.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjectsNoReboot(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return ViKeWaitForMultipleObjectsCommon(a1, a2, a3, a4, a5, a6, a7, a8);
}
