/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x140A03794
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A034B4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140A03718 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCovFreeUnloadedModuleEntry(UNICODE_STRING *P)
{
  wchar_t *Buffer; // rcx

  if ( !P )
    return 3221225485LL;
  if ( P[1].Buffer )
    RtlFreeUnicodeString(P + 1);
  if ( P[2].Buffer )
    RtlFreeUnicodeString(P + 2);
  Buffer = P[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
