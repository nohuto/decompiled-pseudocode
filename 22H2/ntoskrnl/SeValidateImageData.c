/*
 * XREFs of SeValidateImageData @ 0x140680358
 * Callers:
 *     MiValidateInPage @ 0x14023AEE0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140680124 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1DB08 )
    return qword_140C1DB08(a1);
  else
    return 3221226536LL;
}
