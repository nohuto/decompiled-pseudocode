/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C01A2040
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetPhysicalDeviceRect @ 0x1C01A5E90 (RIMGetPhysicalDeviceRect.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C023FFB0 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
