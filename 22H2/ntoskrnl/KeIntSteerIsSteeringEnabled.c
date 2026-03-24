/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14032D2DC
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF4C4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
