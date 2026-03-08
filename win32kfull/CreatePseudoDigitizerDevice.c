/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01B3424
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01B1800 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01B331C (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  HANDLE *v9; // r14
  unsigned __int64 v10; // xmm0_8
  struct tagRECT v11; // xmm6
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  void **v16; // rbx
  HANDLE v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _UNICODE_STRING DestinationString_8; // [rsp+38h] [rbp-A9h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-99h] BYREF
  void *v23; // [rsp+58h] [rbp-89h] BYREF
  int v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+A8h] [rbp-39h]
  int v26; // [rsp+B0h] [rbp-31h]
  struct tagRECT v27; // [rsp+B4h] [rbp-2Dh]
  int v28; // [rsp+C4h] [rbp-1Dh]
  int v29; // [rsp+C8h] [rbp-19h]
  __int64 v30; // [rsp+CCh] [rbp-15h]
  unsigned int v31; // [rsp+D4h] [rbp-Dh]
  int v32; // [rsp+D8h] [rbp-9h]

  DestinationString_8 = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  v8 = SGDGetUserSessionState(v7);
  v9 = (HANDLE *)(a3 + 88);
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v8 + 16840), (void **)(a3 + 88)) >= 0 )
  {
    v10 = _mm_srli_si128(*(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v22), 8).m128i_u64[0];
    v22 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    v11 = v22;
    _UpdateReportDescriptor(&v22, 3937 * ((int)v10 / 1000) / 0x64u, 3937 * (SHIDWORD(v10) / 1000) / 0x64u);
    memset_0(&v23, 0, 0x90uLL);
    v24 = 498;
    v23 = &unk_1C035D2A0;
    v25 = 0LL;
    v27 = v11;
    v26 = a1;
    v28 = (int)v10 / 1000;
    v29 = SHIDWORD(v10) / 1000;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      v14 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    v30 = *(_QWORD *)(CurrentProcessWin32Process + 864);
    v15 = PsGetCurrentProcessWin32Process(v14);
    if ( v15 )
      v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
    v16 = (void **)(a3 + 96);
    v17 = *v9;
    v31 = *(_DWORD *)(v15 + 12) & 0x80000000;
    v32 = a2;
    if ( (int)RIMAddInjectionDeviceOfType(v17, &DestinationString_8, 2LL, &v23, 0, a3 + 96) < 0 )
    {
      ZwClose(*v9);
      *v9 = 0LL;
      *v16 = 0LL;
    }
    else
    {
      v19 = SGDGetUserSessionState(v18);
      DeviceInfo = CBaseInput::FindDeviceInfo(*(CBaseInput **)(v19 + 16840), *v16, 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
