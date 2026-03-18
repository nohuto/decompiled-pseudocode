/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C0174E60
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetPhysicalDeviceRect @ 0x1C0178980 (RIMGetPhysicalDeviceRect.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0206B8C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
