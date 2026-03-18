/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14036EB44
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14084D474 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
