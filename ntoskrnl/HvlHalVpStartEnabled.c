/*
 * XREFs of HvlHalVpStartEnabled @ 0x140542280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlHalVpStartEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlVpStartDisabled )
    return (HvlEnlightenments & 0x8000) != 0;
  return v0;
}
