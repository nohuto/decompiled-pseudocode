__int64 __fastcall CComputeScribbleScheduler::Initialize(
        CComputeScribbleScheduler *this,
        struct IDXGIOutputDWM *a2,
        struct IDCompositionDirectInkCommunicationPartner *a3)
{
  __int64 (__fastcall *v6)(struct IDCompositionDirectInkCommunicationPartner *, __int64); // rbx
  __int64 v7; // rax
  int LastErrorFailHr; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  double v12; // xmm1_8
  __int64 v13; // rdx
  wil::details *v14; // rcx
  wil::details *Event; // rbx
  __int64 v16; // r8
  const char *v17; // r9
  struct ID3D12CommandQueue *v18; // rcx
  CComputeScribbleStopwatch *v19; // rsi
  double v20; // xmm1_8
  double v21; // xmm0_8
  __int64 v22; // r8
  unsigned int v23; // ebx
  CSwapChainBuffer *v24; // r14
  int v25; // eax
  unsigned int v26; // esi
  _BYTE *v27; // rdx
  void *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  HANDLE Thread; // rax
  const char *v33; // r9
  char *v34; // rbx
  __int64 v35; // rdx
  HRESULT v36; // eax
  HANDLE hThread; // [rsp+30h] [rbp-D0h] BYREF
  CComputeScribbleStopwatch **v38; // [rsp+38h] [rbp-C8h]
  struct Windows::Devices::Display::Core::IDisplayTarget *v39; // [rsp+40h] [rbp-C0h] BYREF
  char v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  char *v42; // [rsp+58h] [rbp-A8h]
  struct Windows::Devices::Display::Core::IDisplayDevice *v43; // [rsp+60h] [rbp-A0h] BYREF
  char v44; // [rsp+68h] [rbp-98h]
  _DWORD v45[48]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v6 = *(__int64 (__fastcall **)(struct IDCompositionDirectInkCommunicationPartner *, __int64))(*(_QWORD *)a3 + 40LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 82) + 24LL))(*((_QWORD *)g_pComposition + 82));
  LastErrorFailHr = v6(a3, v7);
  if ( LastErrorFailHr < 0 )
  {
    v9 = 104LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  wil::com_ptr_t<IDCompositionDirectInkCommunicationPartner,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 23,
    (__int64)a3);
  LastErrorFailHr = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v45);
  if ( LastErrorFailHr < 0 )
  {
    v9 = 108LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 10) = v45[7];
  *((_DWORD *)this + 11) = v45[8];
  v10 = *((_QWORD *)this + 25);
  v11 = *(_QWORD *)(v10 + 328);
  if ( v11 < 0 )
  {
    v11 = *(_QWORD *)(v10 + 328) & 1LL;
    v12 = (double)(int)(v11 | (*(_QWORD *)(v10 + 328) >> 1)) + (double)(int)(v11 | (*(_QWORD *)(v10 + 328) >> 1));
  }
  else
  {
    v12 = (double)(int)v11;
  }
  v39 = 0LL;
  v43 = 0LL;
  v38 = (CComputeScribbleStopwatch **)((char *)this + 32);
  v40 = 1;
  v42 = (char *)this + 24;
  v44 = 1;
  *((double *)this + 6) = v12 / (double)(int)g_qpcFrequency.LowPart;
  LastErrorFailHr = CDDisplayManager::CreateDDisplayDeviceAndTarget((CDDisplayManager *)v11, a2, &v43, &v39);
  if ( v44 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::attach(v42, v43);
  if ( v40 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v38, v39);
  if ( LastErrorFailHr < 0 )
  {
    v9 = 123LL;
    goto LABEL_3;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 9,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v14, v13, v16, v17);
    if ( LastErrorFailHr < 0 )
    {
      v9 = 126LL;
      goto LABEL_3;
    }
  }
  LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 64LL))(
                      *((_QWORD *)this + 4),
                      &v41);
  if ( LastErrorFailHr < 0 )
  {
    v9 = 129LL;
    goto LABEL_3;
  }
  LastErrorFailHr = CalculateDisplayBlankTime(
                      v45[0] | (unsigned __int64)((__int64)v45[1] << 32),
                      v41,
                      (double *)this + 7);
  if ( LastErrorFailHr < 0 )
  {
    v9 = 132LL;
    goto LABEL_3;
  }
  v18 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 2);
  v39 = 0LL;
  v38 = (CComputeScribbleStopwatch **)((char *)this + 80);
  v40 = 1;
  LastErrorFailHr = CComputeScribbleStopwatch::Create(v18, &v39);
  if ( v40 )
  {
    v19 = *v38;
    *v38 = v39;
    if ( v19 )
    {
      CComputeScribbleStopwatch::~CComputeScribbleStopwatch(v19);
      operator delete(v19);
    }
  }
  if ( LastErrorFailHr < 0 )
  {
    v9 = 136LL;
    goto LABEL_3;
  }
  v20 = *((double *)this + 6);
  if ( (float)((float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0) <= v20 )
    v20 = (float)((float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0);
  *(double *)this = v20;
  v21 = DOUBLE_0_005;
  if ( (float)((float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0) <= 0.005 )
    v21 = (float)((float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0);
  v22 = *((_QWORD *)this + 25);
  v23 = 0;
  *((double *)this + 1) = v21;
  if ( !*(_DWORD *)(v22 + 316) )
  {
LABEL_38:
    v29 = *(unsigned int *)(v22 + 316);
    v30 = (__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) >> 5;
    if ( v29 >= v30 )
    {
      if ( v29 > v30 )
      {
        if ( v29 <= (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 17)) >> 5 )
          *((_QWORD *)this + 18) = std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(
                                     *((char **)this + 18),
                                     v29 - v30);
        else
          std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)this + 136,
            v29);
      }
    }
    else
    {
      *((_QWORD *)this + 18) = *((_QWORD *)this + 17) + 32 * v29;
    }
    hThread = 0LL;
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)lambda_519802986d06bbdf622f922bf8fedd22_::_lambda_invoker_cdecl_,
               this,
               4u,
               0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hThread,
      Thread);
    v34 = (char *)hThread;
    if ( hThread )
    {
      v36 = SetThreadDescription(hThread, L"D3D12 Compute Scribble");
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          172LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v36);
      if ( SetThreadPriority(v34, 2) && ResumeThread(v34) != -1 )
      {
        if ( (HANDLE *)((char *)this + 64) != &hThread )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            (void **)this + 8,
            v34);
          v34 = 0LL;
        }
        if ( (unsigned __int64)(v34 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v34);
        return 0LL;
      }
      v35 = 183LL;
    }
    else
    {
      v35 = 169LL;
    }
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)v35,
                        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
                        v33);
    CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&hThread);
    return (unsigned int)LastErrorFailHr;
  }
  while ( 1 )
  {
    v24 = *(CSwapChainBuffer **)(*(_QWORD *)(v22 + 248) + 8LL * (v23 % *(_DWORD *)(v22 + 316)));
    v25 = CSwapChainBuffer::EnsureComputeScribbleResources(v24, (struct CLegacySwapChain *)v22);
    v26 = v25;
    if ( v25 < 0 )
      break;
    v27 = (_BYTE *)*((_QWORD *)this + 15);
    v28 = (void *)*((_QWORD *)v24 + 12);
    hThread = v28;
    if ( v27 == *((_BYTE **)this + 16) )
    {
      std::vector<CComputeScribbleFramebuffer *>::_Emplace_reallocate<CComputeScribbleFramebuffer *>(
        (const void **)this + 14,
        v27,
        &hThread);
    }
    else
    {
      *(_QWORD *)v27 = v28;
      *((_QWORD *)this + 15) += 8LL;
    }
    v22 = *((_QWORD *)this + 25);
    if ( ++v23 >= *(_DWORD *)(v22 + 316) )
      goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
