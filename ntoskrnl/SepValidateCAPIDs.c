/*
 * XREFs of SepValidateCAPIDs @ 0x1405B75BC
 * Callers:
 *     SeRmReferenceFindCapName @ 0x1405B7318 (SeRmReferenceFindCapName.c)
 * Callees:
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 */

__int64 __fastcall SepValidateCAPIDs(__int64 a1, PSID *a2)
{
  unsigned int v2; // ebx
  int v4; // ebp
  char *v5; // rdi
  int v6; // ecx

  v2 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)*a2;
    if ( !*a2 )
      break;
    if ( !RtlValidSid(*a2) )
      return (unsigned int)-1073741704;
    v6 = *(_DWORD *)(v5 + 2) - CAP_AUTHORITY;
    if ( !v6 )
      v6 = *((unsigned __int16 *)v5 + 3) - 4352;
    if ( v6 )
      return (unsigned int)-1073741692;
    ++v4;
    ++a2;
    if ( v4 )
      return v2;
  }
  return (unsigned int)-1073741811;
}
