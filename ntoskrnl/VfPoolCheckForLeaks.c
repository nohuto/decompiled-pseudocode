/*
 * XREFs of VfPoolCheckForLeaks @ 0x140AD708C
 * Callers:
 *     VfTargetDriversRemove @ 0x140303260 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 128) || *(_QWORD *)(BugCheckParameter3 + 136)) && (MmVerifierData & 8) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 116) + *(_DWORD *)(BugCheckParameter3 + 112)));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 64));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
