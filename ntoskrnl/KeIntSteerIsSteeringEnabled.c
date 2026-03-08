/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x140303194
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x140849CE4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
