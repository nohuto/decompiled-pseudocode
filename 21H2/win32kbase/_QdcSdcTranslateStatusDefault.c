/*
 * XREFs of _QdcSdcTranslateStatusDefault @ 0x1C00705D8
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C006FF40 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C0070110 (NtUserQueryDisplayConfig.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00705AC (_DeviceInfoTranslateStatusDefault.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QdcSdcTranslateStatusDefault(int a1)
{
  if ( a1 < 0
    && a1 != -1073741811
    && a1 != -1073741790
    && a1 != -1073741801
    && a1 != -1073741776
    && a1 != -1073741637
    && (a1 <= -1073741586 || a1 > -1073741574) )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)a1;
}
