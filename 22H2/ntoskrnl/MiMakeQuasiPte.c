/*
 * XREFs of MiMakeQuasiPte @ 0x14032D1C4
 * Callers:
 *     MiUpdateUserMappings @ 0x140995638 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
