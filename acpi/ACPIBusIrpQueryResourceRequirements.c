/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C0080980
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C002EA00 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C003B054 (ACPIRangeFilterPICInterrupt.c)
 *     ACPIRangeValidatePciResources @ 0x1C003B3A4 (ACPIRangeValidatePciResources.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00883E8 (ACPIInternalSetProximityDomain.c)
 *     ACPIInternalSetSpare @ 0x1C0088498 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r15
  __int64 v8; // rcx
  int DeviceResourceList; // ebx
  char *v10; // r8
  __int64 v11; // rax
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  const signed __int64 *v16; // r14
  _DWORD *v17; // rbp
  __int64 v18; // rax
  char *v19; // rax
  const char *v20; // r8
  int v21; // eax
  char v22; // r8
  const char *v23; // r10
  const char *v24; // rdx
  _DWORD *v25; // r8
  unsigned int i; // r9d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _DWORD *v30; // rcx
  unsigned int j; // r8d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  const char *v34; // rdx
  const char *v35; // rcx
  __int64 v36; // rcx
  char *v37; // rax
  const char *v38; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = byte_1C00622D0;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  v10 = byte_1C00622D0;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
      v10 = *(char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x32u,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      (__int64)IrpText,
      DeviceResourceList,
      v14,
      v15,
      v13);
  }
  v16 = (const signed __int64 *)(DeviceExtension + 8);
  if ( DeviceResourceList < 0 )
    goto LABEL_12;
  v17 = P;
  v18 = *v16 & 0x2000000;
  if ( P )
  {
    if ( v18 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, (unsigned __int64)v10);
    }
    else if ( (*v16 & 0x200000000LL) != 0 )
    {
      v21 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v21 < 0 )
      {
        v22 = 0;
        v23 = byte_1C00622D0;
        v24 = byte_1C00622D0;
        if ( DeviceExtension )
        {
          v22 = DeviceExtension;
          if ( (*v16 & 0x200000000000LL) != 0 )
          {
            v23 = *(const char **)(DeviceExtension + 608);
            if ( (*v16 & 0x400000000000LL) != 0 )
              v24 = *(const char **)(DeviceExtension + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x33u,
            (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
            (char)a2,
            v21,
            v22,
            v23,
            v24);
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    if ( _bittest64(v16, 0x25u) )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v25 = v17 + 8;
        for ( i = 0; i < v17[7]; v25 += 8 * (unsigned int)v25[1] + 2 )
        {
          v27 = (unsigned __int64)(v25 + 2);
          v28 = (unsigned __int64)&v25[8 * v25[1] + 2];
          while ( v27 < v28 )
          {
LABEL_34:
            if ( ((*(_BYTE *)(v27 + 1) - 3) & 0xFB) == 0 )
            {
              v29 = v27 + 32;
              if ( v27 + 32 < v28 )
              {
                while ( *(_BYTE *)(v29 + 1) == 0x81 )
                {
                  if ( *(_WORD *)(v29 + 4) == 1 )
                  {
                    *(_WORD *)(v27 + 4) |= 0x100u;
LABEL_39:
                    v27 += 32LL;
                    goto LABEL_34;
                  }
                  v29 += 32LL;
                  if ( v29 >= v28 )
                    goto LABEL_39;
                }
              }
            }
            v27 += 32LL;
          }
          ++i;
        }
      }
    }
    if ( (*(_DWORD *)v16 & 0x8000LL) != 0 )
    {
      v30 = v17 + 8;
      for ( j = 0; j < v17[7]; v30 += 8 * (unsigned int)v30[1] + 2 )
      {
        v32 = (unsigned __int64)(v30 + 2);
        v33 = (unsigned __int64)&v30[8 * v30[1] + 2];
        while ( v32 < v33 )
        {
          if ( *(_BYTE *)(v32 + 1) == 2 )
            *(_WORD *)(v32 + 4) |= 8u;
          v32 += 32LL;
        }
        ++j;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v17);
    if ( DeviceResourceList >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)v17;
      goto LABEL_60;
    }
    v34 = byte_1C00622D0;
    v35 = byte_1C00622D0;
    if ( (*v16 & 0x200000000000LL) != 0 )
    {
      v34 = *(const char **)(DeviceExtension + 608);
      if ( (*v16 & 0x400000000000LL) != 0 )
        v35 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x34u,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v34,
        v35);
    ExFreePoolWithTag(v17, 0);
    goto LABEL_12;
  }
  v8 = 3221225473LL;
  if ( v18 )
    DeviceResourceList = -1073741823;
  if ( DeviceResourceList < 0 )
  {
LABEL_12:
    if ( DeviceResourceList != -1073741670 && (*v16 & 0x2000000) != 0 )
    {
      if ( (*v16 & 0x200000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 608);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = ACPIDebugGetIrpText(v8, MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x35u,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          (char)a2,
          (__int64)v19,
          DeviceResourceList,
          DeviceExtension,
          v7,
          v20);
      }
      KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
    }
  }
LABEL_60:
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*v16 & 0x200000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = ACPIDebugGetIrpText(v36, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x36u,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      (__int64)v37,
      DeviceResourceList,
      v2,
      v7,
      v38);
  }
  return (unsigned int)DeviceResourceList;
}
