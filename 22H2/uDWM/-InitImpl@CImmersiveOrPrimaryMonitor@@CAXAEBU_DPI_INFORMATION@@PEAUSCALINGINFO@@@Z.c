/*
 * XREFs of ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18000C7F8
 * Callers:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x18000C740 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800407C4 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1800C14B8 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800C1548 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 */

void __fastcall CImmersiveOrPrimaryMonitor::InitImpl(struct tagSIZE *a1, struct SCALINGINFO *a2)
{
  enum DEVICE_SCALE_FACTOR cy; // eax
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // eax
  int v6; // ecx

  LoadScalingOverrides();
  cy = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride )
  {
    *(_DWORD *)a2 = g_legacyCompatScalingOverride;
  }
  else
  {
    *(_DWORD *)a2 = a1[1].cx;
    cy = a1[1].cy;
  }
  *((_DWORD *)a2 + 2) = cy;
  if ( (unsigned int)QuirkIsEnabled(589832LL) )
  {
    *(_DWORD *)a2 = GetLegacyModernScaleFactor(a1[1].cx);
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(a1[1].cy);
LABEL_10:
    *((_DWORD *)a2 + 2) = LegacyModernScaleFactor;
    goto LABEL_6;
  }
  if ( (unsigned int)QuirkIsEnabled(589831LL) )
  {
    LegacyModernScaleFactor = GetLegacyPhoneScaleFactor(a1[4], a1[5]);
    *(_DWORD *)a2 = LegacyModernScaleFactor;
    goto LABEL_10;
  }
  if ( (unsigned int)QuirkIsEnabled(589834LL) )
  {
    v6 = *(_DWORD *)a2;
    switch ( *(_DWORD *)a2 )
    {
      case 0xAF:
        v6 = 150;
        break;
      case 0xE1:
        v6 = 200;
        break;
      case 0x15E:
        v6 = 300;
        break;
    }
    *(_DWORD *)a2 = v6;
  }
LABEL_6:
  *((_DWORD *)a2 + 3) = (a1[5].cx + a1[5].cy) / 2;
  *((_DWORD *)a2 + 7) = a1[4].cx;
  *((_DWORD *)a2 + 6) = a1[4].cy;
  *((_DWORD *)a2 + 4) = a1[3].cx;
  *((_DWORD *)a2 + 5) = a1[3].cy;
}
