/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0122790
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C00A08E4 (ReadPointerDeviceSettingsFull.c)
 *     GetPenHoldTime @ 0x1C02111C0 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0326038, 8LL) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
