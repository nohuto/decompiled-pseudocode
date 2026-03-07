__int64 __fastcall BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  wil::details *EventW; // rax
  HANDLE v6; // rbx
  bool v7; // di
  void *v8; // rdx
  DWORD LastError; // ebx
  __int64 v10; // rcx
  void *v11; // rdx
  int v12; // r15d
  int v13; // r12d
  HANDLE FileMappingW; // rax
  HANDLE v15; // rdi
  bool v16; // si
  __int64 v17; // rcx
  void *v18; // rdx
  NTSTATUS v19; // eax
  int IsSectionAllBlackPixels; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-20h] BYREF
  void *v23; // [rsp+48h] [rbp-18h] BYREF
  void *v24; // [rsp+50h] [rbp-10h] BYREF

  hHandle = 0LL;
  EventW = (wil::details *)CreateEventW(0LL, 0, 0, 0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)&hHandle,
    EventW);
  v23 = 0LL;
  v6 = hHandle;
  v7 = hHandle == 0LL;
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)&v23,
    v8);
  if ( v7 )
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v10, LastError, 0LL);
LABEL_11:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)&hHandle,
      v11);
    return LastError;
  }
  v12 = GetSystemMetrics(0) / 2;
  v13 = GetSystemMetrics(1) / 2;
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, 0x75300u, 0LL);
  v24 = 0LL;
  v15 = FileMappingW;
  v23 = FileMappingW;
  v16 = (((unsigned __int64)FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
  if ( !v16 )
  {
    v19 = NtDesktopCaptureBits(0LL, (unsigned int)(v12 - 200), (unsigned int)(v13 - 150), 400LL, 300, 87, v6, v15);
    if ( v19 < 0 )
    {
      LastError = RtlNtStatusToDosError(v19);
    }
    else
    {
      LastError = WaitForSingleObject(v6, 0x1388u);
      if ( !LastError )
      {
        IsSectionAllBlackPixels = BlackScreenDiagnostics::IsSectionAllBlackPixels(v15);
LABEL_10:
        *a4 = IsSectionAllBlackPixels;
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v23);
        goto LABEL_11;
      }
    }
    IsSectionAllBlackPixels = 3;
    goto LABEL_10;
  }
  LastError = GetLastError();
  MicrosoftTelemetryAssertTriggeredArgs(v17, LastError, 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>();
  __1__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
    (wil::details **)&hHandle,
    v18);
  return LastError;
}
