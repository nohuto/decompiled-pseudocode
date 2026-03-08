/*
 * XREFs of wcsncmp @ 0x1C00DAD28
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C002EEE8 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00C03A8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
