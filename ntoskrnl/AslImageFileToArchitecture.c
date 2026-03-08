/*
 * XREFs of AslImageFileToArchitecture @ 0x140A54B54
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A503E0 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_140C0DE88[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_140C0DE88[2 * v1];
}
