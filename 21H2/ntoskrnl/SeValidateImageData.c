/*
 * XREFs of SeValidateImageData @ 0x14069BF38
 * Callers:
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140C1DAE8 )
    return qword_140C1DAE8(a1);
  else
    return 3221226536LL;
}
