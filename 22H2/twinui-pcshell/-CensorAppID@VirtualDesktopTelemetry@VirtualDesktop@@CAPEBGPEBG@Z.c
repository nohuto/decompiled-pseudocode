/*
 * XREFs of ?CensorAppID@VirtualDesktopTelemetry@VirtualDesktop@@CAPEBGPEBG@Z @ 0x180464420
 * Callers:
 *     ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x18046A12C (-ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppClo.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x18046B578 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804AC30C (-Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1804B6C38 (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
 *     ?Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804B7008 (-Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1804B7454 (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 *     ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804B7820 (-Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplic.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall VirtualDesktop::VirtualDesktopTelemetry::CensorAppID(LPCWSTR pszPath)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v1;
}
