/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C01804F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetPhysicalDeviceRect @ 0x1C01840C0 (RIMGetPhysicalDeviceRect.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0209104 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
