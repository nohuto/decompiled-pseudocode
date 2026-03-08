/*
 * XREFs of ExpGetOriginalImageVersion @ 0x14060DBD0
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x140A04604 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
