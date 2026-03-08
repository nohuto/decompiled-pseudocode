/*
 * XREFs of DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C (DpiGetSysMmAdapterFromDevice.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1C0012FB4 (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x1C006F010 (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006F1B0 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 *     ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D2134 (-SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMO.c)
 */

__int64 __fastcall DxgkCreatePhysicalMemoryObjectCB(PHYSICAL_ADDRESS *a1)
{
  MEMORY_CACHING_TYPE HighPart; // edi
  unsigned __int64 v3; // rdx
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // r10
  unsigned __int64 LowPart; // r8
  __int64 QuadPart; // r9
  struct _MDL *v8; // [rsp+70h] [rbp+8h] BYREF

  HighPart = a1[3].HighPart;
  if ( HighPart > MmWriteCombined )
  {
    v3 = a1[3].HighPart;
LABEL_3:
    WdLogSingleEntry1(3LL, v3);
    return 3221225485LL;
  }
  SysMmAdapterFromDevice = 0LL;
  if ( a1->QuadPart )
    SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  LowPart = (int)a1[3].LowPart;
  QuadPart = a1[2].QuadPart;
  if ( !(_DWORD)LowPart )
    return SysMmCreateMdlPhysicalObject(
             SysMmAdapterFromDevice,
             a1[1].QuadPart,
             a1[4],
             a1[5],
             a1[6],
             HighPart,
             a1[7].LowPart,
             QuadPart,
             0,
             (PHYSICAL_ADDRESS *)&a1[8].QuadPart,
             (PHYSICAL_ADDRESS *)&a1[9].QuadPart,
             &v8);
  if ( (_DWORD)LowPart == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))SysMmCreateContiguousMemoryPhysicalObject)(
             SysMmAdapterFromDevice,
             (PHYSICAL_ADDRESS)a1[1].QuadPart,
             (PHYSICAL_ADDRESS)a1[4].QuadPart,
             (PHYSICAL_ADDRESS)a1[5].QuadPart,
             (PHYSICAL_ADDRESS)a1[6].QuadPart,
             HighPart,
             QuadPart,
             0,
             &a1[8],
             &a1[9],
             &v8);
  if ( (_DWORD)LowPart != 2 )
  {
    if ( (_DWORD)LowPart == 3 )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))SysMmCreateIoSpacePhysicalObject)(
               SysMmAdapterFromDevice,
               (PHYSICAL_ADDRESS)a1[1].QuadPart,
               (PHYSICAL_ADDRESS)a1[4].QuadPart,
               (unsigned int)HighPart,
               QuadPart,
               0,
               &a1[8],
               &a1[9]);
LABEL_13:
    v3 = LowPart;
    goto LABEL_3;
  }
  v3 = a1[1].QuadPart;
  if ( v3 > 0xFFFFF000 )
    goto LABEL_3;
  LowPart = a1[6].LowPart;
  if ( (LowPart & 0xFFFFFFE1) != 0 )
    goto LABEL_13;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _QWORD))SysMmCreateSectionPhysicalObject)(
           SysMmAdapterFromDevice,
           v3,
           a1[4].LowPart,
           (PHYSICAL_ADDRESS)a1[5].QuadPart,
           LowPart,
           0LL,
           HighPart,
           QuadPart,
           0,
           &a1[8],
           &a1[9]);
}
