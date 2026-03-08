/*
 * XREFs of MiHyperPage @ 0x1403B6DD0
 * Callers:
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiActivePageClaimCandidate @ 0x1403B68D8 (MiActivePageClaimCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHyperPage(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdx
  int v4; // r9d

  v1 = (((unsigned __int64)qword_140C6A1D8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v4 = 0;
  while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v3 >= v1 && v3 <= (((unsigned __int64)qword_140C66CF0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      return (unsigned int)(v4 != 0) + 1;
    ++v4;
    v3 = (__int64)(v3 << 25) >> 16;
    v1 &= 0xFFFFFFFFFFFFF000uLL;
  }
  return v2;
}
