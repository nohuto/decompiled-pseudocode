/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00C4D4C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001F350 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148398 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E47C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068828 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00B0EA8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v5; // edi
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  __int128 v9; // [rsp+70h] [rbp-59h] BYREF
  __int128 v10; // [rsp+80h] [rbp-49h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-39h] BYREF
  __int64 v12; // [rsp+C8h] [rbp-1h]
  int v13; // [rsp+D0h] [rbp+7h]
  __int128 v14; // [rsp+D8h] [rbp+Fh]
  __int128 v15; // [rsp+E8h] [rbp+1Fh]
  __int64 v16; // [rsp+F8h] [rbp+2Fh]
  __int64 v17; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v18; // [rsp+140h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+148h] [rbp+7Fh] BYREF

  v9 = 0LL;
  P = 0LL;
  v2 = 0;
  v10 = 0LL;
  DeviceObject = 0LL;
  v3 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  LODWORD(v17) = 0;
  if ( dword_1C02512E0 )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v17;
    QueryTable.DefaultType = 0x4000000;
    v16 = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v12 = 0LL;
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v2 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v2 >= 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v2 = RtlStringCchPrintfW(&Dest, 32LL, L"\\Device\\Video%d", v5);
        if ( v2 < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, &Dest);
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v2 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, &v9, 0x20u, &v18, 1u, 1);
          if ( v2 >= 0 && (_QWORD)v10 == qword_1C02512E4 )
          {
            if ( dword_1C02512E0 )
            {
              v2 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
              if ( v2 >= 0 )
              {
                Object = (PVOID)*((_QWORD *)P + 1);
                ExFreePoolWithTag(P, 0);
              }
            }
            v3 = 1;
          }
          ObfDereferenceObject(FileObject);
          if ( v3 )
            goto LABEL_19;
        }
        if ( ++v5 > (unsigned int)v17 )
        {
          v2 = -1073741772;
LABEL_19:
          if ( v2 >= 0 )
            return (unsigned int)v2;
          break;
        }
      }
    }
    *(_OWORD *)&Dest = 0LL;
    xmmword_1C0251308 = 0LL;
    if ( Object )
    {
      if ( dword_1C02512E0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        v17 = 0LL;
        qword_1C02512E4 = 0LL;
      }
      Object = 0LL;
    }
  }
  else if ( !Object && (unsigned __int8)((__int64 (*)(void))qword_1C0250B28)() )
  {
    qword_1C02512E4 = *((_QWORD *)a1 + 37);
    Object = (PVOID)*((_QWORD *)a1 + 38);
  }
  return (unsigned int)v2;
}
