/*
 * XREFs of KeIsApcRunningThread @ 0x14051A740
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x1409DAD80 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
