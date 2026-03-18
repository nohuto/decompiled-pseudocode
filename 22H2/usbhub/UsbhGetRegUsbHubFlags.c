/*
 * XREFs of UsbhGetRegUsbHubFlags @ 0x1C0046580
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C00525B0 (UsbhCheckHubErrata.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0048FCC (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetRegUsbHubFlags(unsigned __int16 *a1)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  wchar_t *v8; // rax
  wchar_t **v9; // rdi
  int v10; // eax
  void (__fastcall *SystemRoutineAddress)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h]
  wchar_t *v15; // [rsp+68h] [rbp-19h]
  wchar_t **v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x56u,
      (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x2CuLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 10) = 0;
    *(_OWORD *)PoolWithTag = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)L"\\vvvvpppprrrr";
    *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)L"prrrr";
    *((_DWORD *)PoolWithTag + 10) = *(_DWORD *)L"r";
    v4 = a1[1274];
    v5 = a1[1275];
    v6 = a1[1276];
    v7 = a1[1274] & 0xF;
    PoolWithTag[9] = (unsigned __int8)Nibble[v4 >> 12];
    PoolWithTag[10] = (unsigned __int8)Nibble[((unsigned int)v4 >> 8) & 0xF];
    PoolWithTag[11] = (unsigned __int8)Nibble[(unsigned __int8)v4 >> 4];
    PoolWithTag[12] = (unsigned __int8)Nibble[v7];
    PoolWithTag[13] = (unsigned __int8)Nibble[(unsigned __int64)(unsigned int)v5 >> 12];
    PoolWithTag[14] = (unsigned __int8)Nibble[((unsigned int)v5 >> 8) & 0xF];
    PoolWithTag[15] = (unsigned __int8)Nibble[(unsigned __int8)v5 >> 4];
    PoolWithTag[16] = (unsigned __int8)Nibble[v5 & 0xF];
    PoolWithTag[17] = (unsigned __int8)Nibble[(unsigned __int64)v6 >> 12];
    PoolWithTag[18] = (unsigned __int8)Nibble[(v6 >> 8) & 0xF];
    PoolWithTag[19] = (unsigned __int8)Nibble[(unsigned __int8)v6 >> 4];
    PoolWithTag[20] = (unsigned __int8)Nibble[v6 & 0xF];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          v4,
          87,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          v4,
          v5,
          v6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v5,
          v4,
          0x58u,
          (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
          v3);
    }
    v8 = GlobalHubValues;
    v9 = &GlobalHubValues;
    while ( v8 )
    {
      v15 = v8;
      v10 = *((_DWORD *)v9 + 2);
      v13 = UsbhQueryGlobalDeviceValue;
      v14 = 0;
      v16 = v9;
      v17 = v10;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))RtlQueryRegistryValues;
      SystemRoutineAddress(2LL, v3, &v13, a1, 0LL);
      v9 += 3;
      v8 = *v9;
    }
    ExFreePoolWithTag(v3, 0);
  }
}
