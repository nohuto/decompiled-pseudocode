/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D8708
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0194E80 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0022AD8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v1; // edi
  int v2; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 DxgkWin32kInterface; // rax
  unsigned int v9; // esi
  PVOID v10; // rcx
  void *v11; // rcx
  PVOID P; // [rsp+50h] [rbp-89h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  __int128 v15; // [rsp+70h] [rbp-69h] BYREF
  __int128 v16; // [rsp+80h] [rbp-59h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-49h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-11h]
  int v19; // [rsp+D0h] [rbp-9h]
  __int128 v20; // [rsp+D8h] [rbp-1h]
  __int128 v21; // [rsp+E8h] [rbp+Fh]
  __int64 v22; // [rsp+F8h] [rbp+1Fh]
  unsigned int v23; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+150h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+158h] [rbp+7Fh] BYREF

  v15 = 0LL;
  P = 0LL;
  v1 = 0;
  v16 = 0LL;
  DeviceObject = 0LL;
  v2 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  v23 = 0;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v6 + 3080) )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 0x4000000;
    QueryTable.EntryContext = &v23;
    QueryTable.DefaultData = 0LL;
    v22 = 0LL;
    QueryTable.DefaultLength = 4;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v1 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v1 >= 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        v1 = RtlStringCchPrintfW((unsigned __int16 *)(v6 + 3104), 32LL, L"\\Device\\Video%d", v9);
        if ( v1 < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v6 + 3104));
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v1 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, &v15, 0x20u, (unsigned int *)&v24, 1u, 1);
          if ( v1 >= 0 && (_QWORD)v16 == *(_QWORD *)(v6 + 3084) )
          {
            if ( *(_DWORD *)(v6 + 3080) )
            {
              v1 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
              if ( v1 >= 0 )
              {
                v10 = P;
                *(_QWORD *)(v6 + 3096) = *((_QWORD *)P + 1);
                ExFreePoolWithTag(v10, 0);
              }
            }
            v2 = 1;
          }
          ObfDereferenceObject(FileObject);
          if ( v2 )
          {
            if ( v1 >= 0 )
              return (unsigned int)v1;
            break;
          }
        }
        if ( ++v9 > v23 )
        {
          v1 = -1073741772;
          break;
        }
      }
    }
    *(_OWORD *)(v6 + 3104) = 0LL;
    *(_OWORD *)(v6 + 3120) = 0LL;
    v11 = *(void **)(v6 + 3096);
    if ( v11 )
    {
      if ( *(_DWORD *)(v6 + 3080) )
      {
        ObfDereferenceObject(v11);
      }
      else
      {
        v24 = 0LL;
        *(_QWORD *)(v6 + 3084) = 0LL;
      }
      *(_QWORD *)(v6 + 3096) = 0LL;
    }
  }
  else if ( !*(_QWORD *)(v6 + 3096) )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    if ( (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 656))() )
    {
      *(_QWORD *)(v6 + 3084) = *((_QWORD *)a1 + 36);
      *(_QWORD *)(v6 + 3096) = *((_QWORD *)a1 + 37);
    }
  }
  return (unsigned int)v1;
}
