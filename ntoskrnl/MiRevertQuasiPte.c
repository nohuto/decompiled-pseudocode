/*
 * XREFs of MiRevertQuasiPte @ 0x14064BCFC
 * Callers:
 *     MiUpdateUserMappings @ 0x140AA95F4 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
