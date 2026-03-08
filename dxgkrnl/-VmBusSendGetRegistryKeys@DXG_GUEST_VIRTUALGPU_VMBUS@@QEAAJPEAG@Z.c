/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03856B8
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C02B0F6C (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetRegistryPathFromPDO @ 0x1C001D100 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C004DBB0 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C005B5E0 (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01C2134 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02CB87C (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02CB98C (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, size_t *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 RegistryPathFromPDO; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  const wchar_t *v9; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v11; // eax
  int v12; // r12d
  __int64 Data; // rbx
  int v14; // r13d
  wchar_t v15; // ax
  wchar_t *v16; // r15
  NTSTATUS v17; // eax
  int v18; // eax
  NTSTATUS v19; // eax
  ULONG *v20; // r15
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v31; // [rsp+90h] [rbp-70h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+B0h] [rbp-50h]
  char v34; // [rsp+1C0h] [rbp+C0h] BYREF
  char v35; // [rsp+3D0h] [rbp+2D0h] BYREF
  char v36; // [rsp+5E0h] [rbp+4E0h] BYREF

  v33 = 0;
  v32 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v32, this, 0x220u, 0LL, 0LL, 0LL);
  v4 = v32;
  if ( !(_QWORD)v32 )
    goto LABEL_6;
  *(_BYTE *)(v32 + 12) = 0;
  *(_DWORD *)(v4 + 12) &= 0x1FFu;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 63LL;
  SourceString.Buffer = (wchar_t *)&v34;
  DestinationString.Buffer = (wchar_t *)&v35;
  ValueName.Buffer = (wchar_t *)&v36;
  Handle = 0LL;
  v25 = 1;
  *(_QWORD *)&SourceString.Length = 34078720LL;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 34078720LL;
  v5 = RtlStringCbCopyW((unsigned __int16 *)(v4 + 24), 0x208uLL, a2);
  RegistryPathFromPDO = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to copy RegPathIn to VMBus Command for VmBusGetRegistryKeys (status = 0x%I64x).",
      RegistryPathFromPDO,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_51;
  }
  v26 = 130040;
  v7 = (_DWORD *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL);
  v8 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL, 12625LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
      12625LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_6:
    LODWORD(RegistryPathFromPDO) = -1073741801;
    goto LABEL_51;
  }
  RegistryPathFromPDO = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v32, v7, &v26);
  if ( !v26 )
  {
    RegistryPathFromPDO = -1073741823LL;
    WdLogSingleEntry1(2LL, -1073741823LL);
    v9 = L"VmBusSendSyncMessage failed for VmBusGetRegistryKeys (status = 0x%I64x).";
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, RegistryPathFromPDO, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_48;
  }
  if ( (int)v8[1] < 0 )
  {
    RegistryPathFromPDO = (int)v8[1];
    WdLogSingleEntry1(2LL, RegistryPathFromPDO);
    v9 = L"VmBusSendSyncMessage Output failed for VmBusGetRegistryKeys (status = 0x%I64x).";
    goto LABEL_47;
  }
  if ( (int)RegistryPathFromPDO < 0 )
  {
    WdLogSingleEntry1(2LL, RegistryPathFromPDO);
    v9 = L"VmBusSendReadRegistryKeys failed: 0x%I64x";
    goto LABEL_47;
  }
  if ( *v8 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 9) + 216LL));
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO < 0 )
    {
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      v9 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
    wcscpy((wchar_t *)&v26, L"\\");
    *(_QWORD *)&v31.Length = 262146LL;
    v31.Buffer = (wchar_t *)&v26;
    v11 = RtlUnicodeStringCat(&SourceString, &v31);
    RegistryPathFromPDO = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      v9 = L"Failed to concat \\ to RegPathRoot for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
    v12 = 0;
    if ( *v8 )
    {
      while ( 1 )
      {
        Data = (__int64)&v8[774 * v12 + 2];
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v14 = 0;
        v15 = *(_WORD *)(Data + 2048);
        if ( v15 )
          break;
LABEL_28:
        v25 = 1;
        v19 = OpenRegistrySubkey(&Handle, 0x20006u, 0LL, &DestinationString, &v25);
        RegistryPathFromPDO = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry1(2LL, v19);
          v9 = L"Failed to create registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
          goto LABEL_47;
        }
        v20 = (ULONG *)(Data + 3092);
        if ( Data != -2568 || *v20 )
        {
          v21 = *(_DWORD *)(Data + 3088);
          if ( (unsigned int)(v21 - 1) <= 1 )
          {
            v23 = TranslateUmdFileNameToVm((size_t *)Data, 0x400u, (unsigned int *)(Data + 3092));
            RegistryPathFromPDO = v23;
            if ( v23 < 0 )
            {
              WdLogSingleEntry1(2LL, v23);
              v9 = L"Failed to translate UmdFileName to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_47;
            }
          }
          else if ( v21 == 7 )
          {
            v22 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)Data, 1024, (unsigned int *)(Data + 3092));
            RegistryPathFromPDO = v22;
            if ( v22 < 0 )
            {
              WdLogSingleEntry1(2LL, v22);
              v9 = L"Failed to translate UmdFileNames in Multi String Type to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_47;
            }
          }
          RtlInitUnicodeString(&ValueName, (PCWSTR)(Data + 2568));
          RegistryPathFromPDO = ZwSetValueKey(Handle, &ValueName, 0, *(_DWORD *)(Data + 3088), (PVOID)Data, *v20);
          if ( Handle )
            ZwClose(Handle);
          Handle = 0LL;
          if ( (int)RegistryPathFromPDO < 0 )
          {
            WdLogSingleEntry1(2LL, RegistryPathFromPDO);
            v9 = L"Failed to set value of reg key for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_47;
          }
        }
        if ( (unsigned int)++v12 >= *v8 )
          goto LABEL_48;
      }
      v16 = (wchar_t *)(Data + 2048);
      while ( 1 )
      {
        if ( v15 == 92 )
        {
          v25 = 1;
          v17 = OpenRegistrySubkey(&Handle, 0x20006u, 0LL, &DestinationString, &v25);
          RegistryPathFromPDO = v17;
          if ( v17 < 0 )
          {
            WdLogSingleEntry1(2LL, v17);
            v9 = L"Failed to create registry key for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_47;
          }
          if ( Handle )
            ZwClose(Handle);
          Handle = 0LL;
        }
        v18 = RtlUnicodeStringCchCatStringN(&DestinationString, v16);
        RegistryPathFromPDO = v18;
        if ( v18 < 0 )
          break;
        v16 = (wchar_t *)(Data + 2 * ((unsigned int)++v14 + 1024LL));
        v15 = *v16;
        if ( !*v16 )
          goto LABEL_28;
      }
      WdLogSingleEntry1(2LL, v18);
      v9 = L"Failed to build registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 12650LL);
  }
LABEL_48:
  if ( Handle )
    ZwClose(Handle);
  operator delete(v8);
LABEL_51:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
  return (unsigned int)RegistryPathFromPDO;
}
