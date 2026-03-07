__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 CurrentStackLocation; // rcx
  const char *v5; // r15
  char v6; // di
  _QWORD *v7; // rbx
  unsigned __int8 v8; // dl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *IrpText; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int v18; // esi
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  const char *v25; // r15
  const char *v26; // rcx
  __int64 v27; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v29; // [rsp+B8h] [rbp+48h]
  char v30; // [rsp+C0h] [rbp+50h]
  wchar_t *v31; // [rsp+C8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = byte_1C00622D0;
  v6 = 0;
  v31 = 0LL;
  v7 = (_QWORD *)DeviceExtension;
  v8 = *(_BYTE *)(CurrentStackLocation + 1);
  DestinationString = 0LL;
  v9 = *(_DWORD *)(CurrentStackLocation + 8);
  v29 = v8;
  v30 = v9;
  if ( !v9 )
    goto LABEL_30;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", v7[77], "ACPI\\DockDevice", 0LL);
    if ( v18 >= 0 )
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.MaximumLength >> 1) - 1] = 0;
      v27 = -1LL;
      do
        ++v27;
      while ( DestinationString.Buffer[v27] );
      DestinationString.Buffer[(unsigned int)v27] = 38;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_8:
    v18 = -1073741637;
LABEL_9:
    a2->IoStatus.Information = 0LL;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_30:
    v18 = ACPIInitUnicodeString(&DestinationString);
    goto LABEL_31;
  }
  if ( v12 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(CurrentStackLocation, v8);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        (__int64)v15,
        0x15u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        IrpText,
        v30,
        v16,
        v17,
        v15);
    }
    goto LABEL_8;
  }
  v23 = v7[23];
  if ( v23 )
  {
    v18 = ACPIGet(v23, 0x4449555Fu, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v31, 0LL);
    if ( v18 >= 0 )
    {
      DestinationString.Buffer = v31;
      goto LABEL_32;
    }
LABEL_31:
    if ( v18 < 0 )
      goto LABEL_9;
LABEL_32:
    a2->IoStatus.Information = (unsigned __int64)DestinationString.Buffer;
LABEL_10:
    a2->IoStatus.Status = v18;
    IofCompleteRequest(a2, 0);
    if ( v7 )
    {
      v6 = (char)v7;
      if ( (v7[1] & 0x200000000000LL) != 0 )
        v5 = (const char *)v7[76];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = ACPIDebugGetIrpText(v19, v29);
      WPP_RECORDER_SF_qsdLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        (__int64)v21,
        0x16u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        v20,
        v30,
        v18,
        v6,
        v5,
        v21);
    }
    return (unsigned int)v18;
  }
  v24 = v7[1];
  v25 = byte_1C00622D0;
  v26 = byte_1C00622D0;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = (const char *)v7[76];
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = (const char *)v7[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x14u,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)a2,
      (char)v7,
      v25,
      v26);
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 3221225473LL;
}
