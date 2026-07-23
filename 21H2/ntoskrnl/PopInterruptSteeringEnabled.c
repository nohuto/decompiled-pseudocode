/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1403C2048
 * Callers:
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
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
