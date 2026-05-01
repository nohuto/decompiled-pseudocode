/*
 * XREFs of ?GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z @ 0x180253044
 * Callers:
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1802527B8 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(HMONITOR a1, unsigned int a2)
{
  int nNumerator; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)GetDpiForMonitor(a1, 2LL, &nNumerator, &v6) >= 0 || (int)GetDpiForMonitor(a1, 1LL, &nNumerator, &v6) >= 0 )
    return (unsigned int)MulDiv(a2, nNumerator, 96);
  return a2;
}
