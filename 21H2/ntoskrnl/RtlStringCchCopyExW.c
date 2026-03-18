/*
 * XREFs of RtlStringCchCopyExW @ 0x1402E0340
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140698FBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406991C8 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140699288 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1406D068C (_CmGetDeviceChildren.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406DBB10 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406DCD40 (PiPnpRtlGetFilteredDeviceList.c)
 *     _RegRtlCreateTreeTransacted @ 0x140772B6C (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14077ED0C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1407886D0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseList @ 0x140788BD4 (DrvDbGetDriverDatabaseList.c)
 *     PiDmGetObjectListCallback @ 0x140788CE0 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140789210 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceInterfaceName @ 0x140789718 (_CmGetDeviceInterfaceName.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14083DA50 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14083DEC8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmEnumSubkeyCallback @ 0x14083E410 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x14084C530 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x14085CCD0 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14094D4C8 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140A28700 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D760 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1402E0480 (RtlStringCopyWorkerW_1.c)
 *     memset @ 0x140435E00 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14055F3E4 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // rsi
  const wchar_t *v12; // rax
  NTSTATUS v13; // eax
  size_t v14; // rcx
  size_t *v16; // [rsp+20h] [rbp-48h]
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = &cchOriginalDestLength;
      if ( pszSrc )
        v12 = pszSrc;
      pszSrc = v12;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength = 0LL;
      v13 = RtlStringCopyWorkerW_1(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
      v14 = pcchNewDestLength;
      v9 = v13;
      v11 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_13;
  }
  return v9;
}
