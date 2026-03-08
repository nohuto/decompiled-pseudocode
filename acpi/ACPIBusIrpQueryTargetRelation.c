/*
 * XREFs of ACPIBusIrpQueryTargetRelation @ 0x1C00812EC
 * Callers:
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C007B010 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C007F9F0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0087190 (ACPIInternalDeviceQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryTargetRelation(PVOID Object, char a2, PVOID *a3)
{
  _QWORD *DeviceExtension; // rbx
  __int64 Pool2; // rax
  char v8; // di
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // rdx
  NTSTATUS v13; // esi
  const char *v14; // rax
  char v15; // r10
  const char *v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Pool2 = ExAllocatePool2(64LL, 16LL, 1232102209LL);
  v8 = 0;
  *a3 = (PVOID)Pool2;
  if ( Pool2 )
  {
    v13 = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
    if ( v13 >= 0 )
    {
      v18 = *a3;
      *(_DWORD *)v18 = 1;
      v18[1] = Object;
    }
    else
    {
      v14 = byte_1C00622D0;
      v15 = 0;
      v16 = byte_1C00622D0;
      if ( DeviceExtension )
      {
        v17 = DeviceExtension[1];
        v15 = (char)DeviceExtension;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)DeviceExtension[76];
          if ( (v17 & 0x400000000000LL) != 0 )
            v16 = (const char *)DeviceExtension[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x38u,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          a2,
          v13,
          v15,
          v14,
          v16);
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    return (unsigned int)v13;
  }
  else
  {
    v9 = byte_1C00622D0;
    v10 = byte_1C00622D0;
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[76];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x37u,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        a2,
        16,
        v8,
        v9,
        v10);
    return 3221225626LL;
  }
}
