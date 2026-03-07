void FxLibraryCleanup(void)
{
  if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType )
  {
    IoDeleteDevice(*(PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType = 0LL;
  }
  if ( qword_1C009FF58 )
  {
    FxPoolFree((FX_POOL_TRACKER *)qword_1C009FF58);
    qword_1C009FF58 = 0LL;
  }
}
