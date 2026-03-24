/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C0188F90
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C014BAF4 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017C358 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0185C24 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C018850C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0188BC8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C01984F0 (DpiFdoHandleStartDevice.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C02A9B84 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C02B0388 (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C02C74F0 (DpiQueryAdapterRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01890E0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *PoolWithTag; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  size_t v19; // r8
  __int64 v20; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    LODWORD(a1) = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( (int)a1 >= 0 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      a1 = v13;
      if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
      {
        v18 = PoolWithTag[2];
        v19 = a4;
        if ( a4 > v18 )
          v19 = v18;
        memmove(a3, PoolWithTag + 3, v19);
        v20 = (unsigned int)PoolWithTag[2];
        if ( a4 > (unsigned int)v20 )
          memset(&a3[v20], 0, a4 - (unsigned int)v20);
        LODWORD(a1) = 0;
      }
      else
      {
        v15 = WdLogNewEntry5_WdEvent(0x80000000LL, v14);
        *(_QWORD *)(v15 + 32) = (int)a5;
        *(_QWORD *)(v15 + 24) = a1;
        *(_OWORD *)(v15 + 40) = 0LL;
        WdLogEvent5_WdEvent(v15);
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    LODWORD(a1) = -1073741801;
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)a1;
}
