/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02522C0
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024C7DC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023F090 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C023F160 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C024D294 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C024D4A0 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z @ 0x1C024D5B0 (-IsInkDevice@InkDeviceParser@@SA_NGGPEBG0@Z.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0253160 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C02531EC (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // eax
  int v4; // ebx
  const GUID *v5; // r9
  __int64 v6; // rdi
  __int16 v7; // dx
  __int16 v8; // cx
  struct _HIDP_PREPARSED_DATA *v9; // r15
  struct UsageValueInfo *v10; // rax
  int DeviceCaps; // eax
  _BYTE *v12; // r14
  int DeviceFeatures; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+74h] [rbp-8Ch]
  _BYTE v26[544]; // [rsp+80h] [rbp-80h] BYREF

  v3 = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1C0326250 > 2 )
    {
      v25 = 0;
      v5 = 0LL;
      *(_DWORD *)v21 = v3;
LABEL_9:
      v24 = 4;
      v23 = v21;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0326250,
        (unsigned __int8 *)dword_1C02EFE22,
        0LL,
        v5,
        3u,
        &v22);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 544);
  v7 = *(_WORD *)(v6 + 40);
  v8 = *(_WORD *)(v6 + 42);
  v9 = *(struct _HIDP_PREPARSED_DATA **)(v6 + 16);
  v21[0] = *(_WORD *)(v6 + 110);
  if ( !InkDeviceParser::IsInkDevice(v8, v7, v21, 0LL) )
  {
    v4 = -1073741811;
    if ( (unsigned int)dword_1C0326250 > 2 )
    {
      v25 &= (unsigned int)v5;
      *(_DWORD *)v21 = -1073741811;
      goto LABEL_9;
    }
LABEL_40:
    InkDevice::UnInitialize(this);
    return (unsigned int)v4;
  }
  v10 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v10;
  if ( !v10 )
  {
    v4 = -1073741801;
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_40;
    v25 = 0;
    v5 = 0LL;
    *(_DWORD *)v21 = -1073741801;
    goto LABEL_9;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v9, (struct UsageValueInfo *)v26, v10, (InkDevice *)((char *)this + 104));
  v4 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_40;
    v25 = 0;
    v5 = 0LL;
    *(_DWORD *)v21 = DeviceCaps;
    goto LABEL_9;
  }
  v12 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v6 + 48), 1349217865LL);
  if ( !v12 )
  {
    v4 = -1073741801;
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_40;
    v25 = 0;
    v5 = 0LL;
    *(_DWORD *)v21 = -1073741801;
    goto LABEL_9;
  }
  *v12 = *((_BYTE *)this + 104);
  DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                     this,
                     0xB0192u,
                     0LL,
                     0,
                     v12,
                     *(unsigned __int16 *)(v6 + 48),
                     (unsigned int *)v21);
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_39;
    goto LABEL_38;
  }
  DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                     v9,
                     v12,
                     *(unsigned __int16 *)(v6 + 48),
                     (const struct UsageValueInfo *)v26,
                     (InkDevice *)((char *)this + 116));
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_39;
    goto LABEL_38;
  }
  DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
  v4 = DeviceFeatures;
  if ( DeviceFeatures < 0 )
  {
    if ( (unsigned int)dword_1C0326250 <= 2 )
      goto LABEL_39;
    goto LABEL_38;
  }
  v14 = *((_DWORD *)this + 36);
  v15 = (4 * (v14 & 0x10)) | 0xB;
  if ( (v14 & 4) == 0 )
    v15 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
  v16 = v15 | 4;
  if ( (v14 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 0x10;
  if ( (v14 & 1) == 0 )
    v17 = v16;
  v18 = v17 | 0x20;
  if ( (v14 & 2) == 0 )
    v18 = v17;
  *((_DWORD *)this + 37) = v18;
  v19 = Win32AllocPoolZInit(*(unsigned __int16 *)(v6 + 46), 1349217865LL);
  *((_QWORD *)this + 20) = v19;
  if ( !v19 )
  {
    DeviceFeatures = -1073741801;
    v4 = -1073741801;
    if ( (unsigned int)dword_1C0326250 > 2 )
    {
LABEL_38:
      v25 = 0;
      *(_DWORD *)v21 = DeviceFeatures;
      v24 = 4;
      v23 = v21;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0326250,
        (unsigned __int8 *)dword_1C02EFE22,
        0LL,
        0LL,
        3u,
        &v22);
    }
  }
LABEL_39:
  Win32FreePool(v12);
  if ( v4 < 0 )
    goto LABEL_40;
  return (unsigned int)v4;
}
