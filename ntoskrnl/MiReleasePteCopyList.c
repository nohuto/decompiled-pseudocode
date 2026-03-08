/*
 * XREFs of MiReleasePteCopyList @ 0x14065EA2C
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140C695C0, *(__int64 **)(a1 + 16), v1);
  return result;
}
