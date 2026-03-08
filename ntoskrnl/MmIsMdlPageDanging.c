/*
 * XREFs of MmIsMdlPageDanging @ 0x140621470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmIsMdlPageDanging(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  unsigned __int16 v3; // ax

  v1 = 48 * a1;
  if ( a1 > qword_140C65820 || ((*(_QWORD *)(v1 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    NT_ASSERT("MiIsPfn (PageFrameIndex)");
  v2 = 0;
  if ( (*(_QWORD *)(v1 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    NT_ASSERT("((Pfn1)->u2.ShareCount) == 1");
  if ( (*(_BYTE *)(v1 - 0x220000000000LL + 34) & 7) != 6
    || (*(_QWORD *)(v1 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
  {
    NT_ASSERT(
      "((((Pfn1)->u2.ShareCount) != 0) && (Pfn1->u3.e1.PageLocation == ActiveAndValid) && ((Pfn1->u4.PteFrame == (((((PFN"
      "_NUMBER) 1) << (50 - 12)) - 1) - 1))))");
  }
  v3 = *(_WORD *)(v1 - 0x220000000000LL + 32);
  if ( v3 < 2u )
    NT_ASSERT("Pfn1->u3.e2.ReferenceCount >= 2");
  LOBYTE(v2) = v3 > 2u;
  return v2;
}
