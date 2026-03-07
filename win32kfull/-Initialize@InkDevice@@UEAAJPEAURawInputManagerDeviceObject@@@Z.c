__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // eax
  int v4; // ebx
  const GUID *v5; // r9
  const struct tagHIDDESC *HidDesc; // rsi
  __int16 v7; // dx
  struct _HIDP_PREPARSED_DATA *v8; // r12
  struct UsageValueInfo *v9; // rax
  int DeviceCaps; // eax
  _BYTE *v11; // r14
  int DeviceFeatures; // eax
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rax
  unsigned __int16 v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  _BYTE v25[544]; // [rsp+80h] [rbp-80h] BYREF

  v3 = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v24 = 0;
      v5 = 0LL;
      *(_DWORD *)v20 = v3;
LABEL_7:
      v23 = 4;
      v22 = v20;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        v5,
        3u,
        &v21);
      goto LABEL_38;
    }
    goto LABEL_38;
  }
  HidDesc = Rim::RimBackedDeviceBase::GetHidDesc(this);
  v7 = *((_WORD *)HidDesc + 20);
  v8 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)HidDesc + 2);
  v20[0] = *((_WORD *)HidDesc + 55);
  if ( !InkDeviceParser::IsInkDevice(*((_WORD *)HidDesc + 21), v7, v20, 0LL) )
  {
    v4 = -1073741811;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v24 &= (unsigned int)v5;
      *(_DWORD *)v20 = -1073741811;
      goto LABEL_7;
    }
LABEL_38:
    InkDevice::UnInitialize(this);
    return (unsigned int)v4;
  }
  v9 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v9;
  if ( !v9 )
  {
    v4 = -1073741801;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_38;
    v24 = 0;
    v5 = 0LL;
    *(_DWORD *)v20 = -1073741801;
    goto LABEL_7;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v8, (struct UsageValueInfo *)v25, v9, (InkDevice *)((char *)this + 104));
  v4 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_38;
    v24 = 0;
    v5 = 0LL;
    *(_DWORD *)v20 = DeviceCaps;
    goto LABEL_7;
  }
  v11 = (_BYTE *)Win32AllocPoolZInit(*((unsigned __int16 *)HidDesc + 24), 1349217865LL);
  if ( !v11 )
  {
    v4 = -1073741801;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_38;
    v24 = 0;
    v5 = 0LL;
    *(_DWORD *)v20 = -1073741801;
    goto LABEL_7;
  }
  *v11 = *((_BYTE *)this + 104);
  DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                     this,
                     0xB0192u,
                     0LL,
                     0,
                     v11,
                     *((unsigned __int16 *)HidDesc + 24),
                     (unsigned int *)v20);
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_37;
    goto LABEL_36;
  }
  DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                     v8,
                     v11,
                     *((unsigned __int16 *)HidDesc + 24),
                     (const struct UsageValueInfo *)v25,
                     (InkDevice *)((char *)this + 116));
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_37;
    goto LABEL_36;
  }
  DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v13 = *((_DWORD *)this + 36);
  v14 = (4 * (v13 & 0x10)) | 0xB;
  if ( (v13 & 4) == 0 )
    v14 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
  v15 = v14 | 4;
  if ( (v13 & 8) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  if ( (v13 & 1) == 0 )
    v16 = v15;
  v17 = v16 | 0x20;
  if ( (v13 & 2) == 0 )
    v17 = v16;
  *((_DWORD *)this + 37) = v17;
  v18 = Win32AllocPoolZInit(*((unsigned __int16 *)HidDesc + 23), 1349217865LL);
  *((_QWORD *)this + 20) = v18;
  if ( !v18 )
  {
    DeviceFeatures = -1073741801;
    v4 = -1073741801;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
LABEL_36:
      v24 = 0;
      *(_DWORD *)v20 = DeviceFeatures;
      v23 = 4;
      v22 = v20;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v21);
    }
  }
LABEL_37:
  Win32FreePool(v11);
  if ( v4 < 0 )
    goto LABEL_38;
  return (unsigned int)v4;
}
