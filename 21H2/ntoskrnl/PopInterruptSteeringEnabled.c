/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1403C1C18
 * Callers:
 *     PpmCheckReInit @ 0x1407BA7E4 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
