__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rbx
  int MiniportInterface; // eax
  _BYTE *v8; // r14
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v14; // eax
  int v15; // eax
  int v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  _DWORD *v21; // rcx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  int v27; // eax
  __int64 v28; // r8
  DXGADAPTER *v29; // rcx
  _DWORD *v30; // r14
  __int64 v31; // rdx
  struct _DEVICE_OBJECT *v32; // rcx
  struct _DEVICE_OBJECT *v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  __int64 v39; // r14
  const wchar_t *v40; // r9
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v44; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+E0h] [rbp+67h] BYREF
  char Data; // [rsp+E8h] [rbp+6Fh] BYREF
  char v47; // [rsp+F0h] [rbp+77h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  LOBYTE(P) = 0;
  LODWORD(v6) = 0;
  if ( (**(_DWORD **)(*(_QWORD *)(v3 + 3912) + 2824LL) & 0x100) != 0 )
  {
    v8 = (_BYTE *)(v3 + 4888);
    v9 = 0;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v3 + 5016) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1);
    v4 = 0LL;
    LODWORD(v6) = MiniportInterface;
    if ( MiniportInterface < 0 )
    {
LABEL_4:
      if ( *(_BYTE *)(v3 + 5016) )
      {
        v36 = (int)v6;
        goto LABEL_103;
      }
      v8 = (_BYTE *)(v3 + 4888);
      goto LABEL_6;
    }
    if ( !*(_QWORD *)(v3 + 5088)
      || !*(_QWORD *)(v3 + 5112)
      || !*(_QWORD *)(v3 + 5064)
      || !*(_QWORD *)(v3 + 5072)
      || !*(_QWORD *)(v3 + 5080)
      || !*(_QWORD *)(v3 + 5096)
      || !*(_QWORD *)(v3 + 5104)
      || !*(_QWORD *)(v3 + 5120)
      || !*(_QWORD *)(v3 + 5128)
      || !*(_QWORD *)(v3 + 5136)
      || !*(_QWORD *)(v3 + 5144)
      || !*(_QWORD *)(v3 + 5056) )
    {
      goto LABEL_89;
    }
    v27 = *(_DWORD *)(v3 + 3928);
    *(_BYTE *)(v3 + 5016) = 1;
    if ( v27 >= 9728 || (unsigned int)(v27 - 8454) <= 0xF9 )
    {
      LODWORD(v6) = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( (int)v6 < 0 )
        goto LABEL_71;
      v29 = *(DXGADAPTER **)(v3 + 3912);
      v30 = (_DWORD *)(v3 + 5464);
      memset(&v44, 0, 24);
      v44.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v44.pOutputData = (void *)(v3 + 5464);
      *(_OWORD *)&v44.OutputDataSize = 0LL;
      v44.OutputDataSize = 4;
      LODWORD(v6) = DXGADAPTER::DdiQueryAdapterInfo(v29, &v44, v28);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      v4 = 0LL;
      if ( (int)v6 < 0 )
      {
LABEL_71:
        WdLogSingleEntry1(3LL, (int)v6);
        v4 = 0LL;
        LODWORD(v6) = 0;
      }
      else
      {
        if ( *v30 >= 4u )
        {
          LODWORD(v6) = -1073741811;
          v31 = -1073741811LL;
LABEL_90:
          WdLogSingleEntry1(2LL, v31);
          goto LABEL_13;
        }
        if ( (*v30 & 1) != 0 )
        {
          v32 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          Data = -1;
          IoSetDevicePropertyData(v32, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
          v4 = 0LL;
        }
        if ( (*v30 & 2) != 0 )
        {
          v33 = *(struct _DEVICE_OBJECT **)(v3 + 152);
          v47 = -1;
          IoSetDevicePropertyData(v33, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &v47);
          v4 = 0LL;
        }
      }
    }
  }
  v8 = (_BYTE *)(v3 + 4888);
  if ( !*(_BYTE *)(v3 + 4888) )
  {
    v34 = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1);
    v4 = 0LL;
    LODWORD(v6) = v34;
    if ( v34 < 0 )
      goto LABEL_4;
    *v8 = 1;
    if ( !*(_QWORD *)(v3 + 4928)
      || !*(_QWORD *)(v3 + 4936)
      || !*(_QWORD *)(v3 + 4944)
      || !*(_QWORD *)(v3 + 4952)
      || !*(_QWORD *)(v3 + 4960)
      || !*(_QWORD *)(v3 + 4968)
      || !*(_QWORD *)(v3 + 4976)
      || !*(_QWORD *)(v3 + 4984)
      || !*(_QWORD *)(v3 + 4992)
      || !*(_QWORD *)(v3 + 5008)
      || !*(_QWORD *)(v3 + 5000) )
    {
      goto LABEL_89;
    }
  }
  if ( !*(_BYTE *)(v3 + 5152) )
  {
    v35 = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE, 48, 1);
    v4 = 0LL;
    LODWORD(v6) = v35;
    if ( v35 < 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      *(_BYTE *)(v3 + 5152) = 1;
      if ( !*(_QWORD *)(v3 + 5192) || !*(_QWORD *)(v3 + 5200) )
        goto LABEL_89;
    }
  }
  if ( *(_BYTE *)(v3 + 5208) )
  {
    if ( (int)v6 < 0 )
      goto LABEL_4;
  }
  else
  {
    LODWORD(v6) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE, 56, 1);
    if ( (int)v6 >= 0 )
    {
      *(_BYTE *)(v3 + 5208) = 1;
      if ( *(_QWORD *)(v3 + 5248) && *(_QWORD *)(v3 + 5256) && *(_QWORD *)(v3 + 5264) && *(_WORD *)(v3 + 5218) == 1 )
        goto LABEL_6;
LABEL_89:
      v31 = -1073741823LL;
      LODWORD(v6) = -1073741823;
      goto LABEL_90;
    }
    LODWORD(v6) = 0;
  }
LABEL_6:
  if ( *(_BYTE *)(v3 + 5016) )
  {
    v9 = 1;
    *v8 = 1;
    *(_BYTE *)(v3 + 5208) = 1;
  }
  else
  {
    v9 = (char)P;
  }
LABEL_8:
  if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3912), v4, a3, 1LL) )
  {
    *v8 = v12;
    *(_BYTE *)(v3 + 5208) = v12;
    if ( !*(_QWORD *)(v3 + 2800) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v14 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              &DestinationString,
              (PUNICODE_STRING)(v3 + 2792));
      if ( v14 < 0 )
      {
        v36 = v14;
LABEL_103:
        WdLogSingleEntry1(2LL, v36);
        goto LABEL_13;
      }
    }
  }
  if ( v9 || *(_QWORD *)(v3 + 2800) )
  {
    P = 0LL;
    *(_QWORD *)(v3 + 120) = DpiFdoDispatchIoctl;
    *(_QWORD *)(v3 + 104) = DpiFdoDispatchCreate;
    *(_BYTE *)(v3 + 58) = 1;
    *(_QWORD *)(v3 + 96) = DpiFdoDispatchCleanupAndClose;
    *(_DWORD *)(v3 + 5656) = 0;
    v15 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
    v6 = v15;
    if ( v15 < 0 )
    {
LABEL_47:
      v36 = v6;
      goto LABEL_103;
    }
    v16 = ObSetSecurityObjectByPointer(a1, 4LL, P);
    LODWORD(v6) = v16;
    if ( v16 < 0 )
      WdLogSingleEntry1(2LL, v16);
    ExFreePoolWithTag(P, 0);
  }
  if ( (int)v6 < 0 )
  {
    LODWORD(v6) = 0;
    goto LABEL_13;
  }
  if ( v9 )
  {
    if ( !*(_QWORD *)(v3 + 2784) )
    {
      v37 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              0LL,
              (PUNICODE_STRING)(v3 + 2776));
      v6 = v37;
      if ( v37 < 0 )
        goto LABEL_47;
    }
    if ( !*(_QWORD *)(v3 + 2816) )
    {
      v38 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
              0LL,
              (PUNICODE_STRING)(v3 + 2808));
      v6 = v38;
      if ( v38 < 0 )
        goto LABEL_47;
    }
  }
  if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v3 + 3912), v10, v11, v12) )
  {
    if ( !*(_QWORD *)(v3 + 2832) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v17 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
              &DestinationString,
              (PUNICODE_STRING)(v3 + 2824));
      v6 = v17;
      if ( v17 < 0 )
        goto LABEL_47;
    }
  }
  if ( !*(_QWORD *)(v3 + 2848) )
  {
    v18 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_MITIGABLE_DEVICE_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v3 + 2840));
    v6 = v18;
    if ( v18 < 0 )
      goto LABEL_47;
  }
  if ( !*(_QWORD *)(v3 + 2864) )
  {
    v19 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
            0LL,
            (PUNICODE_STRING)(v3 + 2856));
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_47;
  }
  if ( !*(_QWORD *)(v3 + 2880) )
  {
    v20 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v3 + 152),
            &GUID_FLEXIBLE_IOV_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v3 + 2872));
    v6 = v20;
    if ( v20 < 0 )
      goto LABEL_47;
  }
  v21 = *(_DWORD **)(v3 + 3912);
  *(_BYTE *)(v3 + 5469) = 0;
  if ( (v21[698] & 4) != 0 )
  {
    if ( (v21[571] & 0x400) != 0 || v9 )
    {
      if ( !v21[418] )
      {
        *(_BYTE *)(v3 + 5469) = 1;
        goto LABEL_34;
      }
      v39 = 1427LL;
      WdLogSingleEntry1(2LL, 1427LL);
      v40 = L"VirtualGpuOnly cap is set, but driver deperted display outputs";
    }
    else
    {
      v39 = 1422LL;
      WdLogSingleEntry1(2LL, 1422LL);
      v40 = L"VirtualGpuOnly cap is set, but driver does not support GPU-P or GPU-PARAV";
    }
    LODWORD(v6) = -1073741811;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
    v36 = -1073741811LL;
    goto LABEL_103;
  }
LABEL_34:
  if ( v9 && g_VirtualGpuOnly )
  {
    v21[698] |= 4u;
    *(_BYTE *)(v3 + 5469) = 1;
  }
  LODWORD(v6) = 0;
  if ( *(_BYTE *)(v3 + 5016) )
  {
    v41 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2776), 1u);
    v6 = v41;
    if ( v41 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2800) )
  {
    v22 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2792), 1u);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2816) )
  {
    v42 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2808), 1u);
    v6 = v42;
    if ( v42 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2832) )
  {
    v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2824), 1u);
    v6 = v23;
    if ( v23 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2848) )
  {
    v24 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2840), 1u);
    v6 = v24;
    if ( v24 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2864) )
  {
    v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2856), 1u);
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v3 + 2880) )
  {
    v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2872), 1u);
    v6 = v26;
    if ( v26 < 0 )
      goto LABEL_47;
  }
LABEL_13:
  DxgkLogInternalTriageEvent(
    *(_QWORD *)(v3 + 3912),
    131075,
    -1,
    (__int64)L"GPU virtualization initialization has completed with status %1",
    (int)v6,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (int)v6 < 0 )
    DpiFdoCleanupGpuVirtualization(v3);
  return (unsigned int)v6;
}
