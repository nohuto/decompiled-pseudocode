/*
 * XREFs of EngSecureMem @ 0x1C014B370
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB2F0 (GrepSecureVirtualMemory.c)
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
    return GrepSecureVirtualMemory(Address, cjLength, 4u);
  else
    return MmSecureVirtualMemory(Address, cjLength, 4u);
}
