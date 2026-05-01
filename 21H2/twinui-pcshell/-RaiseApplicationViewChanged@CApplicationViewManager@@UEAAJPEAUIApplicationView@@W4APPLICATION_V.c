/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800534D0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800579E0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180057A90 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x180066E50 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18006AC10 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x18006ECE8 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator() @ 0x1801FD5C0 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--operator().c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1801FD82C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     _lambda_58d0b42f459fba30bfac1d074d7fc715_::operator() @ 0x1801FD928 (_lambda_58d0b42f459fba30bfac1d074d7fc715_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1801FE960 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1801FEF10 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1801FFDD0 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180206FB4 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180207200 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020544 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x18002CDF0 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18002DBB0 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18002DC64 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002DCF0 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002E810 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800672A8 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008AD90 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5AD8 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801C14F0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1801FD48C (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // edi
  __int64 v10; // rdx
  struct IObjectArray *v11; // rcx
  __int64 *Local; // rcx
  char *v13; // rax
  __int64 v14; // r8
  char *v15; // rsi
  char *v16; // rbx
  char v17; // bl
  __int64 v18; // r8
  volatile signed __int32 *v19; // rdx
  struct IObjectArray *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // si
  volatile signed __int32 *v24; // rcx
  RTL_SRWLOCK *v25; // rbx
  int v27; // eax
  void *v28; // rbx
  void *v29; // rdi
  HANDLE ProcessHeap; // rax
  void *v31; // rdi
  void *v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  void *v35; // rbx
  void *v36; // rbx
  HANDLE v37; // rax
  void *v38; // rbx
  HANDLE v39; // rax
  void (*v40)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v41; // r15
  int v42; // eax
  __int64 v43; // rdx
  void *v44; // rbx
  HANDLE v45; // rax
  void *v46; // rbx
  HANDLE v47; // rax
  void (*v48)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v49[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v50; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  int v52; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v53; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  struct IObjectArray *v55; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v56; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-B0h] BYREF
  void **v58; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v59[3]; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+80h] [rbp-80h]
  int *v61; // [rsp+88h] [rbp-78h]
  int *v62; // [rsp+90h] [rbp-70h]
  int v63; // [rsp+98h] [rbp-68h] BYREF
  char v64; // [rsp+9Ch] [rbp-64h]
  _OWORD v65[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+C0h] [rbp-40h] BYREF
  const char *v67; // [rsp+C8h] [rbp-38h]
  LPVOID v68; // [rsp+D0h] [rbp-30h]
  char v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  _BYTE v71[144]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v72; // [rsp+178h] [rbp+78h]
  __int128 v73; // [rsp+180h] [rbp+80h]
  void *v74; // [rsp+190h] [rbp+90h] BYREF
  __int64 v75; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v76; // [rsp+1A8h] [rbp+A8h]
  __int64 v77; // [rsp+1B0h] [rbp+B0h]
  struct IObjectArray *v78; // [rsp+1B8h] [rbp+B8h]
  void **v79; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v80[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  DWORD CurrentThreadId; // [rsp+1E0h] [rbp+E0h]
  int *v83; // [rsp+1E8h] [rbp+E8h]
  int *v84; // [rsp+1F0h] [rbp+F0h]
  int v85; // [rsp+1F8h] [rbp+F8h] BYREF
  char v86; // [rsp+1FCh] [rbp+FCh]
  char v87[32]; // [rsp+200h] [rbp+100h] BYREF
  int v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  LPVOID v90; // [rsp+230h] [rbp+130h]
  char v91; // [rsp+238h] [rbp+138h]
  __int64 v92; // [rsp+240h] [rbp+140h]
  char v93[144]; // [rsp+248h] [rbp+148h] BYREF
  LPVOID lpMem; // [rsp+2D8h] [rbp+1D8h]
  __int128 v95; // [rsp+2E0h] [rbp+1E0h]
  void *v96[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  v59[0] = 0LL;
  v59[1] = &v58;
  v59[2] = 0LL;
  v60 = 0;
  v61 = &v66;
  v62 = &v63;
  v63 = 0;
  v64 = 0;
  v69 = 0;
  v66 = 0;
  v67 = "RaiseApplicationViewChange";
  v68 = 0LL;
  v70 = 1LL;
  v72 = 0LL;
  memset_0(v71, 0, sizeof(v71));
  v73 = 0LL;
  v74 = 0LL;
  v58 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(&v58, a2, a3, a4);
  v55 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 104), &v55);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v49[0]);
    goto LABEL_41;
  }
  if ( a3 == 7 )
  {
    *(_QWORD *)v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
    if ( (**(int (__fastcall ***)(__int64, GUID *, int *))a2)(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v49) >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v49 + 40LL))(*(_QWORD *)v49, 0LL);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v27,
          v49[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 600) + 40LL))(*(_QWORD *)(a1 + 600), a2, a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v75 = a2;
  v76 = a3;
  v77 = a4;
  v11 = v55;
  v78 = v55;
  if ( v55 )
    ((void (__fastcall *)(struct IObjectArray *))v55->lpVtbl->AddRef)(v55);
  v79 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v80[0] = 0LL;
  v80[1] = &v79;
  v81 = 0LL;
  CurrentThreadId = 0;
  v83 = 0LL;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    LOBYTE(v10) = 1;
    Local = (__int64 *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                         v11,
                         v10);
  }
  else
  {
    Local = 0LL;
  }
  v80[0] = Local;
  if ( Local )
  {
    v81 = *Local;
    *Local = (__int64)v80;
    CurrentThreadId = GetCurrentThreadId();
  }
  v84 = &v85;
  v85 = 0;
  v86 = 0;
  v91 = 0;
  v88 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v92 = 1LL;
  lpMem = 0LL;
  memset_0(v93, 0, sizeof(v93));
  v95 = 0LL;
  v96[0] = 0LL;
  if ( CurrentThreadId )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v80);
  if ( v74 )
  {
    v84 = v62;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v96,
      &v74);
  }
  else
  {
    v13 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = 1;
      v16 = v13 + 8;
      *((_DWORD *)v13 + 2) = 0;
      v13[12] = 0;
      *((_DWORD *)v13 + 2) = v63;
      v13[12] = v64;
      *((_OWORD *)v13 + 1) = v65[0];
      *((_OWORD *)v13 + 2) = v65[1];
      v63 = 0;
      v64 = 0;
      *((_OWORD *)v13 + 3) = 0LL;
      *((_OWORD *)v13 + 4) = 0LL;
      *((_DWORD *)v13 + 12) = v66;
      *((_QWORD *)v13 + 7) = v67;
      if ( v13[72] )
      {
        v29 = (void *)*((_QWORD *)v13 + 8);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v29);
        v16[64] = 0;
      }
      *((_QWORD *)v16 + 7) = 0LL;
      *((_QWORD *)v16 + 7) = v68;
      v68 = 0LL;
      v16[64] = v69;
      v69 = 0;
      *((_QWORD *)v16 + 9) = v70;
      wil::StoredFailureInfo::StoredFailureInfo(v16 + 80, v71);
      *((_QWORD *)v16 + 30) = 0LL;
      if ( v96[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v96[0], 0xFFFFFFFF) == 1 )
        {
          v31 = v96[0];
          if ( v96[0] )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v96[0] + 8);
            operator delete(v31, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v96[0] = v15;
      v84 = (int *)v16;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74, 0xFFFFFFFF) == 1 )
        {
          v32 = v74;
          if ( v74 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v74 + 8);
            operator delete(v32, (const struct std::nothrow_t *)0x100);
          }
        }
        v15 = (char *)v96[0];
      }
      v74 = v15;
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)v15);
      v62 = v84;
      v61 = v84 + 10;
    }
  }
  v83 = v84 + 10;
  v79 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v9 = NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
         *(NotificationDispatcher **)(a1 + 672),
         &v75,
         v14);
  v79 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v17 = 1;
  v18 = 2147942974LL;
  v19 = (volatile signed __int32 *)v96[0];
  if ( v96[0] )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v79,
      &SRWLock);
    v19 = (volatile signed __int32 *)v96[0];
    if ( !v96[0] || *(_DWORD *)v96[0] != 1 )
    {
      v17 = 0;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v96);
      v19 = (volatile signed __int32 *)v96[0];
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v19 = (volatile signed __int32 *)v96[0];
    }
    if ( !v17 )
      goto LABEL_26;
    v18 = 2147942974LL;
  }
  if ( *v84 == 1 )
  {
    v33 = v84[21];
    v50 = v33;
    v34 = 2147942974LL;
    if ( v33 < 0 )
      v34 = (unsigned int)v33;
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v84,
      v34,
      &v50);
    ((void (__fastcall *)(void ***))v79[1])(&v79);
    v19 = (volatile signed __int32 *)v96[0];
  }
LABEL_26:
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
    {
      v35 = v96[0];
      if ( v96[0] )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v96[0] + 8);
        operator delete(v35, (const struct std::nothrow_t *)0x100);
      }
    }
    v96[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v36 = lpMem;
      v37 = GetProcessHeap();
      HeapFree(v37, 0, v36);
    }
    lpMem = 0LL;
    *(_QWORD *)&v95 = 0LL;
  }
  if ( v91 )
  {
    v38 = v90;
    v39 = GetProcessHeap();
    HeapFree(v39, 0, v38);
    v91 = 0;
  }
  v90 = 0LL;
  if ( v85 == 1 )
  {
    v85 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180650598;
      qword_180650598[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806505B0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v40);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v87);
  }
  v85 = 3;
  if ( CurrentThreadId )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v80);
  v20 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v20->lpVtbl->Release)(
      v20,
      v19,
      v18);
  }
  v21 = v77;
  if ( v77 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 16LL))(v21, v19, v18);
  }
  v22 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 16LL))(v22, v19, v18);
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v49[0]);
  else
    v9 = 0;
LABEL_41:
  if ( v55 )
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v55->lpVtbl->Release)(
      v55,
      v19,
      v18);
  v58 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v23 = 1;
  v24 = (volatile signed __int32 *)v74;
  if ( !v74 )
    goto LABEL_64;
  v25 = (RTL_SRWLOCK *)((char *)v74 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)v74 + 31);
  v24 = (volatile signed __int32 *)v74;
  if ( !v74 || *(_DWORD *)v74 != 1 )
  {
    v23 = 0;
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74, 0xFFFFFFFF) == 1 )
      {
        v41 = v74;
        if ( v74 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v74 + 8);
          operator delete(v41, (const struct std::nothrow_t *)0x100);
        }
      }
      v24 = 0LL;
      v74 = 0LL;
    }
  }
  if ( v25 )
  {
    ReleaseSRWLockExclusive(v25);
    v24 = (volatile signed __int32 *)v74;
  }
  if ( v23 )
  {
LABEL_64:
    if ( *v62 == 1 )
    {
      v42 = v62[21];
      v52 = v42;
      v43 = 2147942974LL;
      if ( v42 < 0 )
        v43 = (unsigned int)v42;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v62,
        v43,
        &v52);
      ((void (__fastcall *)(void ***))v58[1])(&v58);
      v24 = (volatile signed __int32 *)v74;
    }
  }
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
    {
      v28 = v74;
      if ( v74 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v74 + 8);
        operator delete(v28, (const struct std::nothrow_t *)0x100);
      }
    }
    v74 = 0LL;
  }
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v72, 0xFFFFFFFF) == 1 )
    {
      v44 = v72;
      v45 = GetProcessHeap();
      HeapFree(v45, 0, v44);
    }
    v72 = 0LL;
    *(_QWORD *)&v73 = 0LL;
  }
  if ( v69 )
  {
    v46 = v68;
    v47 = GetProcessHeap();
    HeapFree(v47, 0, v46);
    v69 = 0;
  }
  v68 = 0LL;
  if ( v63 == 1 )
  {
    v63 = 2;
    v56 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v53, &v56) && v53 )
    {
      v56 = qword_180650598;
      qword_180650598[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806505B0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v48);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v56 + 1), v65);
  }
  v63 = 3;
  if ( v60 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v59);
  return (unsigned int)v9;
}
