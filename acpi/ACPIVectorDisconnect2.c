/*
 * XREFs of ACPIVectorDisconnect2 @ 0x1C0044160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0044040 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIVectorDisconnect2(__int64 a1, char *a2)
{
  return ACPIVectorDisconnect(a2);
}
