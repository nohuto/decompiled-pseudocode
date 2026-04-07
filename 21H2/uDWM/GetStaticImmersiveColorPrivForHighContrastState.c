/*
 * XREFs of GetStaticImmersiveColorPrivForHighContrastState @ 0x1800C1AF0
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001E320 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B9364 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStaticImmersiveColorPrivForHighContrastState(int a1, char a2)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = -65281;
  if ( (unsigned int)(a1 - 210) <= 0x3F8 )
  {
    v2 = 0;
    if ( a2 )
    {
      v3 = g_ImmersiveHighContrastMappings[a1];
      if ( v3 != 31 )
        return GetSysColor(v3) | 0xFF000000;
    }
    else
    {
      return *(unsigned int *)&aApplicationfra[2 * a1 + 4];
    }
  }
  return v2;
}
