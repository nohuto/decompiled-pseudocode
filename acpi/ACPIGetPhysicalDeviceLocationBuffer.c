/*
 * XREFs of ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0097E38
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00984B0 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 */

__int64 __fastcall ACPIGetPhysicalDeviceLocationBuffer(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // eax

  if ( *(_WORD *)(a1 + 2) != 3 )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < 0x10 )
    return 3221225473LL;
  memmove(a2, *(const void **)(a1 + 32), (-(__int64)(v3 < 0x14) & 0xFFFFFFFFFFFFFFFCuLL) + 20);
  if ( (*(_BYTE *)a2 & 0x7F) == 1 )
    a2[4] = -1;
  return 0LL;
}
