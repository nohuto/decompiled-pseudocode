/*
 * XREFs of PopInterruptSteeringEnabled @ 0x14038E288
 * Callers:
 *     PpmCheckReInit @ 0x1408265CC (PpmCheckReInit.c)
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
