void *__fastcall UsbhGetMsOsExtendedConfigDesc(__int64 a1, __int64 a2)
{
  int v2; // ebp
  _DWORD *v3; // r14
  void *v4; // rsi
  unsigned int *Pool2; // rax
  int v6; // r8d
  unsigned int *v7; // rdi
  int MsOsFeatureDescriptor; // ebx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int v14; // ebx
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = a1;
  v2 = a2;
  v3 = PdoExt(a2);
  v4 = 0LL;
  LODWORD(v17) = 0;
  if ( (v3[358] & 0x400) == 0 )
    return 0LL;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16LL, 1112885333LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_OWORD *)Pool2 = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v2, 0, v6, 4, (__int64)Pool2, 16, (__int64)&v17);
  if ( MsOsFeatureDescriptor >= 0 )
  {
    if ( (_DWORD)v17 != 16
      || v7[1] != 262400
      || (v11 = *((unsigned __int8 *)v7 + 8), !(_BYTE)v11)
      || (v12 = *v7, v12 != 24 * v11 + 16) )
    {
      MsOsFeatureDescriptor = -1073741668;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xDu,
          (__int64)&WPP_f1b4c9c59f9f315fbcaf54f6e2fa0cb0_Traceguids);
      goto LABEL_28;
    }
    v4 = (void *)ExAllocatePool2(64LL, v12, 1112885333LL);
    if ( !v4 )
    {
      MsOsFeatureDescriptor = -1073741670;
      goto LABEL_28;
    }
    MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v2, 0, v13, 4, (__int64)v4, *v7, (__int64)&v17);
    if ( MsOsFeatureDescriptor >= 0 )
    {
      v14 = v17;
      if ( (_DWORD)v17 != *v7 || RtlCompareMemory(v7, v4, 0x10uLL) != 16 )
      {
        MsOsFeatureDescriptor = -1073741668;
        goto LABEL_28;
      }
      MsOsFeatureDescriptor = USBD_ValidateExtendedConfigurationDescriptor(
                                (unsigned int *)v4,
                                v14,
                                *((_QWORD *)v3 + 299),
                                *(unsigned __int16 *)(*((_QWORD *)v3 + 299) + 2LL));
      if ( MsOsFeatureDescriptor >= 0 )
        goto LABEL_28;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v9 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_28;
      v10 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v9 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_28;
      v10 = 14;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v9 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_28;
    v10 = 12;
  }
  LODWORD(v16) = MsOsFeatureDescriptor;
  WPP_RECORDER_SF_d(
    (__int64)v9->DeviceExtension,
    0,
    1u,
    v10,
    (__int64)&WPP_f1b4c9c59f9f315fbcaf54f6e2fa0cb0_Traceguids,
    v16);
LABEL_28:
  ExFreePoolWithTag(v7, 0);
  if ( MsOsFeatureDescriptor >= 0 )
    return v4;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}
