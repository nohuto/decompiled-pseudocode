/*
 * XREFs of wcscmp @ 0x1403D40B0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _CmValidateDeviceContainerName @ 0x1406084A0 (_CmValidateDeviceContainerName.c)
 *     PiDqDispatch @ 0x140623C70 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075912C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcContainerRequiresConfiguration @ 0x140759828 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x1409EFAE0 (HdlspAddLogEntry.c)
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
