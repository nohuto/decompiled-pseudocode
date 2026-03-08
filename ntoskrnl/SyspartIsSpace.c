/*
 * XREFs of SyspartIsSpace @ 0x140A5C6E8
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x140390584 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14066F1C4 (BiSpacesUpdatePhysicalDevicePath.c)
 * Callees:
 *     SiQueryProperty @ 0x140A5CAC4 (SiQueryProperty.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SyspartIsSpace(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  PVOID v4; // rcx
  unsigned int v5; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0;
  v3 = SiQueryProperty(a1, 0LL, 8LL, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 && *((_DWORD *)P + 7) == 16 )
    *a2 = 1;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
