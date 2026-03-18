/*
 * XREFs of PipFreeBindingRequestEntry @ 0x14095477C
 * Callers:
 *     PipFreeDependencyEdge @ 0x14055FC7C (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x140839C0C (PipAddRequestToEdge.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingRequestEntry(PVOID P)
{
  UNICODE_STRING *v2; // rcx

  if ( *((_DWORD *)P + 4) == 1 )
  {
    v2 = (UNICODE_STRING *)*((_QWORD *)P + 3);
    if ( v2 )
    {
      RtlFreeUnicodeString(v2);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x53706E50u);
      *((_QWORD *)P + 3) = 0LL;
    }
  }
  ExFreePoolWithTag(P, 0x53706E50u);
}
