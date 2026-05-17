/*
 * XREFs of _strset_s @ 0x180097610
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008C838 (_invalid_parameter.c)
 */

errno_t __cdecl strset_s(char *Destination, size_t DestinationSize, int Value)
{
  char *i; // rax

  if ( !Destination || !DestinationSize )
    goto LABEL_8;
  for ( i = Destination; *i; *i++ = Value )
  {
    if ( !--DestinationSize )
      break;
  }
  if ( !DestinationSize )
  {
    *Destination = 0;
LABEL_8:
    invalid_parameter();
    return 22;
  }
  return 0;
}
