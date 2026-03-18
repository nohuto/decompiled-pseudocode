/*
 * XREFs of RtlStringCchCopyExW @ 0x14022B258
 * Callers:
 *     PiDmGetObjectListCallback @ 0x1406CB690 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF54C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797F40 (_RegRtlCreateTreeTransacted.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140798EF8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x14079A844 (_CmGetDeviceParent.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1407C5E58 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5F48 (_CmGetDeviceInterfaceName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1407FC18C (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082BD40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14082C03C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082C4E0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082C810 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082CAC0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmGetDeviceChildren @ 0x14083AE90 (_CmGetDeviceChildren.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14083BD54 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmClassSubkeyCallback @ 0x140843910 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x14085A880 (_PnpObjectListCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408769B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseList @ 0x140877AAC (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140877C68 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140877EC4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969C6C (PiCMGenerateDeviceInstance.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AC0C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C580 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14022B390 (RtlStringCopyWorkerW.c)
 *     memset @ 0x140435400 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14055F878 (StringExHandleOtherFlagsW.c)
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
