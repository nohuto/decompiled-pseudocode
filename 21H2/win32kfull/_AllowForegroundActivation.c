/*
 * XREFs of _AllowForegroundActivation @ 0x1C01D3290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowForegroundActivation(int a1)
{
  gdwPUDFlags |= 0x8000000u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 2, 10, (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
  return 1LL;
}
