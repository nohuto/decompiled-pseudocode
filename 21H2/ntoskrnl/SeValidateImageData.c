/*
 * XREFs of SeValidateImageData @ 0x1405FB0F8
 * Callers:
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1DB08 )
    return qword_140C1DB08(a1);
  else
    return 3221226536LL;
}
