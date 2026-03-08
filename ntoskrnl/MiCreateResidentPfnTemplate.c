/*
 * XREFs of MiCreateResidentPfnTemplate @ 0x140B7089C
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCreateResidentPfnTemplate(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 34) = 6;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0x3F | 0x40;
  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v2 | 0x40000000000000LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_WORD *)(a1 + 32) = 2;
  result = 0x40010000000000LL;
  *(_QWORD *)(a1 + 40) = v2 | 0x40010000000000LL;
  return result;
}
