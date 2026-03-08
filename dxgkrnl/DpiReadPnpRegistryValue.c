/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C01F1618
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01F120C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C02067E8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C021A664 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C02FDE7C (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C031CB78 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C0394FE4 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01F1750 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  unsigned int *Pool2; // rsi
  int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v12; // rbx
  size_t v13; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, a4 + 16, 1953656900LL);
  if ( Pool2 )
  {
    v9 = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( v9 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v9 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v12 = Pool2[2];
        v13 = a4;
        if ( a4 > (unsigned int)v12 )
          v13 = (unsigned int)v12;
        memmove(a3, Pool2 + 3, v13);
        if ( a4 > (unsigned int)v12 )
          memset(&a3[v12], 0, a4 - (unsigned int)v12);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry4(4LL, v10, (int)a5, 0LL, 0LL);
      }
    }
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
