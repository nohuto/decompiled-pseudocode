/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1403B3E68
 * Callers:
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
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
