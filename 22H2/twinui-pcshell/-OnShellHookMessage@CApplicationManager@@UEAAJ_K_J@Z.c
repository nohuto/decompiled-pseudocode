/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x18008B290 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C20F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180013C78 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019D40 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003F110 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180040E40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180047FB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180057800 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18005AE00 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18005DE20 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800647E0 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006EE88 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180083DEC (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008425C (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008431C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180085384 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x180096B4C (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5928 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801C0A3C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801C1340 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1801C5CA8 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1801C5EA8 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801C61E0 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1801C663C (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801C6C6C (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CApplicationManager *v6; // r15
  char *v7; // rdi
  int v8; // esi
  int v9; // eax
  int ApartmentId; // esi
  __int64 v11; // rcx
  unsigned __int8 (__fastcall *v12)(__int64, HWND); // rax
  HWND v13; // rbx
  _DWORD *v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 i; // r12
  volatile signed __int32 *v17; // rdx
  struct IImmersiveApplication *v18; // rcx
  HWND v20; // rbx
  bool v21; // r12
  __int64 *v22; // rcx
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  struct IImmersiveMonitor *v28; // rdx
  struct IImmersiveMonitor *v29; // rcx
  __int64 v30; // rbx
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  int v35; // eax
  int (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v37; // rcx
  unsigned int v38; // edx
  HWND ForegroundWindow; // rax
  void *v40; // rbx
  HANDLE ProcessHeap; // rax
  struct CDelayIAMOperations::COperation *v42; // r13
  char v43; // bl
  int v44; // eax
  __int64 v45; // rdx
  void *v46; // rbx
  void *v47; // rbx
  HANDLE v48; // rax
  void (*v49)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int cchValue; // [rsp+20h] [rbp-E0h]
  struct IImmersiveMonitor *v51; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  bool v53; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v54; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  HWND v57; // [rsp+58h] [rbp-A8h]
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  char v59; // [rsp+64h] [rbp-9Ch]
  char v60; // [rsp+65h] [rbp-9Bh]
  unsigned int v61; // [rsp+68h] [rbp-98h]
  char v62; // [rsp+6Ch] [rbp-94h]
  LPVOID pv[2]; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveMonitor *v65; // [rsp+88h] [rbp-78h] BYREF
  struct IImmersiveApplication *v66; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v67; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+A0h] [rbp-60h] BYREF
  WINBOOL fPending; // [rsp+A4h] [rbp-5Ch] BYREF
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID v71; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-48h]
  char v73; // [rsp+C0h] [rbp-40h]
  _DWORD *v74; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  HWND v78; // [rsp+E8h] [rbp-18h] BYREF
  int v79; // [rsp+F0h] [rbp-10h]
  _QWORD v80[6]; // [rsp+F8h] [rbp-8h] BYREF
  int v81; // [rsp+128h] [rbp+28h]
  void **v82; // [rsp+130h] [rbp+30h] BYREF
  char v83[24]; // [rsp+138h] [rbp+38h] BYREF
  int v84; // [rsp+150h] [rbp+50h]
  _DWORD *v85; // [rsp+160h] [rbp+60h]
  int v86; // [rsp+168h] [rbp+68h]
  char v87[48]; // [rsp+170h] [rbp+70h] BYREF
  LPVOID v88; // [rsp+1A0h] [rbp+A0h]
  char v89; // [rsp+1A8h] [rbp+A8h]
  LPVOID lpMem; // [rsp+248h] [rbp+148h]
  __int64 v91; // [rsp+250h] [rbp+150h]
  void *v92; // [rsp+260h] [rbp+160h] BYREF
  WCHAR Filename[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4C8h] [rbp+3C8h]

  v6 = (CApplicationManager *)((char *)this - 160);
  if ( this == (CApplicationManager *)160 )
    v7 = 0LL;
  else
    v7 = (char *)this + 232;
  v80[5] = v7;
  v8 = *((_DWORD *)v7 + 11);
  if ( v8 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_106;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v8 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v9 != 1 )
          goto LABEL_6;
        goto LABEL_100;
      }
LABEL_106:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_100:
  if ( *((_DWORD *)v7 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v68);
    if ( ApartmentId >= 0 && v68 != *((_DWORD *)v7 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v7) )
    ApartmentId = 0;
LABEL_8:
  v81 = ApartmentId;
  v56 = a2;
  v57 = a3;
  v58 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  *(_OWORD *)pv = 0LL;
  if ( a2 <= 0x22 && ((unsigned int)a2 < 0x15 || (unsigned int)a2 >= 0x1A) )
  {
    if ( (_DWORD)a2 != 20 )
    {
      switch ( (int)a2 )
      {
        case 17:
        case 18:
        case 19:
        case 26:
        case 29:
        case 32:
        case 34:
          break;
        default:
          goto LABEL_44;
      }
    }
    v59 = 0;
  }
  else
  {
LABEL_44:
    v59 = 1;
  }
  v66 = 0LL;
  IamTraceLogging::OnShellHookMessage::Start<unsigned __int64 &,HWND__ * &>((IamTraceLogging::OnShellHookMessage *)&v82);
  if ( a2 - 65534 > 1
    && CApplicationManager::_AnalyzeShellNotification(v6, (struct CApplicationManager::HSHELL_DATA *)&v56) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v56 <= 0x22 )
    {
      if ( (_DWORD)v56 == 20 )
      {
        CApplicationManager::_HandleMonitorChanged(v6, (const struct CApplicationManager::HSHELL_DATA *const)&v56);
      }
      else if ( (_DWORD)v56 == 17 )
      {
        if ( v58 == 1 )
        {
          v51 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
          CApplicationManager::_MonitorFromWindow(v6, v57, &v51);
          (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64, struct IImmersiveMonitor *))(**((_QWORD **)v6 + 67)
                                                                                            + 24LL))(
            *((_QWORD *)v6 + 67),
            v57,
            v61,
            1LL,
            v51);
          ForegroundWindow = GetForegroundWindow();
          if ( ForegroundWindow == v57 )
          {
            v80[0] = v6;
            v80[1] = ForegroundWindow;
            CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(*((_QWORD *)v6 + 100), v80);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
        }
        else if ( v58 != 2 )
        {
          (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v6 + 74) + 24LL))(*((_QWORD *)v6 + 74), v57);
        }
      }
      else
      {
        switch ( (int)v56 )
        {
          case 18:
            v11 = *((_QWORD *)this + 47);
            v12 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 72LL);
            goto LABEL_19;
          case 19:
          case 23:
            v64 = 0LL;
            if ( v58 != 2 )
              goto LABEL_75;
            Context = v57;
            v64 = 0LL;
            v80[2] = 0LL;
            v28 = 0LL;
            v65 = 0LL;
            v29 = 0LL;
            v51 = 0LL;
            if ( !*((_QWORD *)v6 + 80) )
              goto LABEL_107;
            v80[3] = 0LL;
            break;
          case 21:
            if ( v58 - 2 > 1 )
              goto LABEL_49;
            CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v56,
              a3);
            goto LABEL_22;
          case 22:
            v11 = *((_QWORD *)this + 47);
            v12 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 64LL);
LABEL_19:
            v13 = v57;
            if ( !v12(v11, v57) )
              (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54), v13);
            goto LABEL_22;
          case 24:
LABEL_49:
            Context = v57;
            v20 = v57;
            if ( pv[1] )
              v20 = (HWND)pv[1];
            v54 = v61;
            v21 = v56 == 21;
            v55 = 0LL;
            if ( GetShellWindow() != v20
              && !(unsigned int)GetPropW(v20, L"MultimonitorActivationException")
              && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 94) + 24LL))(*((_QWORD *)v6 + 94)) != v20 )
            {
              (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)v6 + 70) + 88LL))(
                *((_QWORD *)v6 + 70),
                v20,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &v55);
            }
            v22 = (__int64 *)*((_QWORD *)v6 + 67);
            v23 = *v22;
            if ( v21 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, _QWORD, __int64))(v23 + 24))(
                      v22,
                      Context,
                      v54,
                      0LL,
                      v55);
              v26 = 3LL;
            }
            else
            {
              v24 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, __int64))(v23 + 32))(v22, Context, v55);
              v26 = 2LL;
            }
            v27 = v55;
            if ( v24 && v55 )
            {
              CApplicationManager::_TryPresentDesktopExperience(v6, Context, v26, v55);
              v27 = v55;
            }
            if ( v27 )
            {
              v55 = 0LL;
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 16LL))(v27, v25, v26);
            }
            goto LABEL_22;
          case 25:
          case 28:
            CApplicationManager::_HandleWindowBecameOwned(
              v6,
              a3,
              (const struct CApplicationManager::HSHELL_DATA *const)&v56);
            goto LABEL_22;
          case 26:
          case 29:
            CApplicationManager::_HandleWindowBecameUnowned(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v56);
            goto LABEL_22;
          case 27:
          case 30:
            CApplicationManager::_HandleWindowChangedOwner(
              v6,
              (const struct CApplicationManager::HSHELL_DATA *const)&v56,
              a3);
            goto LABEL_22;
          case 32:
            v65 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
            v78 = v57;
            v79 = 2;
            if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(v6, &v78, &v65, 0LL) >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v66);
              (**(void (__fastcall ***)(struct IImmersiveMonitor *, GUID *, struct IImmersiveApplication **))v65)(
                v65,
                &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                &v66);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
            goto LABEL_22;
          case 34:
            if ( v58 == 2 )
              CApplicationManager::_HandleApplicationRequestActivation(
                v6,
                (const struct CApplicationManager::HSHELL_DATA *const)&v56);
            goto LABEL_22;
          default:
            goto LABEL_22;
        }
        do
        {
          v30 = *(_QWORD *)(*((_QWORD *)v6 + 79) + 8LL * (_QWORD)v29);
          v80[4] = v30;
          if ( v30 )
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v30 + 8LL))(v30, v28);
          v31 = -1;
          v67 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v30)(
                 v30,
                 &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                 &v67) >= 0 )
          {
            v32 = *v67;
            v71 = Context;
            v72 = 0LL;
            v73 = 0;
            v31 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, LPVOID *, __int64))(v32 + 296))(v67, &v71, 2LL) != 0)
                - 1;
            v33 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
          }
          v34 = v67;
          if ( v67 )
          {
            v67 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          if ( !v31 )
          {
            v28 = v51;
            v35 = 0;
            goto LABEL_72;
          }
          v29 = (struct IImmersiveMonitor *)((char *)v51 + 1);
          v51 = v29;
        }
        while ( (unsigned __int64)v29 < *((_QWORD *)v6 + 80) );
        v28 = v65;
LABEL_107:
        v35 = -2147319765;
LABEL_72:
        if ( v35 >= 0 )
        {
          v36 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v6 + 79) + 8LL * (_QWORD)v28);
          if ( (**v36)(v36, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v64) >= 0 )
            CApplicationManager::_UpdatePerApplicationDataIfNeeded(v6, v64, v57, 0LL);
        }
LABEL_75:
        (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)v6 + 68) + 24LL))(
          *((_QWORD *)v6 + 68),
          v57,
          v58,
          v64);
        CApplicationManager::_HandleActivation2(v6, &v56, 1LL);
        v37 = v64;
        if ( v64 )
        {
          v64 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
LABEL_22:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v56 >= 0x20 )
  {
    if ( v56 != 32 )
    {
      if ( v56 == 65534 )
      {
        v38 = 1026;
      }
      else
      {
        if ( v56 != 0xFFFF )
          goto LABEL_24;
        v38 = 1025;
      }
      CApplicationManager::OnMessage((CApplicationManager *)((char *)this + 40), v38, 0LL, (__int64)a3, &v53);
      goto LABEL_24;
    }
    CApplicationManager::_HandleCloseRequested(v6, (const struct CApplicationManager::HSHELL_DATA *)&v56, v66);
  }
LABEL_24:
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v15 = *((_QWORD *)this + 102);
  if ( v15 )
  {
    v14 = (_DWORD *)*((_QWORD *)this + 101);
    v74 = v14;
    v76 = *((_QWORD *)this + 103);
    v75 = v15;
    v77 = *((_QWORD *)this + 104);
    *((_QWORD *)this + 101) = 0LL;
    *((_QWORD *)this + 103) = 0LL;
    *((_QWORD *)this + 102) = 0LL;
    *((_QWORD *)this + 104) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v15; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v42 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 80), v14[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v42 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v42 + 8LL))(v42);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v42)(v42, 1LL);
    }
  }
  if ( v14 )
    CoTaskMemFree(v14);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v82, 0LL);
  v82 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v17 = (volatile signed __int32 *)v92;
  if ( !v92 )
    goto LABEL_30;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v82,
    &SRWLock);
  v17 = (volatile signed __int32 *)v92;
  if ( v92 && *(_DWORD *)v92 == 1 )
  {
    v43 = 1;
  }
  else
  {
    v43 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v92);
    v17 = (volatile signed __int32 *)v92;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v17 = (volatile signed __int32 *)v92;
  }
  if ( v43 )
  {
LABEL_30:
    if ( *v85 == 1 )
    {
      v44 = v85[21];
      v54 = v44;
      v45 = 2147942974LL;
      if ( v44 < 0 )
        v45 = (unsigned int)v44;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v85,
        v45,
        &v54);
      ((void (__fastcall *)(void ***))v82[1])(&v82);
      v17 = (volatile signed __int32 *)v92;
    }
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
    {
      v46 = v92;
      if ( v92 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v92 + 2);
        operator delete(v46, (const struct std::nothrow_t *)0x100);
      }
    }
    v92 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v40 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v40);
    }
    lpMem = 0LL;
    v91 = 0LL;
  }
  if ( v89 )
  {
    v47 = v88;
    v48 = GetProcessHeap();
    HeapFree(v48, 0, v47);
    v89 = 0;
  }
  v88 = 0LL;
  if ( v86 == 1 )
  {
    v86 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v49);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v87);
  }
  v86 = 3;
  if ( v84 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v83);
  v18 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  CoTaskMemFree(pv[0]);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
