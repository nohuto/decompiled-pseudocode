__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1)
{
  __int64 Pool2; // rsi
  BOOL v2; // r13d
  __int64 v3; // r15
  char v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v13; // rcx
  bool v14; // zf
  NSInstrumentation::CLeakTrackingAllocator *v15; // rbx
  int v16; // eax
  unsigned int *v17; // r12
  int v18; // eax
  struct _DEVICE_OBJECT *v19; // rcx
  __int64 v20; // rax
  struct _DEVICE_OBJECT *v21; // rbx
  wchar_t *v22; // rcx
  int PruneFlag; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // r14
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r9d
  unsigned int v36; // r14d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  const wchar_t *v41; // r9
  void *v42; // rax
  void *v43; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  unsigned int v51; // eax
  __int64 DxgkWin32kInterface; // rax
  int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // ecx
  int updated; // eax
  struct _FILE_OBJECT *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r10
  PVOID Environment; // [rsp+28h] [rbp-E0h]
  NTSTATUS *v61; // [rsp+30h] [rbp-D8h]
  char v62; // [rsp+58h] [rbp-B0h]
  NTSTATUS v63; // [rsp+5Ch] [rbp-ACh] BYREF
  int v64; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+78h] [rbp-90h] BYREF
  int v69; // [rsp+80h] [rbp-88h]
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v73; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D8h] [rbp-30h]
  __int128 v79; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-18h]
  __int64 v81; // [rsp+100h] [rbp-8h] BYREF
  __int64 v82; // [rsp+108h] [rbp+0h]
  struct _UNICODE_STRING DestinationString; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v84[2]; // [rsp+128h] [rbp+20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+138h] [rbp+30h] BYREF
  __int64 v86; // [rsp+170h] [rbp+68h]
  int v87; // [rsp+178h] [rbp+70h]
  __int128 v88; // [rsp+180h] [rbp+78h]
  __int128 v89; // [rsp+190h] [rbp+88h]
  __int64 v90; // [rsp+1A0h] [rbp+98h]
  PVOID BackTrace[20]; // [rsp+1A8h] [rbp+A0h] BYREF
  WCHAR SourceString[56]; // [rsp+248h] [rbp+140h] BYREF

  v65 = 0;
  Pool2 = 0LL;
  v2 = gProtocolType == 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v78 = 0LL;
  P = 0LL;
  v63 = 0;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v69 = 1;
  v77 = 0LL;
  v3 = a1;
  v82 = a1;
  WdLogSingleEntry2(4LL, a1);
  v4 = 0;
  v62 = 0;
  v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( v2 )
  {
    v7 = *(_DWORD *)(v6 + 1404);
    v8 = *(_DWORD *)(v6 + 1400);
    v9 = *(_QWORD *)(v6 + 1368);
    v10 = *(_QWORD *)(v6 + 1352);
    v11 = *(_DWORD *)(v6 + 1340);
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 1412);
    v8 = *(_DWORD *)(v6 + 1408);
    v9 = *(_QWORD *)(v6 + 1360);
    v10 = *(_QWORD *)(v6 + 1344);
    v11 = *(_DWORD *)(v6 + 1336);
  }
  *(_DWORD *)(v6 + 1252) = v11;
  *(_QWORD *)(v6 + 1264) = v10;
  *(_QWORD *)(v6 + 1272) = v9;
  *(_DWORD *)(v6 + 1256) = v8;
  *(_DWORD *)(v6 + 1260) = v7;
  if ( v2 )
  {
    LODWORD(v66) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v65;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v66;
    QueryTable.DefaultLength = 4;
    v90 = 0LL;
    v86 = 0LL;
    v87 = 0;
    v88 = 0LL;
    v89 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_47;
  }
  if ( (unsigned int)((__int64 (*)(void))UserIsWddmConnectedSession)() )
  {
    LODWORD(v66) = 0;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v39, v38);
    v53 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(DxgkWin32kInterface + 768))(&v66, &v65);
    v63 = v53;
    if ( v53 < 0 )
    {
      WdLogSingleEntry1(2LL, v53);
      v65 = *(_DWORD *)(v6 + 1252);
    }
    v54 = *(_DWORD *)(v6 + 1252);
    v55 = v66;
    if ( (unsigned int)v66 > v54 )
    {
      *(_DWORD *)(v6 + 1252) = v66;
      v54 = v55;
    }
    if ( v65 >= v54 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_47:
    v13 = 0xFFFFLL;
    goto LABEL_48;
  }
  v13 = 0xFFFFLL;
  if ( gProtocolType != -1 )
    v65 = *(_DWORD *)(v6 + 3016) - 1;
  if ( *(_DWORD *)(v6 + 3080) )
  {
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    v63 = updated;
    if ( updated < 0 )
      return 0LL;
    goto LABEL_47;
  }
LABEL_48:
  while ( 2 )
  {
    if ( gProtocolType != -1 )
    {
      v27 = *(_DWORD *)(v6 + 1252);
      if ( v27 <= v65 )
      {
        if ( !v3 )
        {
          WdLogSingleEntry0(5LL);
          return 0LL;
        }
        if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL) )
        {
          if ( v2 )
          {
            v28 = StringCchPrintfW(SourceString, 0x32uLL, L"\\Device\\Video%d", v27);
            goto LABEL_54;
          }
          v41 = L"RemoteVideo";
        }
        else
        {
          v41 = *(const wchar_t **)(v6 + 3072);
        }
        LODWORD(Environment) = v27;
        v28 = StringCchPrintfW(SourceString, 0x32uLL, L"\\Device\\%s%d", v41, Environment);
LABEL_54:
        if ( v28 >= 0 )
        {
          v29 = *(_QWORD *)(v6 + 1264);
          if ( v2 )
            v30 = *(_QWORD *)(v6 + 1368);
          else
            v30 = *(_QWORD *)(v6 + 1360);
          while ( v29 )
          {
            if ( !wcsncmp(SourceString, (const wchar_t *)v29, 0x40uLL) )
            {
              ++*(_DWORD *)(v6 + 1252);
              v4 = v62;
              goto LABEL_47;
            }
            if ( v29 == v30 )
              break;
            v29 = *(_QWORD *)(v29 + 128);
          }
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, SourceString);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          v63 = DeviceObjectPointer;
          if ( DeviceObjectPointer >= 0 )
          {
LABEL_6:
            v14 = Pool2 == 0;
            if ( Pool2 )
              goto LABEL_11;
            v15 = gpLeakTrackingAllocator;
            v74 = 260LL;
            v68 = 1986291527;
            v16 = *(_DWORD *)gpLeakTrackingAllocator;
            v81 = 304LL;
            switch ( v16 )
            {
              case 0:
                Pool2 = ExAllocatePool2(260LL, 304LL, 1986291527LL);
                if ( Pool2 )
                  _InterlockedAdd64((volatile signed __int64 *)v15 + 14, 1uLL);
                goto LABEL_10;
              case 1:
                if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                       gpLeakTrackingAllocator,
                       0x76646747u) )
                {
                  v58 = (_QWORD *)ExAllocatePool2(v74 & 0xFFFFFFFFFFFFFFFDuLL, 320LL, v68);
                  Pool2 = (__int64)v58;
                  if ( !v58
                    || (_InterlockedAdd64((volatile signed __int64 *)v15 + 14, 1uLL),
                        *v58 = 1986291527LL,
                        Pool2 = (__int64)(v58 + 2),
                        v58 == (_QWORD *)-16LL) )
                  {
                    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                      *((NSInstrumentation::CPointerHashTable **)v15 + 1),
                      (const void *)0x76646747);
                  }
                  goto LABEL_10;
                }
                break;
              case 2:
                v73 = 0LL;
                if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                        gpLeakTrackingAllocator,
                        0x76646747u,
                        &v73) )
                {
                  v84[0] = &v74;
                  v84[1] = &v68;
                  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                            v15,
                            v84,
                            &v81);
LABEL_10:
                  v14 = Pool2 == 0;
LABEL_11:
                  v4 = v62;
                  v13 = 0xFFFFLL;
                  if ( v14 )
                    continue;
                  v17 = (unsigned int *)(Pool2 + 160);
                  *(_QWORD *)(Pool2 + 136) = DeviceObject;
                  *(_WORD *)(Pool2 + 216) = gProtocolType;
                  *(_QWORD *)(Pool2 + 264) = 0LL;
                  if ( !v2 )
                    *v17 |= 0x4000000u;
                  *(_QWORD *)(Pool2 + 224) = FileObject;
                  if ( !v2 && !gRemoteSessionUseWddm || (*(_DWORD *)(Pool2 + 252) = 0, !v2) && !gRemoteSessionUseWddm )
                  {
                    v4 = 1;
                    *(_QWORD *)(Pool2 + 240) = 0xFFFFFFFFLL;
                    *(_QWORD *)(Pool2 + 232) = 0LL;
                    *(_DWORD *)(Pool2 + 248) = *(_DWORD *)(v6 + 1252);
                    goto LABEL_28;
                  }
                  v4 = 1;
                  v78 = 0LL;
                  *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
                  *(_QWORD *)&InputBuffer = Pool2;
                  v77 = 0LL;
                  v18 = GreDeviceIoControlImpl(
                          *(PDEVICE_OBJECT *)(Pool2 + 136),
                          0x23201Fu,
                          &InputBuffer,
                          0x28u,
                          &InputBuffer,
                          0x28u,
                          &v72,
                          1u,
                          1);
                  v63 = v18;
                  if ( v18 < 0 )
                  {
                    WdLogSingleEntry1(5LL, v18);
                  }
                  else
                  {
                    if ( (_DWORD)v77 )
                      *v17 |= 0x40000000u;
                    if ( (v78 & 0xC0000001) != 0 )
                    {
                      v63 = -1073741637;
                      WdLogSingleEntry2(5LL, (unsigned int)v78);
                    }
                    else
                    {
                      if ( (v78 & 0x20000000) != 0 )
                        *v17 |= 0x100000u;
                      v19 = *(struct _DEVICE_OBJECT **)(Pool2 + 136);
                      *(_QWORD *)(Pool2 + 144) = *((_QWORD *)&v77 + 1);
                      *(_DWORD *)(Pool2 + 248) = 0;
                      v79 = 0LL;
                      v80 = 0LL;
                      v63 = GreDeviceIoControlImpl(v19, 0x232033u, 0LL, 0, &v79, 0x20u, &v72, 1u, 1);
                      if ( v63 < 0 )
                      {
                        if ( v2 )
                          goto LABEL_28;
                      }
                      else
                      {
                        if ( (_DWORD)v79 != 2 )
                          WdLogSingleEntry0(1LL);
                        if ( gRemoteTerminalLuid == *((_QWORD *)&v80 + 1) )
                        {
                          v20 = *((_QWORD *)&v79 + 1);
                          if ( *((_QWORD *)&v79 + 1) )
                          {
                            *v17 |= 0x800000u;
                            *(_QWORD *)(Pool2 + 232) = v20;
                            *(_DWORD *)(Pool2 + 248) = DWORD1(v79);
                            *(_QWORD *)(Pool2 + 240) = v80;
LABEL_28:
                            v63 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                            if ( v63 >= 0 )
                            {
                              v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                              ExFreePoolWithTag(P, 0);
                              v63 = IoOpenDeviceRegistryKey(v21, 2u, 0x2000000u, &DeviceRegKey);
                              if ( v63 >= 0 )
                              {
                                DrvGetDeviceConfigurationInformation((PVOID)Pool2, (PCWSTR)DeviceRegKey, 1);
                                ZwClose(DeviceRegKey);
                              }
                              ObfDereferenceObject(v21);
                            }
                            swprintf_s((wchar_t *)Pool2, 0x20uLL, SourceString);
                            ++*(_DWORD *)(v6 + 1252);
                            if ( v63 >= 0
                              || (v61 = &v63,
                                  v42 = (void *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, 0LL, 0),
                                  DeviceRegKey = v42,
                                  v63 >= 0)
                              && (DrvGetDeviceConfigurationInformation((PVOID)Pool2, (PCWSTR)v42, 0),
                                  ZwClose(DeviceRegKey),
                                  v63 >= 0) )
                            {
                              if ( !*(_QWORD *)(Pool2 + 208) )
                              {
                                v43 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                        gpLeakTrackingAllocator,
                                        0x104uLL,
                                        0x20uLL,
                                        0x73726447u);
                                *(_QWORD *)(Pool2 + 208) = v43;
                                if ( v43 )
                                {
                                  v61 = &v63;
                                  RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(
                                                                          Pool2,
                                                                          0LL,
                                                                          0LL,
                                                                          v43,
                                                                          16);
                                  DeviceRegKey = RegistryHandleFromDeviceMap;
                                  if ( RegistryHandleFromDeviceMap )
                                    ZwClose(RegistryHandleFromDeviceMap);
                                }
                                else
                                {
                                  v63 = -1073741670;
                                }
                              }
                            }
                            v22 = (wchar_t *)(Pool2 + 64);
                            if ( (*v17 & 8) != 0 )
                            {
                              ++*(_DWORD *)(v6 + 1260);
                              swprintf_s(v22, 0x20uLL, L"\\\\.\\DISPLAYV%d");
                            }
                            else
                            {
                              ++*(_DWORD *)(v6 + 1256);
                              swprintf_s(v22, 0x20uLL, L"\\\\.\\DISPLAY%d");
                            }
                            PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)Pool2);
                            v24 = *v17;
                            if ( PruneFlag )
                              v25 = v24 & 0xFFF7FFFF;
                            else
                              v25 = v24 | 0x80000;
                            *v17 = v25;
                            if ( (unsigned int)bSetDeviceSessionUsage(Pool2, 1) )
                            {
                              if ( v2 || gRemoteSessionUseWddm )
                                goto LABEL_40;
                              goto LABEL_94;
                            }
                            if ( !v2 && !gRemoteSessionUseWddm )
                            {
LABEL_94:
                              v45 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
                              *(_QWORD *)(Pool2 + 272) = 0LL;
                              if ( *(_DWORD *)(v45 + 3080) )
                                v48 = *(_QWORD *)(v45 + 3084);
                              else
                                v48 = 0LL;
                              *(_QWORD *)(Pool2 + 288) = v48;
                              *(_QWORD *)(Pool2 + 296) = 0LL;
                              LOBYTE(v64) = 0;
                              v49 = DxDdGetDxgkWin32kInterface(v47, v46);
                              if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, int *, NTSTATUS *))(v49 + 392))(
                                     Pool2 + 272,
                                     Pool2 + 288,
                                     Pool2 + 296,
                                     Pool2 + 280,
                                     &v64,
                                     v61) >= 0 )
                              {
                                v50 = *(_DWORD *)(Pool2 + 164);
                                if ( (_BYTE)v64 )
                                  v51 = v50 | 4;
                                else
                                  v51 = v50 & 0xFFFFFFFB;
                                *(_DWORD *)(Pool2 + 164) = v51;
                                DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)Pool2);
                              }
                              if ( v63 < 0 && !gRemoteSessionUseWddm )
                              {
                                DrvCleanupOneGraphicsDevice((void *)Pool2);
                                --*(_DWORD *)(v6 + 1256);
                                v4 = v62;
                                v69 = 0;
LABEL_45:
                                v3 = v82;
LABEL_46:
                                Pool2 = 0LL;
                                goto LABEL_47;
                              }
                              v4 = 1;
LABEL_40:
                              if ( *(_QWORD *)(v6 + 1264) )
                                *(_QWORD *)(*(_QWORD *)(v6 + 1272) + 128LL) = Pool2;
                              else
                                *(_QWORD *)(v6 + 1264) = Pool2;
                              *(_QWORD *)(v6 + 1272) = Pool2;
                              if ( (*v17 & 0x800000) != 0 )
                                DrvAddAdapterLuid(*(struct _LUID *)(Pool2 + 240));
                              v62 = 1;
                              goto LABEL_45;
                            }
                            DrvCleanupOneGraphicsDevice((void *)Pool2);
LABEL_141:
                            v4 = v62;
                            goto LABEL_46;
                          }
                        }
                      }
                    }
                  }
                  DrvCleanupOneGraphicsDevice((void *)Pool2);
                  ++*(_DWORD *)(v6 + 1252);
                  goto LABEL_141;
                }
                Pool2 = ExAllocatePool2(v59, 320LL, 1986291527LL);
                if ( Pool2 )
                {
                  _InterlockedAdd64((volatile signed __int64 *)v15 + 16, 1uLL);
                  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                  {
                    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                            v15,
                                            Pool2,
                                            v73,
                                            BackTrace) )
                    {
                      Pool2 += 16LL;
                      goto LABEL_10;
                    }
                  }
                  else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                               v15,
                                               Pool2,
                                               v73,
                                               BackTrace) )
                  {
                    goto LABEL_10;
                  }
                  _InterlockedAdd64((volatile signed __int64 *)v15 + 17, 1uLL);
                  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
                }
                break;
            }
            Pool2 = 0LL;
            goto LABEL_10;
          }
          if ( v2 || gRemoteSessionUseWddm || *(_DWORD *)(v6 + 3016) != 1 )
          {
            WdLogSingleEntry1(5LL, DeviceObjectPointer);
            ++*(_DWORD *)(v6 + 1252);
            v4 = v62;
            goto LABEL_47;
          }
          v57 = *(struct _FILE_OBJECT **)(v6 + 3024);
          FileObject = v57;
          if ( v57 )
          {
            DeviceObject = IoGetRelatedDeviceObject(v57);
            if ( FileObject )
            {
              if ( DeviceObject )
              {
                v63 = 0;
                FileObject = 0LL;
                goto LABEL_6;
              }
            }
          }
          v4 = v62;
          v63 = -1073741772;
          goto LABEL_78;
        }
        return 0LL;
      }
    }
    break;
  }
  if ( !v2 )
  {
LABEL_78:
    if ( !gRemoteSessionUseWddm )
    {
      v40 = SGDGetSessionState(v13);
      DrvUpdateRemoteDriverFlags((struct tagREMOTE_CONTEXT *)(*(_QWORD *)(v40 + 24) + 3016LL));
    }
  }
  DrvSetDisconnectedGraphicsDevice(v2);
  WdLogSingleEntry0(5LL);
  if ( v4 )
    DrvSortGraphicsDeviceList();
  v31 = *(_DWORD *)(v6 + 1252);
  v32 = *(_QWORD *)(v6 + 1264);
  v33 = *(_QWORD *)(v6 + 1272);
  v34 = *(_DWORD *)(v6 + 1256);
  v35 = *(_DWORD *)(v6 + 1260);
  if ( v2 )
  {
    *(_DWORD *)(v6 + 1340) = v31;
    *(_QWORD *)(v6 + 1352) = v32;
    *(_QWORD *)(v6 + 1368) = v33;
    *(_DWORD *)(v6 + 1400) = v34;
    *(_DWORD *)(v6 + 1404) = v35;
  }
  else
  {
    *(_DWORD *)(v6 + 1336) = v31;
    *(_QWORD *)(v6 + 1344) = v32;
    *(_QWORD *)(v6 + 1360) = v33;
    *(_DWORD *)(v6 + 1408) = v34;
    *(_DWORD *)(v6 + 1412) = v35;
    if ( !(unsigned int)VerifyRemoteVidPnSourceIdsAreValid() )
      WdLogSingleEntry0(1LL);
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
      DrvUnattachMirrorDriversInSession();
  }
  v36 = v69;
  WdLogSingleEntry1(5LL, v69);
  return v36;
}
