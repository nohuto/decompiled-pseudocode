/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C006E774
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0056ECC (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006E540 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C006EBA0 (RIMGetQDCActivePathsData.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155790 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160080 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0164500 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167888 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall RIMFreeQDCActivePathsData(__int64 a1)
{
  __int64 v2; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      Win32FreePool(v2);
    *(_OWORD *)a1 = 0LL;
  }
}
