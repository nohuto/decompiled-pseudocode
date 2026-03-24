/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00C3560
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001F350 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001BCCC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C007E954 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C007EA40 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C007EAF4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AE020 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0143C20 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int i; // eax
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  unsigned int v13; // r9d
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS DeviceObjectPointer; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C8h] BYREF
  PFILE_OBJECT DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A8h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-58h]
  __int128 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  WCHAR SourceString[40]; // [rsp+D8h] [rbp-30h] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  DeviceObjectPointer = 0;
  v19 = gcRemoteNextMirrorDriverDeviceNumber;
  v1 = WdLogNewEntry5_WdEvent(a1);
  WdLogEvent5_WdEvent(v1);
  v3 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
  {
LABEL_2:
    v4 = WdLogNewEntry5_WdTrace(v3, v2);
    WdLogEvent5_WdTrace(v4);
    return 0LL;
  }
  if ( !gpRemoteMirrorGraphicsDevice )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 67108868;
    QueryTable.EntryContext = &v19;
    v24 = 0LL;
    QueryTable.DefaultData = &v19;
    QueryTable.DefaultLength = 4;
    v28 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    for ( i = gcRemoteNextMirrorDriverDeviceNumber;
          gcRemoteNextMirrorDriverDeviceNumber <= v19;
          i = gcRemoteNextMirrorDriverDeviceNumber )
    {
      v9 = 0;
      DestinationString_8 = 0LL;
      if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", i) < 0 )
        goto LABEL_2;
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString_8, 0, &DestinationString, &DeviceObject);
      if ( DeviceObjectPointer < 0 )
      {
        v17 = WdLogNewEntry5_WdTrace(v11, v10);
        *(_QWORD *)(v17 + 24) = DeviceObjectPointer;
        WdLogEvent5_WdTrace(v17);
        ++gcRemoteNextMirrorDriverDeviceNumber;
      }
      else
      {
        v12 = (char *)PALLOCMEM2(0x138uLL, 1986291527LL, 1);
        if ( v12 )
        {
          *((_DWORD *)v12 + 54) = 0;
          *((_QWORD *)v12 + 28) = 0LL;
          *((_DWORD *)v12 + 65) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v12 + 17) = DeviceObject;
            *((_QWORD *)v12 + 29) = DestinationString;
          }
          else
          {
            *((_QWORD *)v12 + 17) = 0LL;
            *((_QWORD *)v12 + 29) = 0LL;
          }
          v13 = gcRemoteNextMirrorDriverDeviceNumber;
          *((_WORD *)v12 + 110) = gProtocolType;
          gcRemoteNextMirrorDriverDeviceNumber = v13 + 1;
          swprintf_s((wchar_t *)v12, 0x20uLL, L"\\Device\\Video%d");
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v12,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &DeviceObjectPointer);
          DrvGetDeviceConfigurationInformation(v12, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v15 = (wchar_t *)(v12 + 64);
          if ( (*((_DWORD *)v12 + 40) & 0x200008) == 0x200008 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAYV%d");
            v9 = 1;
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          if ( DeviceObjectPointer >= 0 && v9 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v12;
            DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)v12);
            if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v12 + 248));
          }
          else
          {
            if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v12 + 248));
            DrvCleanupOneGraphicsDevice((__int64)v12);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
    }
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    v16 = WdLogNewEntry5_WdTrace(v7, v6);
    WdLogEvent5_WdTrace(v16);
  }
  return 1LL;
}
