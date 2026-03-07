__int64 __fastcall UsbhPdoPnp_QueryDeviceText(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  _DWORD *v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v10; // rdi
  unsigned int Length; // ebp
  __int16 Size; // r14
  int Status; // ebx
  void *Pool2; // rdi
  unsigned int v15; // eax
  const void *v16; // rdx
  int v17; // edx
  int v18; // r8d
  int v20; // [rsp+20h] [rbp-58h]
  int v21[2]; // [rsp+28h] [rbp-50h]

  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v21[1] = HIDWORD(a1);
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      1u,
      0x11u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
  }
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v10 = v5;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v20, a1, Length, Size);
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x13u,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
      Status = v10[557] == 0 ? 0xC00000BB : 0;
      v3 = (unsigned __int64)(v10 + 556) & -(__int64)(v10[557] != 0);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x14u,
        (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
    if ( !*((_BYTE *)v10 + 1415) || (v10[358] & 0x800) != 0 )
    {
      if ( !v10[549] )
      {
        Status = -1073741637;
        goto LABEL_41;
      }
      v3 = (__int64)(v10 + 548);
      Status = 0;
      goto LABEL_31;
    }
    v3 = (__int64)(v10 + 540);
    Status = UsbhGetProductIdString(*((_QWORD *)v10 + 148), a1, Size, (__int64)(v10 + 540));
    if ( Status == -1073741637 && Size != 1033 )
      Status = UsbhGetProductIdString(*((_QWORD *)v10 + 148), *((_QWORD *)v10 + 105), 0x409u, (__int64)(v10 + 540));
    if ( (Status & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(Status) )
      UsbhException(*((_QWORD *)v10 + 148), *((_WORD *)v10 + 714), 0x3Au, 0LL, 0, Status, 0, usbfile_pdo_c, 2351, 0);
  }
  if ( Status < 0 )
    goto LABEL_41;
LABEL_31:
  if ( !v3 )
    goto LABEL_41;
  Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned int *)(v3 + 4), 1112885333LL);
  if ( !Pool2 )
  {
LABEL_39:
    Status = -1073741670;
    goto LABEL_41;
  }
  v15 = *(_DWORD *)(v3 + 4);
  if ( !v15 || (v16 = *(const void **)(v3 + 8)) == 0LL )
  {
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_39;
  }
  memmove(Pool2, v16, v15);
  a2->IoStatus.Information = (unsigned __int64)Pool2;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_44;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      21,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      (__int64)Pool2);
LABEL_41:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v21[0] = Status;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      *(_QWORD *)v21);
  }
LABEL_44:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
