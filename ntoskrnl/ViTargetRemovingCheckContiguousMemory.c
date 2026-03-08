/*
 * XREFs of ViTargetRemovingCheckContiguousMemory @ 0x140AC8C50
 * Callers:
 *     VfTargetDriversRemove @ 0x140303260 (VfTargetDriversRemove.c)
 * Callees:
 *     VfUtilFreePoolDispatchLevel @ 0x1405CBF00 (VfUtilFreePoolDispatchLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViTargetRemovingCheckContiguousMemory(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  struct _SLIST_ENTRY **v2; // rbx
  struct _SLIST_ENTRY *v3; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v5; // rax

  v2 = (struct _SLIST_ENTRY **)(BugCheckParameter3 + 264);
  if ( (MmVerifierData & 0x800) != 0 && *v2 != (struct _SLIST_ENTRY *)v2 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      *(_QWORD *)(BugCheckParameter3 + 248));
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _SLIST_ENTRY *)v2 )
      break;
    Next = v3->Next;
    if ( *(&v3->Next->Next + 1) != v3 || (v5 = (struct _SLIST_ENTRY **)*((_QWORD *)&v3->Next + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = Next;
    *((_QWORD *)&Next->Next + 1) = v5;
    VfUtilFreePoolDispatchLevel(v3);
  }
}
