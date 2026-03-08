/*
 * XREFs of RtlMapGenericMask @ 0x140773950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
    v2 |= GenericMapping->GenericRead;
  if ( (v2 & 0x40000000) != 0 )
    v2 |= GenericMapping->GenericWrite;
  if ( (v2 & 0x20000000) != 0 )
    v2 |= GenericMapping->GenericExecute;
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
