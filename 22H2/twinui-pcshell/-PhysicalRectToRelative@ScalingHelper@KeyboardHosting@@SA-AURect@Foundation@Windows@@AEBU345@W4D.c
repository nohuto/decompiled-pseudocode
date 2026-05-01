/*
 * XREFs of ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1803D8C70
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1803D7AB0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1803D7BA0 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1803DA59C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float *__fastcall KeyboardHosting::ScalingHelper::PhysicalRectToRelative(float *a1, float *a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v3 = *a2;
  if ( a3 )
  {
    v4 = (float)a3;
    v3 = (float)(v3 * 100.0) / (float)a3;
  }
  else
  {
    v4 = 0.0;
  }
  *a1 = v3;
  v5 = a2[1];
  if ( a3 )
    v5 = (float)(v5 * 100.0) / v4;
  v6 = a2[2];
  a1[1] = v5;
  if ( a3 )
    v6 = (float)(v6 * 100.0) / v4;
  v7 = a2[3];
  a1[2] = v6;
  if ( a3 )
    v7 = (float)(v7 * 100.0) / v4;
  a1[3] = v7;
  return a1;
}
