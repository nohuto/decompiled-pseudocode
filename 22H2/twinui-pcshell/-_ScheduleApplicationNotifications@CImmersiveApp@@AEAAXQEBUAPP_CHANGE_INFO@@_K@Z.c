/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005C0B0
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180035350 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800358F8 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18004C3D0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18006A340 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180073040 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1801EB600 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1801ED430 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1801ED4B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1801ED8E0 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1801F0520 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1801F2628 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CA90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18005CB18 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180090EF4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E9550 (--1-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  const struct APP_CHANGE_INFO *v9; // rax
  _DWORD *v10; // r12
  bool v11; // bl
  _QWORD *v12; // r14
  LPUNKNOWN v13; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v15; // rcx
  LPUNKNOWN v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int v19; // esi
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  _DWORD *v23; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  int v26; // edi
  volatile int *v27; // rdx
  _DWORD *v28; // rbx
  volatile signed __int64 *v29; // r10
  signed __int64 v30; // rax
  unsigned int v31; // ecx
  signed __int64 v32; // rtt
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r8
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  int *v40; // rcx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // r9
  __int64 v45; // r10
  int *v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // r14
  char *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int8 (__fastcall *v54)(CImmersiveApp *); // rax
  __int64 v55; // r8
  unsigned __int64 i; // rdx
  __int64 v57; // rbx
  __int64 v58; // r15
  char *v59; // r12
  _QWORD *v60; // rax
  const struct std::nothrow_t *v61; // rdx
  _QWORD *v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rcx
  _QWORD *v65; // r13
  _DWORD *v66; // rbx
  _DWORD *v67; // rax
  _DWORD *v68; // rdi
  __int64 v69; // rcx
  int v70; // [rsp+20h] [rbp-79h]
  int v71; // [rsp+20h] [rbp-79h]
  __int64 v72; // [rsp+38h] [rbp-61h] BYREF
  __int64 v73; // [rsp+40h] [rbp-59h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-51h] BYREF
  volatile signed __int64 *v75; // [rsp+50h] [rbp-49h] BYREF
  __int64 v76; // [rsp+58h] [rbp-41h] BYREF
  __int64 v77; // [rsp+60h] [rbp-39h] BYREF
  __int64 v78; // [rsp+68h] [rbp-31h]
  int v79; // [rsp+70h] [rbp-29h] BYREF
  void *v80; // [rsp+78h] [rbp-21h]
  _DWORD *v81; // [rsp+80h] [rbp-19h]
  __int64 v82; // [rsp+88h] [rbp-11h]
  signed __int64 v83; // [rsp+90h] [rbp-9h]
  signed __int64 v84; // [rsp+98h] [rbp-1h]
  _QWORD *v85; // [rsp+A0h] [rbp+7h]
  signed __int64 v86; // [rsp+A8h] [rbp+Fh]
  _QWORD *v87; // [rsp+B0h] [rbp+17h] BYREF
  char v88; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  char v91; // [rsp+100h] [rbp+67h]
  bool v92; // [rsp+118h] [rbp+7Fh]
  unsigned int Ptr; // [rsp+118h] [rbp+7Fh]

  v73 = 0LL;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL))(
    (char *)this + 48,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v73);
  v6 = v73;
  v7 = v73;
  v78 = v73;
  v82 = v73;
  if ( v73 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
    v6 = v73;
  }
  if ( v6 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v7 )
    goto LABEL_131;
  if ( *((_BYTE *)this + 808) )
  {
    if ( (*((_BYTE *)this + 584) & 1) == 0 )
    {
LABEL_14:
      CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
      *((_BYTE *)this + 808) = 0;
      goto LABEL_15;
    }
    if ( *((_QWORD *)this + 59) )
    {
      v8 = 0LL;
      if ( a3 )
      {
        v9 = a2;
        while ( *(_DWORD *)v9 != 8 )
        {
          ++v8;
          v9 = (const struct APP_CHANGE_INFO *)((char *)v9 + 16);
          if ( v8 >= a3 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
  }
LABEL_15:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v10 = (_DWORD *)((char *)this + 128);
    v11 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112) != 0;
    v92 = v11;
    v75 = 0LL;
    v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v12 )
    {
      v12[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v12[5] = 0LL;
      ppunkMarshal = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v13 = ppunkMarshal;
        QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
        v15 = v12[5];
        if ( v15 )
        {
          v12[5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
          v13,
          &GUID_00000003_0000_0000_c000_000000000046,
          v12 + 5);
        v11 = v92;
      }
      v16 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v16->lpVtbl->Release)(v16);
      }
      v12[7] = 1LL;
      *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
      v12[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v12[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v12 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
      v12[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      v12[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_BYTE *)v12 + 64) = v11;
      v75 = v12;
      v81 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      v17 = v12[7];
      v83 = v17;
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64(v12 + 7, v17 + 1, v17);
          if ( v18 != v17 )
            continue;
        }
        goto LABEL_33;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
LABEL_33:
      v19 = v10[10];
      v20 = 0LL;
      v85 = 0LL;
      v21 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v22 = v21;
      if ( v21 )
      {
        *((_DWORD *)v21 + 3) = 1;
        *v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v22[2] = v10;
        v23 = v81;
        v22[3] = v81;
        if ( v23 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
        v22[4] = v12;
        v24 = v12[7];
        v84 = v24;
        while ( v24 >= 0 )
        {
          if ( (_DWORD)v24 != 0x7FFFFFFF )
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange64(v12 + 7, v24 + 1, v24);
            if ( v25 != v24 )
              continue;
          }
          goto LABEL_44;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v24 + 16));
LABEL_44:
        *v22 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vftable';
        v20 = v22;
        v85 = v22;
      }
      v26 = SHTaskPoolQueueTask(3LL, 2LL, v19, 0LL, v20, 0LL);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v12);
      v28 = v81;
      if ( v81 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v81 + 16LL))(v81);
      if ( v26 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
          (const char *)(unsigned int)v26,
          v71);
      if ( v28 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = v75;
      if ( v75 )
      {
        v75 = 0LL;
        v30 = *((_QWORD *)v29 + 7);
        v86 = v30;
        while ( v30 >= 0 )
        {
          if ( (_DWORD)v30 == 0x7FFFFFFF )
            goto LABEL_63;
          v31 = v30 - 1;
          v32 = v30;
          v30 = _InterlockedCompareExchange64(v29 + 7, v30 - 1, v30);
          if ( v32 == v30 )
            goto LABEL_60;
        }
        v31 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v30 + 16), v27);
LABEL_60:
        if ( !v31 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v29 + 56))(v29, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
LABEL_63:
      v7 = v82;
      v78 = v82;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)0x8007000ELL,
        v70);
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(&v75);
    }
    v72 = 0LL;
    v77 = 0LL;
    v76 = 0LL;
    v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
            v7,
            &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
            &v76);
    if ( v33 >= 0 )
      v33 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v76 + 24LL))(
              v76,
              &SID_ImmersiveApplicationListeners,
              &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
              &v77);
    v34 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v33 >= 0 )
      v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v77 + 24LL))(v77, &v72);
    v35 = v77;
    if ( v77 )
    {
      v77 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    if ( v33 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v72 + 24LL))(v72, &v79) >= 0 && v79 )
    {
      v36 = a3;
      v37 = 0LL;
      if ( a3 >= 4 )
      {
        v38 = 0LL;
        v39 = 0LL;
        v40 = (int *)((char *)a2 + 32);
        do
        {
          *(double *)v41.m128i_i64 = dbl_180647190[4 * *(v40 - 8)];
          *(double *)&v41.m128i_i64[1] = dbl_180647190[4 * *(v40 - 4)];
          v38 = _mm_add_epi64(v41, v38);
          *(double *)v41.m128i_i64 = dbl_180647190[4 * *v40];
          *(double *)&v41.m128i_i64[1] = dbl_180647190[4 * v40[4]];
          v42 = _mm_add_epi64(v41, v39);
          v39 = v42;
          v37 += 4LL;
          v40 += 16;
        }
        while ( v37 < (a3 & 0xFFFFFFFFFFFFFFFCuLL) );
        v43 = _mm_add_epi64(v38, v42);
        v36 = a3 + _mm_add_epi64(v43, _mm_srli_si128(v43, 8)).m128i_u64[0];
      }
      v44 = 0LL;
      v45 = 0LL;
      if ( v37 < a3 )
      {
        if ( a3 - v37 >= 2 )
        {
          v46 = (int *)((char *)a2 + 16 * v37);
          v47 = ((a3 - v37 - 2) >> 1) + 1;
          v37 += 2 * v47;
          do
          {
            v44 += *((_QWORD *)&unk_180647180 + 4 * *v46 + 2);
            v45 += *((_QWORD *)&unk_180647180 + 4 * v46[4] + 2);
            v46 += 8;
            --v47;
          }
          while ( v47 );
        }
        if ( v37 < a3 )
          v36 += *((_QWORD *)&unk_180647180 + 4 * *((int *)a2 + 4 * v37) + 2);
        v36 += v44 + v45;
      }
      v48 = 16 * v36;
      if ( !is_mul_ok(v36, 0x10uLL) )
        v48 = -1LL;
      v49 = operator new[](v48, (const struct std::nothrow_t *)&std::nothrow);
      v50 = v49;
      v80 = v49;
      if ( v49 )
      {
        v51 = v49;
        if ( a3 )
        {
          do
          {
            *(_OWORD *)v51 = *(_OWORD *)a2;
            if ( *(_DWORD *)v51 != 6 && *(_DWORD *)v51 != 12 && !*((_QWORD *)v51 + 1) )
            {
              v52 = 0LL;
              if ( *((_QWORD *)this + 59) )
                v52 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 58) + 32LL))(**((_QWORD **)this + 58));
              *((_QWORD *)v51 + 1) = v52;
            }
            v53 = 32LL * *(int *)a2;
            if ( *(_QWORD *)((char *)&unk_180647180 + v53 + 8) )
            {
              v54 = *(unsigned __int8 (__fastcall **)(CImmersiveApp *))((char *)&unk_180647180 + v53 + 24);
              if ( !v54 || v54(this) )
              {
                v55 = *((_QWORD *)v51 + 1);
                for ( i = 0LL; i < *(_QWORD *)((char *)&unk_180647180 + v53 + 16); ++i )
                {
                  v51 += 16;
                  *(_DWORD *)v51 = *(_DWORD *)(*(_QWORD *)((char *)&unk_180647180 + v53 + 8) + 4 * i);
                  *((_QWORD *)v51 + 1) = v55;
                }
              }
            }
            v51 += 16;
            a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
            --a3;
          }
          while ( a3 );
          v7 = v78;
        }
        v57 = (v51 - v50) >> 4;
        v58 = v72;
        v59 = (char *)this + 88;
        if ( this != (CImmersiveApp *)-88LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v59 + 8LL))((char *)this + 88);
        if ( v58 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
        v60 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v62 = v60;
        if ( v60 )
        {
          v60[4] = 0LL;
          v60[1] = v80;
          v60[2] = v57;
          v59 = 0LL;
          v60[3] = (char *)this + 88;
          v63 = v58;
          v58 = 0LL;
          v64 = v60[4];
          if ( v64 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
          v62[4] = v63;
          v80 = 0LL;
          *v62 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
          *((_DWORD *)v62 + 10) = 0;
        }
        else
        {
          v62 = 0LL;
        }
        if ( v62 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v62 + 8LL))(v62);
          v91 = *((_BYTE *)this + 759);
          v65 = v62;
          v87 = v62;
          (*(void (__fastcall **)(_QWORD *))(*v62 + 8LL))(v62);
          v88 = v91;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v66 = 0LL;
          v78 = 0LL;
          v67 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v68 = v67;
          if ( v67 )
          {
            v67[3] = 1;
            *(_QWORD *)v67 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *((_QWORD *)v68 + 2) = 0LL;
            if ( v68 + 4 != (_DWORD *)&v87 )
            {
              *((_QWORD *)v68 + 2) = v62;
              v65 = 0LL;
            }
            *((_BYTE *)v68 + 24) = v91;
            *(_QWORD *)v68 = off_180500B90;
            v66 = v68;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v66, 0LL);
          if ( v66 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v66 + 16LL))(v66);
          if ( v65 )
            (*(void (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
          (*(void (__fastcall **)(_QWORD *))(*v62 + 16LL))(v62);
        }
        operator delete(v80, v61);
        if ( v58 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        if ( v59 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    v69 = v72;
    if ( v72 )
    {
      v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    }
  }
LABEL_131:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
