__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // bl
  char v6; // r15
  unsigned __int8 v8; // r12
  __int64 DeviceExtension; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rsi
  const char *v12; // rdi
  int DeviceCapabilities; // r14d
  _QWORD *v14; // r15
  _DWORD *v15; // rdi
  const signed __int64 *v16; // r12
  __int64 *v17; // rax
  volatile signed __int32 *v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  char v22; // r13
  int v23; // ecx
  unsigned int v24; // ecx
  const char *v25; // rdx
  const char *v26; // rcx
  unsigned __int16 v27; // r9
  int v28; // edx
  signed __int64 v29; // rax
  char *IrpText; // rax
  const char *v31; // r8
  __int64 v32; // r10
  unsigned __int8 v35; // [rsp+61h] [rbp-48h]
  bool v36; // [rsp+62h] [rbp-47h] BYREF
  int v37; // [rsp+64h] [rbp-45h] BYREF
  __int64 v38; // [rsp+68h] [rbp-41h]
  __int64 v39; // [rsp+70h] [rbp-39h] BYREF
  __int128 *v40; // [rsp+78h] [rbp-31h] BYREF
  __int64 v41; // [rsp+80h] [rbp-29h] BYREF
  __int64 v42; // [rsp+88h] [rbp-21h] BYREF
  __int64 v43; // [rsp+90h] [rbp-19h] BYREF
  __int128 v44; // [rsp+98h] [rbp-11h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-1h] BYREF
  int v46; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v43 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  v6 = a2;
  v37 = 0;
  v44 = 0LL;
  v40 = 0LL;
  v8 = *(_BYTE *)(v4 + 1);
  v35 = v8;
  v38 = a2;
  v36 = 0;
  v45 = 0LL;
  v46 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v11 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v12 = byte_1C00622D0;
    DeviceCapabilities = -1073741823;
    goto LABEL_81;
  }
  v14 = *(_QWORD **)(DeviceExtension + 760);
  if ( (*(_DWORD *)(DeviceExtension + 1008) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v36) >= 0 && v36 )
    *(_QWORD *)(v11 + 8) &= ~0x800uLL;
  v15 = *(_DWORD **)(v4 + 8);
  v16 = (const signed __int64 *)(v11 + 8);
  if ( !_bittest64((const signed __int64 *)(v11 + 8), 0x27u) )
  {
    v17 = AMLIGetNamedChild(v14, 1447907935);
    v18 = (volatile signed __int32 *)v17;
    if ( v17 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v17) == 8 )
      {
        if ( (int)ACPIGet(v11, 0x564D525Fu, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL) < 0 )
          v15[1] |= 0x10u;
        else
          v15[1] = (v39 != 0 ? 0x10 : 0) | v15[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v18, v19);
      }
      else
      {
        v15[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v14, 810173791) )
      {
        v20 = v15[1];
        if ( (v20 & 0x10) == 0 )
          v20 |= 0x40000u;
        v15[1] = v20 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v14, 826951007)
        || AMLIIsNamedChildPresent(v14, 843728223)
        || AMLIIsNamedChildPresent(v14, 860505439)
        || AMLIIsNamedChildPresent(v14, 877282655) )
      {
        v21 = v15[1];
        if ( (v21 & 0x10) == 0 )
        {
          v21 |= 0x40000u;
          v15[1] = v21;
        }
        v15[1] = v21 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v14, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  DeviceCapabilities = ACPIGet(v11, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v41, 0LL);
  v10 = 0x400000000000LL;
  if ( DeviceCapabilities < 0 )
    goto LABEL_77;
  *(_QWORD *)&v44 = v11;
  v40 = &v44;
  DWORD2(v44) = 8;
  if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v40, 1LL, &v37) >= 0 && v37 == 2 )
  {
    v15[1] &= ~0x4000u;
LABEL_33:
    v22 = a4;
    goto LABEL_45;
  }
  if ( _bittest64(v16, 0x36u) )
  {
    v22 = a4;
    if ( !a4 )
    {
      v23 = v15[1];
      if ( (AcpiOverrideAttributes & 2) != 0 )
        v24 = v23 | 0x4000;
      else
        v24 = v23 & 0xFFFFBFFF;
      v15[1] = v24;
    }
  }
  else
  {
    if ( AMLIIsNamedChildPresent(v14, 1397900127) && !AMLIIsNamedChildPresent(v14, 1397904223) )
    {
      v15[1] |= 0x4000u;
      goto LABEL_33;
    }
    v22 = a4;
    if ( a4 )
      v15[1] &= ~0x4000u;
  }
LABEL_45:
  if ( (v41 & 4) == 0 )
    v15[1] |= 0x20000u;
  if ( AMLIIsNamedChildPresent(v14, 1314214751)
    && (int)ACPIGet(v11, 0x4E55535Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL) >= 0 )
  {
    v15[3] = v42;
  }
  if ( !AMLIIsNamedChildPresent(v14, 1380204895) )
    goto LABEL_60;
  DeviceCapabilities = ACPIGet(v11, 0x5244415Fu, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v43, 0LL);
  if ( DeviceCapabilities >= 0 )
  {
    v15[2] = v43;
LABEL_60:
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v11);
    if ( DeviceCapabilities < 0 )
    {
      v12 = byte_1C00622D0;
      v25 = byte_1C00622D0;
      v26 = byte_1C00622D0;
      if ( (*v16 & 0x200000000000LL) != 0 )
      {
        v25 = *(const char **)(v11 + 608);
        if ( (*v16 & 0x400000000000LL) != 0 )
          v26 = *(const char **)(v11 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
      v27 = 14;
      goto LABEL_57;
    }
    if ( (unsigned __int8)AcpiCheckSecureDevice(v11) )
      v15[1] |= 0x100000u;
    if ( !v22 )
    {
      v15[1] |= 0x80u;
      v28 = v15[1] ^ ((unsigned __int16)v15[1] ^ (unsigned __int16)((unsigned __int64)*(unsigned int *)v16 >> 9)) & 0x100;
      v15[1] = v28;
      v15[1] = v28 & 0xFFFFFFBF | (*(_QWORD *)(v11 + 616) != 0LL ? 0x40 : 0);
    }
    if ( (int)ACPIProcessPhysicalDeviceLocation(v11, &v45, 0LL) >= 0 && (v45 & 0x7F) != 0 )
    {
      if ( (BYTE8(v45) & 1) == 0 )
        v15[1] |= 0x40000u;
      if ( SDWORD2(v45) < 0 )
        v15[1] |= 0x40000u;
    }
    DeviceCapabilities = 0;
    v10 = 0x400000000000LL;
LABEL_77:
    v12 = byte_1C00622D0;
    goto LABEL_78;
  }
  v12 = byte_1C00622D0;
  v25 = byte_1C00622D0;
  v26 = byte_1C00622D0;
  if ( (*v16 & 0x200000000000LL) != 0 )
  {
    v25 = *(const char **)(v11 + 608);
    if ( (*v16 & 0x400000000000LL) != 0 )
      v26 = *(const char **)(v11 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_58;
  v27 = 13;
LABEL_57:
  WPP_RECORDER_SF_dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    5u,
    v27,
    (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
    DeviceCapabilities,
    v11,
    v25,
    v26);
LABEL_58:
  v10 = 0x400000000000LL;
LABEL_78:
  v29 = *v16;
  v8 = v35;
  v6 = v38;
  v5 = v11;
  if ( (v29 & 0x200000000000LL) != 0 && (v29 & 0x400000000000LL) != 0 )
    v12 = *(const char **)(v11 + 616);
LABEL_81:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, v8);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      v32,
      v6,
      (__int64)IrpText,
      DeviceCapabilities,
      v5,
      v31,
      v12);
  }
  return (unsigned int)DeviceCapabilities;
}
