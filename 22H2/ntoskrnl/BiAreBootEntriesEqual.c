/*
 * XREFs of BiAreBootEntriesEqual @ 0x140A5DA70
 * Callers:
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140A5EF5C (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  v2 = a1[1];
  return v2 == a2[1] && !memcmp(a1, a2, v2);
}
