PDEVICE_OBJECT __fastcall PiSwGetChildPdo(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rsi
  WCHAR *v6; // r15
  char v7; // r12
  __int64 v8; // rdx
  __int64 PdoAssociation; // r8
  char v10; // r14
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  _DWORD *DeviceExtension; // r14
  __int64 v15; // r8
  int v16; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  PDEVICE_OBJECT v24; // [rsp+A0h] [rbp+50h] BYREF

  v3 = a2 - 96;
  v24 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  v6 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(v3 + 112),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Start,
      a3,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      *(const wchar_t **)(*(_QWORD *)(v3 + 112) + 8LL),
      *(_DWORD *)(v3 + 4));
  v7 = 1;
  LOBYTE(a3) = 1;
  PdoAssociation = PiSwFindPdoAssociation(v3, DeviceObject, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    v10 = 0;
    if ( PdoAssociation )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
      *(_DWORD *)(v21 + 8) &= ~8u;
      if ( (*(_DWORD *)(v21 + 8) & 4) != 0 )
        PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0LL);
    }
    goto LABEL_7;
  }
  if ( PdoAssociation )
  {
    v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
    v7 = 0;
    *((_DWORD *)v5->DeviceExtension + 2) = *((_DWORD *)v5->DeviceExtension + 2) & 0xFFFFFFB7 | 8;
LABEL_6:
    v10 = v7;
    goto LABEL_7;
  }
  if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
  {
    if ( !*(_QWORD *)(v3 + 80) || (p_DestinationString = (UNICODE_STRING *)(v3 + 72), *(_WORD *)(v3 + 72) < 2u) )
    {
      v16 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&SourceString, 3uLL);
      v6 = (WCHAR *)SourceString;
      if ( v16 < 0 || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
        goto LABEL_15;
      p_DestinationString = &DestinationString;
    }
    v19 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)p_DestinationString, 0x746C6644u);
    if ( v19 )
    {
      if ( (byte_140C0E10C & 8) != 0 )
        McTemplateK0zzq_EtwWriteTransfer(
          v18,
          v8,
          PdoAssociation,
          *(const wchar_t **)(v3 + 8),
          *(const wchar_t **)(v3 + 16),
          *(_WORD *)(v3 + 200));
      ObfDereferenceObject(v19);
      if ( !*(_WORD *)(v3 + 200) )
        IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
      v20 = *(_WORD *)(v3 + 200);
      if ( v20 != -1 )
        *(_WORD *)(v3 + 200) = v20 + 1;
      v10 = 0;
      goto LABEL_7;
    }
  }
LABEL_15:
  v12 = *(_QWORD *)(v3 + 120);
  *(_WORD *)(v3 + 200) = 0;
  if ( v12 )
    PiSwMakePdoInactive(v12, v8, PdoAssociation);
  v10 = 0;
  v13 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v24);
  v5 = v24;
  if ( v13 >= 0 )
  {
    DeviceExtension = v24->DeviceExtension;
    *(_OWORD *)DeviceExtension = 0LL;
    v15 = *(_QWORD *)(v3 + 152);
    if ( v15 && (int)ObSetSecurityObjectByPointer((__int64)v5, 28, v15) < 0 )
    {
      IoDeleteDevice(v5);
      v5 = 0LL;
    }
    else
    {
      *(_QWORD *)DeviceExtension = v3;
      _InterlockedAdd((volatile signed __int32 *)v3, 1u);
      v5 = v24;
      *(_QWORD *)(v3 + 120) = v24;
      DeviceExtension[2] |= 8u;
      v5->Flags &= ~0x80u;
      PiSwAddPdoAssociation(v3, DeviceObject, v5);
      v6 = (WCHAR *)SourceString;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x57706E50u);
  if ( v5 )
    ObfReferenceObject(v5);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zztt_EtwWriteTransfer(
      *(_QWORD *)(v3 + 16),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Stop,
      PdoAssociation,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      v5 != 0LL,
      v10);
  return v5;
}
