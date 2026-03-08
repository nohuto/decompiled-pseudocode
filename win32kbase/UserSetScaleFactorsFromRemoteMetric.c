/*
 * XREFs of UserSetScaleFactorsFromRemoteMetric @ 0x1C00D3C50
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

void *__fastcall UserSetScaleFactorsFromRemoteMetric(int a1)
{
  void *result; // rax

  result = gpsi;
  if ( a1 )
    *((_DWORD *)gpsi + 559) |= 0x40u;
  else
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  return result;
}
