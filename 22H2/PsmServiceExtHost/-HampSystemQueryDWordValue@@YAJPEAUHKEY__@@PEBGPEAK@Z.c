/*
 * XREFs of ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180041DF4
 * Callers:
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180041BFC (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180029018 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 */

LSTATUS __fastcall HampSystemQueryDWordValue(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  LSTATUS result; // eax
  unsigned int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 4;
  result = HampSystemQueryValue(a1, a2, (BYTE *)v5, &v6);
  if ( result >= 0 )
  {
    if ( v6 == 4 )
    {
      *a3 = v5[0];
      return 0;
    }
    else
    {
      return -1073739509;
    }
  }
  return result;
}
