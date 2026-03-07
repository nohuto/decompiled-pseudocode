_UNKNOWN **__fastcall ACPIAssert(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **result; // rax

  if ( !a1 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_LLss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  }
  return result;
}
