/*
 * XREFs of ?FindFaceName@@YAPEAGK@Z @ 0x1C001EF08
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FindFaceName(int a1)
{
  unsigned int *i; // r8

  for ( i = MAPPER::SignatureTable; ; ++i )
  {
    if ( i >= (unsigned int *)MAPPER::FaceNameTable )
      return (unsigned __int16 *)&word_1C02E3794;
    if ( (unsigned __int16)*i == a1 )
      break;
  }
  return &MAPPER::FaceNameTable[*((unsigned __int16 *)i + 1)];
}
