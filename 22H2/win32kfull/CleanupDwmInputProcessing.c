/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C01357C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void CleanupDwmInputProcessing()
{
  CInputManager::DestroySessionGlobal();
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    Win32FreePool(gpkeDITTouchInjectionResponseEvent);
    gpkeDITTouchInjectionResponseEvent = 0LL;
  }
  if ( ghDITEvent )
  {
    ZwClose(ghDITEvent);
    ghDITEvent = 0LL;
  }
  if ( ghDITRITEvent )
  {
    ZwClose(ghDITRITEvent);
    ghDITRITEvent = 0LL;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    Win32FreePool(gpkeDITMouseInjectionResponseEvent);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0LL;
  }
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
  {
    Win32FreePool(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    Win32FreePool(gpsemDITMouseInjectionWaiters);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
}
