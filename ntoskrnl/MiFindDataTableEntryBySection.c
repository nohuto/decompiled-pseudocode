/*
 * XREFs of MiFindDataTableEntryBySection @ 0x1407F6234
 * Callers:
 *     MiObtainSectionForDriver @ 0x14072EE44 (MiObtainSectionForDriver.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 */

PVOID *MiFindDataTableEntryBySection()
{
  PVOID *v0; // r8
  PVOID *v1; // r10
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // r9

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = &PsLoadedModuleList;
  while ( v0 != v1 )
  {
    v2 = (__int64)v0[14];
    if ( v2 )
    {
      v3 = MiSectionControlArea(v2);
      if ( v4 == v3 )
        return v0;
    }
    v0 = (PVOID *)*v0;
  }
  return 0LL;
}
