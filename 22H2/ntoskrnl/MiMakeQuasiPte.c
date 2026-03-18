/*
 * XREFs of MiMakeQuasiPte @ 0x14064E2DC
 * Callers:
 *     MiUpdateUserMappings @ 0x140AAC824 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
