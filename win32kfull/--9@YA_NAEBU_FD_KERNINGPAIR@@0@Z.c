/*
 * XREFs of ??9@YA_NAEBU_FD_KERNINGPAIR@@0@Z @ 0x1C02BA028
 * Callers:
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C02BA63C (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_WORD *a1, _WORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
