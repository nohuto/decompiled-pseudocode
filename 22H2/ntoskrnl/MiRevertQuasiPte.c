/*
 * XREFs of MiRevertQuasiPte @ 0x14064E318
 * Callers:
 *     MiUpdateUserMappings @ 0x140AAC824 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
