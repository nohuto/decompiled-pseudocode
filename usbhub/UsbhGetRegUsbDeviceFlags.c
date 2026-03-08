/*
 * XREFs of UsbhGetRegUsbDeviceFlags @ 0x1C0045828
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C00388EC (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0046A7C (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00484FC (WPP_RECORDER_SF_dDD.c)
 */

__int64 __fastcall UsbhGetRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  wchar_t *v11; // rax
  wchar_t **v12; // rdi
  int v13; // eax
  void (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+60h] [rbp-21h]
  wchar_t *v18; // [rsp+68h] [rbp-19h]
  wchar_t **v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x52u,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  v3 = (unsigned __int16 *)PdoExt(a2);
  UsbhRegQueryGlobalLegacyDeviceKeys(v4, a2);
  result = ExAllocatePool2(64LL, 44LL, 1112885333LL);
  v6 = result;
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    *(_OWORD *)(result + 16) = *(_OWORD *)L"\\vvvvpppprrrr";
    *(_QWORD *)(result + 32) = *(_QWORD *)L"prrrr";
    *(_DWORD *)(result + 40) = *(_DWORD *)L"r";
    v7 = v3[704];
    v8 = v3[705];
    v9 = v3[706];
    v10 = v3[704] & 0xF;
    *(_WORD *)(result + 18) = (unsigned __int8)Nibble[(unsigned __int64)v3[704] >> 12];
    *(_WORD *)(result + 20) = (unsigned __int8)Nibble[(v7 >> 8) & 0xF];
    *(_WORD *)(result + 22) = (unsigned __int8)Nibble[(unsigned __int8)v7 >> 4];
    *(_WORD *)(result + 24) = (unsigned __int8)Nibble[v10];
    *(_WORD *)(result + 26) = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
    *(_WORD *)(result + 28) = (unsigned __int8)Nibble[(v8 >> 8) & 0xF];
    *(_WORD *)(result + 30) = (unsigned __int8)Nibble[(unsigned __int8)v8 >> 4];
    *(_WORD *)(result + 32) = (unsigned __int8)Nibble[v8 & 0xF];
    *(_WORD *)(result + 34) = (unsigned __int8)Nibble[(unsigned __int64)v9 >> 12];
    *(_WORD *)(result + 36) = (unsigned __int8)Nibble[(v9 >> 8) & 0xF];
    *(_WORD *)(result + 38) = (unsigned __int8)Nibble[(unsigned __int8)v9 >> 4];
    *(_WORD *)(result + 40) = (unsigned __int8)Nibble[v9 & 0xF];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          v7,
          83,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          v7,
          v8,
          v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          v7,
          84,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          v6);
    }
    v11 = GlobalDeviceValues;
    v12 = &GlobalDeviceValues;
    while ( v11 )
    {
      v18 = v11;
      v13 = *((_DWORD *)v12 + 2);
      v16 = UsbhQueryGlobalDeviceValue;
      v17 = 0;
      v19 = v12;
      v20 = v13;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v24 = 0;
      v25 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
      SystemRoutineAddress(2LL, v6, &v16, a2, 0LL);
      v12 += 3;
      v11 = *v12;
    }
    return v6;
  }
  return result;
}
