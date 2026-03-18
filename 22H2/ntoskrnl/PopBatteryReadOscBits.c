/*
 * XREFs of PopBatteryReadOscBits @ 0x140B76714
 * Callers:
 *     PopBatteryInitPhaseTwo @ 0x140B521E0 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x140383B68 (PopReadRegKeyValue.c)
 */

char PopBatteryReadOscBits()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  byte_140C3D2F8 = 0;
  v0 = PopReadRegKeyValue(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
         L"BatteryFeaturesGranted",
         4uLL,
         0,
         &v2);
  if ( v0 >= 0 )
  {
    LOBYTE(v0) = v2 & 1;
    byte_140C3D2F8 = v2 & 1;
  }
  return v0;
}
