/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0249868
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C020C224 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x1C00226D4 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0040F88 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0041060 (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C014BA3C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0222E20 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C0222F40 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, size_t *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  HANDLE v16; // rcx
  __int64 RegistryPathFromPDO; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v22; // eax
  int v23; // r15d
  __int64 Data; // rbx
  unsigned __int16 v25; // ax
  __int64 v26; // r12
  const unsigned __int16 *v27; // r14
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  ULONG *v31; // r14
  int v32; // ecx
  int v33; // eax
  NTSTATUS v34; // eax
  struct _MDL *DataSize; // [rsp+30h] [rbp-D8h]
  unsigned int v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v41; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-80h] BYREF
  int v43; // [rsp+98h] [rbp-70h]
  unsigned __int16 v44[260]; // [rsp+A0h] [rbp-68h] BYREF
  char v45; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v46; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v47; // [rsp+6C8h] [rbp+5C0h] BYREF

  v43 = 63;
  v36[0] = 1;
  v42[0] = 0LL;
  SourceString.Buffer = (wchar_t *)&v45;
  v42[1] = 0LL;
  DestinationString.Buffer = (wchar_t *)&v46;
  Handle = 0LL;
  ValueName.Buffer = (wchar_t *)&v47;
  *(_QWORD *)&SourceString.Length = 34078720LL;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 34078720LL;
  v3 = RtlStringCbCopyW(v44, 0x208uLL, a2);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v6;
  }
  v36[1] = 130040;
  v11 = (int *)operator new[](0x1FBF8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v10, v9, v12, v13);
    *(_QWORD *)(v14 + 24) = 10777LL;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
  RegistryPathFromPDO = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                          this,
                          (struct DXGKVMB_COMMAND_BASE *)v42,
                          0x220u,
                          v11,
                          &v36[1],
                          DataSize);
  if ( !v36[1] )
  {
    RegistryPathFromPDO = -1073741823LL;
    goto LABEL_7;
  }
  if ( v11[1] < 0 )
  {
    RegistryPathFromPDO = v11[1];
    goto LABEL_7;
  }
  if ( (int)RegistryPathFromPDO >= 0 )
  {
    if ( !*v11 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v18);
      *(_QWORD *)(v20 + 24) = 10802LL;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_8;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 8) + 216LL));
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO < 0 )
      goto LABEL_7;
    v36[1] = *(_DWORD *)L"\\";
    *(_QWORD *)&v41.Length = 262146LL;
    v41.Buffer = (wchar_t *)&v36[1];
    v22 = RtlUnicodeStringCat(&SourceString, &v41);
    RegistryPathFromPDO = v22;
    if ( v22 < 0 )
      goto LABEL_7;
    v23 = 0;
    if ( !*v11 )
      goto LABEL_8;
    while ( 1 )
    {
      Data = (__int64)&v11[774 * v23 + 2];
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      v25 = *(_WORD *)(Data + 2048);
      LODWORD(v26) = 0;
      if ( v25 )
      {
        v27 = (const unsigned __int16 *)(Data + 2048);
        do
        {
          if ( v25 == 92 )
          {
            v36[0] = 1;
            v28 = OpenRegistrySubkey(&Handle, 131078LL, 0LL, &DestinationString, v36);
            RegistryPathFromPDO = v28;
            if ( v28 < 0 )
              goto LABEL_7;
            if ( Handle )
              ZwClose(Handle);
            Handle = 0LL;
          }
          v29 = RtlUnicodeStringCchCatStringN(&DestinationString, v27);
          RegistryPathFromPDO = v29;
          if ( v29 < 0 )
            goto LABEL_7;
          v26 = (unsigned int)(v26 + 1);
          v27 = (const unsigned __int16 *)(Data + 2048 + 2 * v26);
          v25 = *v27;
        }
        while ( *v27 );
      }
      v36[0] = 1;
      v30 = OpenRegistrySubkey(&Handle, 131078LL, 0LL, &DestinationString, v36);
      RegistryPathFromPDO = v30;
      if ( v30 < 0 )
        goto LABEL_7;
      v31 = (ULONG *)(Data + 3092);
      if ( Data != -2568 || *v31 )
        break;
LABEL_39:
      if ( ++v23 >= (unsigned int)*v11 )
        goto LABEL_8;
    }
    v32 = *(_DWORD *)(Data + 3088);
    if ( (unsigned int)(v32 - 1) <= 1 )
    {
      v33 = TranslateUmdFileNameToVm((size_t *)Data, 0x400u, (unsigned int *)(Data + 3092));
    }
    else
    {
      if ( v32 != 7 )
        goto LABEL_36;
      v33 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)Data, 1024, (unsigned int *)(Data + 3092));
    }
    RegistryPathFromPDO = v33;
    if ( v33 < 0 )
      goto LABEL_7;
LABEL_36:
    RtlInitUnicodeString(&ValueName, (PCWSTR)(Data + 2568));
    v34 = ZwSetValueKey(Handle, &ValueName, 0, *(_DWORD *)(Data + 3088), (PVOID)Data, *v31);
    v16 = Handle;
    RegistryPathFromPDO = v34;
    if ( Handle )
      ZwClose(Handle);
    Handle = 0LL;
    if ( (int)RegistryPathFromPDO < 0 )
      goto LABEL_7;
    goto LABEL_39;
  }
LABEL_7:
  v19 = WdLogNewEntry5_WdError(v16, v15);
  *(_QWORD *)(v19 + 24) = RegistryPathFromPDO;
  WdLogEvent5_WdError(v19);
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  operator delete[](v11);
  return (unsigned int)RegistryPathFromPDO;
}
