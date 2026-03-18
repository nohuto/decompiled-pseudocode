/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01D8C74
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01D71F8 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01D8B6C (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rsi
  HANDLE *v7; // r14
  unsigned __int64 v8; // xmm0_8
  struct tagRECT v9; // xmm6
  __int64 v10; // rcx
  HANDLE v11; // rcx
  struct _UNICODE_STRING DestinationString_8; // [rsp+38h] [rbp-A9h] BYREF
  struct tagRECT v14; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v15[18]; // [rsp+58h] [rbp-89h] BYREF

  DestinationString_8 = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  v7 = (HANDLE *)(a3 + 88);
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, (void **)(a3 + 88)) >= 0 )
  {
    v8 = _mm_srli_si128(*(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v14), 8).m128i_u64[0];
    v14 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    v9 = v14;
    _UpdateReportDescriptor(&v14, 3937 * ((int)v8 / 1000) / 0x64u, 3937 * (SHIDWORD(v8) / 1000) / 0x64u);
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[1]) = 498;
    v15[0] = &unk_1C032F540;
    v15[10] = 0LL;
    *(struct tagRECT *)((char *)&v15[11] + 4) = v9;
    LODWORD(v15[11]) = a1;
    HIDWORD(v15[13]) = (int)v8 / 1000;
    LODWORD(v15[14]) = SHIDWORD(v8) / 1000;
    *(_QWORD *)((char *)&v15[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v10) + 880);
    HIDWORD(v15[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v15[14] + 4)) + 12) & 0x80000000;
    v11 = *v7;
    LODWORD(v15[16]) = a2;
    if ( (int)RIMAddInjectionDeviceOfType(v11, &DestinationString_8, 2LL, v15, 0, a3 + 96) < 0 )
    {
      ZwClose(*v7);
      *v7 = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
    }
    else
    {
      DeviceInfo = CBaseInput::FindDeviceInfo(gpHidInput, *(void **)(a3 + 96), 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
