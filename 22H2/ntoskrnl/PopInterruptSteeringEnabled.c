/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140390748
 * Callers:
 *     PpmCheckReInit @ 0x14082E63C (PpmCheckReInit.c)
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
