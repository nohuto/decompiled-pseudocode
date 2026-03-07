__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  int v4; // r15d
  NTSTATUS DeviceObjectPointer; // eax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rbx
  int v7; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v10; // rcx
  _QWORD *Pool2; // rax
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned int v14; // [rsp+38h] [rbp-D0h] BYREF
  NTSTATUS v15; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-28h]
  __int128 v28; // [rsp+F0h] [rbp-18h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  PVOID BackTrace[20]; // [rsp+108h] [rbp+0h] BYREF
  WCHAR SourceString[40]; // [rsp+1A8h] [rbp+A0h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v14 = *(_DWORD *)(v1 + 1416);
  DeviceObject = 0LL;
  FileObject = 0LL;
  v15 = 0;
  WdLogSingleEntry0(4LL);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  if ( *(_QWORD *)(v1 + 1384) )
    return 1LL;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.DefaultType = 67108868;
  QueryTable.EntryContext = &v14;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = &v14;
  v25 = 0LL;
  v29 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 1416);
    if ( v3 > v14 )
    {
      *(_QWORD *)(v1 + 1344) = *(_QWORD *)(v1 + 1264);
      *(_QWORD *)(v1 + 1360) = *(_QWORD *)(v1 + 1272);
      *(_DWORD *)(v1 + 1408) = *(_DWORD *)(v1 + 1256);
      *(_DWORD *)(v1 + 1412) = *(_DWORD *)(v1 + 1260);
      WdLogSingleEntry0(5LL);
      return 1LL;
    }
    v4 = 0;
    DestinationString_8 = 0LL;
    if ( (int)StringCchPrintfW(SourceString, 36LL, L"\\Device\\Video%d", v3) < 0 )
      break;
    RtlInitUnicodeString(&DestinationString_8, SourceString);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString_8, 0, &FileObject, &DeviceObject);
    v15 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      WdLogSingleEntry1(5LL, DeviceObjectPointer);
      ++*(_DWORD *)(v1 + 1416);
    }
    else
    {
      v6 = gpLeakTrackingAllocator;
      v18 = 260LL;
      LODWORD(v16) = 1986291527;
      v7 = *(_DWORD *)gpLeakTrackingAllocator;
      DestinationString = 304LL;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646747u) )
            goto LABEL_38;
          Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 320LL, (unsigned int)v16);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
          if ( !Pool2
            || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
                *Pool2 = 1986291527LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
                Pool2 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v6 + 1),
              (const void *)0x76646747);
          }
        }
        else
        {
          if ( v7 != 2 )
            goto LABEL_38;
          v17 = 0LL;
          if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646747u, &v17) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               v13,
                                                                                               320LL,
                                                                                               v12);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_38;
            _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v6,
                                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                      v17,
                                      BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                goto LABEL_13;
              }
LABEL_37:
              _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
LABEL_38:
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
              goto LABEL_13;
            }
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v17,
                                     BackTrace) )
              goto LABEL_37;
          }
          else
          {
            v23[0] = &v18;
            v23[1] = &v16;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               (__int64)v6,
                                                                                               (__int64)v23,
                                                                                               &DestinationString);
          }
        }
      }
      else
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           304LL,
                                                                                           1986291527LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
      }
LABEL_13:
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 252) = 0;
        if ( DeviceObject )
        {
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 136) = DeviceObject;
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 224) = FileObject;
        }
        else
        {
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 136) = 0LL;
          *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 224) = 0LL;
        }
        *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 216) = gProtocolType;
        ++*(_DWORD *)(v1 + 1416);
        swprintf_s(
          (wchar_t *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          0x20uLL,
          L"\\Device\\Video%d");
        RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                                 0,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 &v15);
        DrvGetDeviceConfigurationInformation(
          (void **)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          RegistryHandleFromDeviceMap,
          0);
        ZwClose(RegistryHandleFromDeviceMap);
        v10 = (wchar_t *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64);
        if ( (*(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) & 0x200008) == 0x200008 )
        {
          ++*(_DWORD *)(v1 + 1260);
          swprintf_s(v10, 0x20uLL, L"\\\\.\\DISPLAYV%d");
          v4 = 1;
        }
        else
        {
          ++*(_DWORD *)(v1 + 1256);
          swprintf_s(v10, 0x20uLL, L"\\\\.\\DISPLAY%d");
        }
        if ( v15 >= 0 && v4 )
        {
          *(_QWORD *)(v1 + 1384) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          DrvAddEntryToGraphicsDeviceList((struct tagGRAPHICS_DEVICE *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          if ( (*(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) & 0x800000) != 0 )
            DrvAddAdapterLuid(*(struct _LUID *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                              + 240));
        }
        else
        {
          if ( (*(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) & 0x800000) != 0 )
            DrvRemoveAdapterLuid(*(struct _LUID *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                 + 240));
          DrvCleanupOneGraphicsDevice(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          --*(_DWORD *)(v1 + 1256);
        }
      }
    }
  }
  WdLogSingleEntry0(5LL);
  return 0LL;
}
