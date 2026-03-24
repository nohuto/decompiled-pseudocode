/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C00510CC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002F0C8 (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C0053E24 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C00555D8 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  _WORD *PoolWithTag; // rax
  _WORD *v10; // rbx
  int StringFromDevice; // esi
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // rdx
  _WORD *v16; // rsi
  __int64 v17; // rcx
  _WORD *v18; // rdi
  int v19; // ebp
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v24; // [rsp+A8h] [rbp+20h] BYREF

  v23[0] = 0;
  v5 = a2;
  v6 = PdoExt(a2);
  if ( !*((_BYTE *)v6 + 1415) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v8 = 23;
    goto LABEL_26;
  }
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xFFuLL);
  v24 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v23, (_DWORD)v10, (__int64)&v24, 0, 0);
  v12 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v12 == -1073741824 || (v13 = v24, !(unsigned __int8)UsbhValidateStringDescriptor(v12, v10, v24, v23)) )
  {
    UsbhException(a1, *((_WORD *)v6 + 714), 0x3Fu, v10, v24, StringFromDevice, v23[0], usbfile_idstring_c, 1768, 0);
    ExFreePoolWithTag(v10, 0);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v8 = 24;
LABEL_26:
    WPP_RECORDER_SF_((__int64)v7->DeviceExtension, 0, 1u, v8, (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids);
    return 3221225659LL;
  }
  v15 = (*(unsigned __int8 *)v10 >> 1) - 1;
  if ( *(unsigned __int8 *)v10 >> 1 == 1 )
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225659LL;
  }
  v16 = v10 + 1;
  v17 = (unsigned int)v15;
  v18 = v10;
  while ( v17 )
  {
    *v18++ = *v16++;
    --v17;
  }
  v10[(unsigned int)v15] = 0;
  *(_DWORD *)(a3 + 4) = v13;
  *(_QWORD *)(a3 + 8) = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v21) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x19u,
      (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids,
      v21);
  }
  v19 = 0;
  while ( *v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v22) = (unsigned __int16)*v10;
      LODWORD(v21) = v19;
      WPP_RECORDER_SF_dD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v14,
        0x1Au,
        (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids,
        v21,
        v22);
      ++v19;
    }
    ++v10;
  }
  return 0LL;
}
