/*
 * XREFs of RestoreGammaRamp @ 0x1C011DD60
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C011DB50 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C0028868 (GreSetDeviceGammaRamp.c)
 */

void __fastcall RestoreGammaRamp(unsigned int *a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  HDC v4; // rcx

  for ( i = 0; i < *a1; ++i )
  {
    v3 = 386LL * i;
    v4 = *(HDC *)&a1[v3 + 386];
    if ( v4 )
    {
      GreSetDeviceGammaRamp(v4, &a1[v3 + 388], 0, 1);
      GreDeleteDC(*(_QWORD *)&a1[v3 + 386]);
    }
  }
  Win32FreePool(a1);
}
