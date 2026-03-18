/*
 * XREFs of ExpCovFreeUnloadedModuleEntry @ 0x140A06484
 * Callers:
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A061A4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140A06408 (ExpCovDeleteUnloadedModuleEntry.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
