/*
 * XREFs of SeValidateImageData @ 0x1406F363C
 * Callers:
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1B8C8 )
    return qword_140C1B8C8(a1);
  else
    return 3221226536LL;
}
