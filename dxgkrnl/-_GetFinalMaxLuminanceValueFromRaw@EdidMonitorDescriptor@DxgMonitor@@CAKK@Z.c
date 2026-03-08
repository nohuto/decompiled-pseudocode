/*
 * XREFs of ?_GetFinalMaxLuminanceValueFromRaw@EdidMonitorDescriptor@DxgMonitor@@CAKK@Z @ 0x1C03CB818
 * Callers:
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C01FC6D0 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_GetFinalMaxLuminanceValueFromRaw(unsigned int a1)
{
  __int64 result; // rax
  double v2; // xmm0_8
  __int64 v3; // rax

  result = 0LL;
  if ( a1 )
  {
    v2 = (double)(int)(1LL << (a1 >> 5));
    if ( (a1 & 0x1F) != 0 )
    {
      v3 = a1 & 0x1F;
      do
      {
        v2 = v2 * 1.021900057792664;
        --v3;
      }
      while ( v3 );
    }
    return (unsigned int)(int)(v2 * 50.0 * 10000.0);
  }
  return result;
}
