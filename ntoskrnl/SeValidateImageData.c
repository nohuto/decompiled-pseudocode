/*
 * XREFs of SeValidateImageData @ 0x14069F190
 * Callers:
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C375E8 )
    return qword_140C375E8(a1);
  else
    return 3221226536LL;
}
