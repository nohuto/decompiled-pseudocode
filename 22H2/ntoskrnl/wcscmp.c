/*
 * XREFs of wcscmp @ 0x1403D3840
 * Callers:
 *     _CmValidateDeviceContainerName @ 0x14068D4D0 (_CmValidateDeviceContainerName.c)
 *     PiDqDispatch @ 0x1406A79D0 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075875C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x140758E58 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075A16C (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x140796424 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x1409EEAE0 (HdlspAddLogEntry.c)
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
