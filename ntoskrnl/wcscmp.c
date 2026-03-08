/*
 * XREFs of wcscmp @ 0x1403D5DD0
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x1406C3EDC (_CmValidateDeviceContainerName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDqDispatch @ 0x140745C20 (PiDqDispatch.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 *     PiDcContainerRequiresConfiguration @ 0x1408793AC (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x140AE6B20 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
