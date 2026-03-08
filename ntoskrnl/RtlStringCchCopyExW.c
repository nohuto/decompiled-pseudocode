/*
 * XREFs of RtlStringCchCopyExW @ 0x140244A08
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140687B40 (_RegRtlCreateTreeTransacted.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceName @ 0x1406C54F8 (_CmGetDeviceInterfaceName.c)
 *     PiDmGetObjectListCallback @ 0x1406C77F0 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceParent @ 0x1406C7D1C (_CmGetDeviceParent.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406D208C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140777284 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14078A594 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14078E658 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140823CD0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140823FCC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140824470 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1408247A0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmGetDeviceChildren @ 0x140839DE0 (_CmGetDeviceChildren.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083AA64 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmClassSubkeyCallback @ 0x1408412C0 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140856BA0 (_PnpObjectListCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseList @ 0x14086607C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140866238 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140866494 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095C778 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     _RegRtlDeletePathInternal @ 0x140A67F0C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6832C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A69880 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x140244B40 (RtlStringCopyWorkerW.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14055D3D8 (StringExHandleOtherFlagsW.c)
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
      v12 = (const wchar_t *)&cchOriginalDestLength;
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
      v13 = RtlStringCopyWorkerW(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
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
