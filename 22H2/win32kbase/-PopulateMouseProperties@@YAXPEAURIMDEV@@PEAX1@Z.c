/*
 * XREFs of ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1C00CC878
 * Callers:
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C00CC988 (RIMPopulateExtendedMouseDeviceProperties.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C006D120 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 */

void __fastcall PopulateMouseProperties(struct RIMDEV *a1, void *a2, void *a3)
{
  int v4; // ebx
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( ReadDevicePropertyFromRegistry(L"ForceVirtualDesktop", a2, a3, 0, &v5) )
  {
    LOBYTE(v4) = v5 != 0;
    *((_DWORD *)a1 + 228) = v4 | *((_DWORD *)a1 + 228) & 0xFFFFFFFE;
  }
}
