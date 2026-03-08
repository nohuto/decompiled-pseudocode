/*
 * XREFs of ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01CFB00
 * Callers:
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C01FC6D0 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 *     ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C01FC760 (-IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1C01FC930 (-GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C0212560 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 *     ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C0217830 (-GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0218370 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0219220 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C0219520 (-GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z @ 0x1C01CFB98 (-_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z.c)
 */

unsigned __int8 **__fastcall DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  int v4; // esi
  unsigned int v7; // esi
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbx

  *a3 = 0;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v7 = v4 << 7;
    v8 = (unsigned __int8 *)operator new[](v7, 0x4D677844u, 256LL);
    v9 = v8;
    if ( v8 )
    {
      DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(this, v7, a3, v8);
      if ( v7 != *a3 )
        WdLogSingleEntry0(1LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
    *a2 = v9;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
