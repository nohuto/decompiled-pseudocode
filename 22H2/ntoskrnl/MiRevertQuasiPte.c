/*
 * XREFs of MiRevertQuasiPte @ 0x14032D1B0
 * Callers:
 *     MiUpdateUserMappings @ 0x140995638 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
