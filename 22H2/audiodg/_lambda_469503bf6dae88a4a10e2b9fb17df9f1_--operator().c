/*
 * XREFs of _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x140013E1C
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140014B94 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140013BCC (-InitializeCpuManager@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014320 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140014368 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001438C (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x1400143D4 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140014464 (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400147C8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14003B41C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003BFB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14003E6F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF_ @ 0x14003E930 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator()(_QWORD *a1)
{
  HRESULT LastErrorFailHr; // ebx
  __int64 v3; // rbx
  wil::details *v4; // rcx
  HANDLE Event; // rdi
  const char *v6; // r9
  unsigned int v7; // eax
  SC_HANDLE v8; // rdi
  SC_HANDLE v9; // rbx
  const char *v10; // r9
  HANDLE v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  CAudioDGModule *v14; // rcx
  __int64 v15; // rdx
  unsigned int LastError; // esi
  int v17; // eax
  void *v18; // rdx
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  int pcbBytesNeeded; // [rsp+20h] [rbp-39h]
  int pcbBytesNeededa; // [rsp+20h] [rbp-39h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-19h] BYREF
  DWORD pdwType; // [rsp+48h] [rbp-11h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-Dh] BYREF
  int pvData; // [rsp+50h] [rbp-9h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-1h] BYREF
  SC_HANDLE v32; // [rsp+60h] [rbp+7h]
  SC_HANDLE v33; // [rsp+68h] [rbp+Fh]
  BYTE Buffer[4]; // [rsp+70h] [rbp+17h] BYREF
  int v35; // [rsp+74h] [rbp+1Bh]
  unsigned int v36; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  LastErrorFailHr = CoInitializeEx(0LL, 4u);
  if ( LastErrorFailHr < 0 )
  {
    v20 = 329LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      pcbBytesNeeded);
    return (unsigned int)LastErrorFailHr;
  }
  v3 = *a1;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      v3 + 128,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  }
  if ( LastErrorFailHr < 0 )
  {
    v20 = 334LL;
    goto LABEL_34;
  }
  LastErrorFailHr = InitializeCpuManager();
  if ( LastErrorFailHr < 0 )
  {
    v20 = 340LL;
    goto LABEL_34;
  }
  SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &SecurityDescriptor,
    0LL);
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893"
          "335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v7 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
    if ( v7 )
    {
      v22 = 348LL;
    }
    else
    {
      pcbBytesNeeded = 1234;
      v7 = RpcServerRegisterIf3(&unk_1400710A0, 0LL, 0LL, 33LL);
      if ( !v7 )
      {
        fRpcStarted = 1;
        v8 = OpenSCManagerW(0LL, 0LL, 1u);
        v32 = v8;
        v9 = OpenServiceW(v8, L"AUDIOSRV", 4u);
        v33 = v9;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids);
        }
        pdwType = 36;
        if ( QueryServiceStatusEx(v9, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
        {
          if ( ((v35 - 1) & 0xFFFFFFFD) != 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_4b1fa032b8643535ec497c87501ebc2b_Traceguids, v36);
            }
            *(_DWORD *)(*a1 + 144LL) = v36;
            v11 = OpenProcess(0x100000u, 0, *(_DWORD *)(*a1 + 144LL));
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              *a1 + 136LL,
              v11);
            v14 = (CAudioDGModule *)(*(_QWORD *)(*a1 + 136LL) + 1LL);
            if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
            {
              v15 = 369LL;
LABEL_19:
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v15,
                            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
                            v10);
LABEL_23:
              if ( v9 )
                CloseServiceHandle(v9);
              if ( v8 )
                CloseServiceHandle(v8);
              goto LABEL_27;
            }
            v17 = CAudioDGModule::InitializeSecurity(v14, v12, v13, (unsigned int)v10);
            LastError = v17;
            if ( v17 < 0 )
            {
              v24 = 374LL;
            }
            else
            {
              pvData = 0;
              pcbData = 4;
              RegGetValueW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                L"AudioDgWatchDogTimerInMs",
                0x18u,
                0LL,
                &pvData,
                &pcbData);
              v17 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(*a1);
              LastError = v17;
              if ( v17 >= 0 )
              {
                wil::details::SetEvent(*(wil::details **)(*a1 + 152LL), v18);
                LastError = 0;
                goto LABEL_23;
              }
              v24 = 385LL;
            }
            v23 = (unsigned int)v17;
          }
          else
          {
            LastError = -2147418113;
            v23 = 2147549183LL;
            v24 = 364LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            (const char *)v23,
            pcbBytesNeededa);
          goto LABEL_23;
        }
        v15 = 359LL;
        goto LABEL_19;
      }
      v22 = 349LL;
    }
    v21 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v22,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            (const char *)v7,
            pcbBytesNeeded);
  }
  else
  {
    v21 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x15A,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp",
            v6);
  }
  LastError = v21;
LABEL_27:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
