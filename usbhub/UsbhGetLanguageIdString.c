/*
 * XREFs of UsbhGetLanguageIdString @ 0x1C00503F4
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002E6BC (WPP_RECORDER_SF_dD.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C00530B4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0054830 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  _DWORD *v6; // rsi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  _WORD *Pool2; // rbx
  int StringFromDevice; // edi
  __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rdx
  _WORD *v15; // rsi
  __int64 v16; // rcx
  _WORD *v17; // rdi
  int v18; // ebp
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  int v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h] BYREF

  v22[0] = 0;
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
  Pool2 = (_WORD *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  v23 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v22, (_DWORD)Pool2, (__int64)&v23, 0, 0);
  v11 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v11 == -1073741824 || (v12 = v23, !(unsigned __int8)UsbhValidateStringDescriptor(v11, Pool2, v23, v22)) )
  {
    UsbhException(a1, *((_WORD *)v6 + 714), 0x3Fu, Pool2, v23, StringFromDevice, v22[0], usbfile_idstring_c, 2016, 0);
    ExFreePoolWithTag(Pool2, 0);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v8 = 24;
LABEL_26:
    WPP_RECORDER_SF_((__int64)v7->DeviceExtension, 0, 1u, v8, (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids);
    return 3221225659LL;
  }
  v14 = (*(unsigned __int8 *)Pool2 >> 1) - 1;
  if ( *(unsigned __int8 *)Pool2 >> 1 == 1 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225659LL;
  }
  v15 = Pool2 + 1;
  v16 = (unsigned int)v14;
  v17 = Pool2;
  while ( v16 )
  {
    *v17++ = *v15++;
    --v16;
  }
  Pool2[(unsigned int)v14] = 0;
  *(_DWORD *)(a3 + 4) = v12;
  *(_QWORD *)(a3 + 8) = Pool2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v14;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x19u,
      (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
      v20);
  }
  v18 = 0;
  while ( *Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v21) = (unsigned __int16)*Pool2;
      LODWORD(v20) = v18;
      WPP_RECORDER_SF_dD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v13,
        0x1Au,
        (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
        v20,
        v21);
      ++v18;
    }
    ++Pool2;
  }
  return 0LL;
}
