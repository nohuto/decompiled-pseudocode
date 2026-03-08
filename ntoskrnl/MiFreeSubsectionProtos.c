/*
 * XREFs of MiFreeSubsectionProtos @ 0x14075C87C
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(char **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(char **)v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
