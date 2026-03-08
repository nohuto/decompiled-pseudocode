/*
 * XREFs of PiIommuFreeExtension @ 0x14086135C
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x1407F8E3C (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140840F4C (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx

  if ( (*(_BYTE *)(BugCheckParameter2 + 16) & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, *(unsigned __int16 *)(BugCheckParameter2 + 16), 0x1001uLL);
  v2 = *(void **)BugCheckParameter2;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)BugCheckParameter2 = 0LL;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0x64706E50u);
}
