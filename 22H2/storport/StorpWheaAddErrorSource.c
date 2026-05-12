/*
 * XREFs of StorpWheaAddErrorSource @ 0x1C007B094
 * Callers:
 *     DllInitialize @ 0x1C004C5A0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_1C0069094 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
