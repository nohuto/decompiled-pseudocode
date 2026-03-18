/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvCleanupOneGraphicsDevice @ 0x1C0069DB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0069E9C (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006A51C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C006AC74 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0170880 (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 DrvAddMirrorDriversToRemoteList(void)
{
  unsigned int v1; // eax
  int v2; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  PVOID v4; // rbx
  __int64 Pool2; // rdi
  unsigned int v6; // r9d
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  NTSTATUS v11; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C8h] BYREF
  PFILE_OBJECT DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A8h] [rbp-60h]
  __int128 v18; // [rsp+B0h] [rbp-58h]
  __int128 v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  PVOID BackTrace[20]; // [rsp+D8h] [rbp-30h] BYREF
  WCHAR SourceString[40]; // [rsp+178h] [rbp+70h] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  v10 = gcRemoteNextMirrorDriverDeviceNumber;
  WdLogSingleEntry0(4LL);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  if ( gpRemoteMirrorGraphicsDevice )
    return 1LL;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.DefaultType = 67108868;
  QueryTable.EntryContext = &v10;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = &v10;
  v16 = 0LL;
  v20 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  v1 = gcRemoteNextMirrorDriverDeviceNumber;
  if ( gcRemoteNextMirrorDriverDeviceNumber > v10 )
  {
LABEL_21:
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    WdLogSingleEntry0(5LL);
    return 1LL;
  }
  while ( 1 )
  {
    v2 = 0;
    DestinationString_8 = 0LL;
    if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", v1) < 0 )
      break;
    RtlInitUnicodeString(&DestinationString_8, SourceString);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString_8, 0, &DestinationString, &DeviceObject);
    v11 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      WdLogSingleEntry1(5LL, DeviceObjectPointer);
      ++gcRemoteNextMirrorDriverDeviceNumber;
    }
    else
    {
      v4 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) == 0x76646747
        && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1986291527 )
        {
          if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_9;
        }
        Pool2 = ExAllocatePool2(260LL, 328LL);
        if ( !Pool2 )
          goto LABEL_20;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v4,
                                  Pool2,
                                  BackTrace) )
          {
LABEL_11:
            *(_DWORD *)(Pool2 + 216) = 0;
            *(_QWORD *)(Pool2 + 224) = 0LL;
            *(_DWORD *)(Pool2 + 260) = 0;
            if ( DeviceObject )
            {
              *(_QWORD *)(Pool2 + 136) = DeviceObject;
              *(_QWORD *)(Pool2 + 232) = DestinationString;
            }
            else
            {
              *(_QWORD *)(Pool2 + 136) = 0LL;
              *(_QWORD *)(Pool2 + 232) = 0LL;
            }
            v6 = gcRemoteNextMirrorDriverDeviceNumber;
            *(_WORD *)(Pool2 + 220) = gProtocolType;
            gcRemoteNextMirrorDriverDeviceNumber = v6 + 1;
            swprintf_s((wchar_t *)Pool2, 0x20uLL, L"\\Device\\Video%d");
            RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                     (unsigned __int16 *)Pool2,
                                                     0,
                                                     0LL,
                                                     0LL,
                                                     0,
                                                     &v11);
            DrvGetDeviceConfigurationInformation((void **)Pool2, RegistryHandleFromDeviceMap, 0);
            ZwClose(RegistryHandleFromDeviceMap);
            v8 = (wchar_t *)(Pool2 + 64);
            if ( (*(_DWORD *)(Pool2 + 160) & 0x200008) == 0x200008 )
            {
              ++gcNextGlobalVirtualOutputNumber;
              swprintf_s(v8, 0x20uLL, L"\\\\.\\DISPLAYV%d");
              v2 = 1;
            }
            else
            {
              ++gcNextGlobalPhysicalOutputNumber;
              swprintf_s(v8, 0x20uLL, L"\\\\.\\DISPLAY%d");
            }
            if ( v11 >= 0 && v2 )
            {
              gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)Pool2;
              DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)Pool2);
              if ( (*(_DWORD *)(Pool2 + 160) & 0x800000) != 0 )
                DrvAddAdapterLuid(*(struct _LUID *)(Pool2 + 248));
            }
            else
            {
              if ( (*(_DWORD *)(Pool2 + 160) & 0x800000) != 0 )
                DrvRemoveAdapterLuid(*(struct _LUID *)(Pool2 + 248));
              DrvCleanupOneGraphicsDevice((_QWORD *)Pool2);
              --gcNextGlobalPhysicalOutputNumber;
            }
            goto LABEL_20;
          }
LABEL_31:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_20;
        }
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v4,
                                 Pool2,
                                 BackTrace) )
          goto LABEL_31;
        Pool2 += 16LL;
      }
      else
      {
LABEL_9:
        Pool2 = ExAllocatePool2(260LL, 312LL);
      }
      if ( Pool2 )
        goto LABEL_11;
    }
LABEL_20:
    v1 = gcRemoteNextMirrorDriverDeviceNumber;
    if ( gcRemoteNextMirrorDriverDeviceNumber > v10 )
      goto LABEL_21;
  }
  WdLogSingleEntry0(5LL);
  return 0LL;
}
