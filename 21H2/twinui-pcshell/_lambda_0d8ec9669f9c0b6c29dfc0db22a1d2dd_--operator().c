/*
 * XREFs of _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x180310C90
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18031CAB8 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DEAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030D578 (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x18030EC70 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 *     ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x18030FB6C (--0RecoveredViewInfo@@QEAA@AEBU0@@Z.c)
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180312718 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x18032CED0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x18032CF50 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x18032D6A0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x18032DF48 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x180339310 (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()(RTL_SRWLOCK **a1)
{
  __int64 *v2; // r9
  RTL_SRWLOCK *v3; // r8
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // r13
  char v6; // r14
  __int64 v7; // r13
  char v8; // bl
  unsigned __int64 v9; // r15
  unsigned __int64 Ptr; // r10
  _DWORD *v11; // rcx
  int ShellWindowIdForView; // eax
  ViewManagerBridge *v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  int AppUserModelIdForView; // eax
  RTL_SRWLOCK *v17; // rbx
  __int64 *v18; // rax
  struct IShellView *v19; // r15
  __int64 v20; // rcx
  RecoveredViewInfo *v21; // rax
  int v22; // eax
  RTL_SRWLOCK *v23; // r12
  HWND v24; // rbx
  void *v25; // r8
  RTL_SRWLOCK *v26; // r15
  PVOID v27; // rdx
  HWND *v28; // rdx
  __int64 v29; // r15
  const unsigned __int16 *v30; // rdx
  unsigned int PropertyDirectlyFromWindow; // eax
  RTL_SRWLOCK *v32; // rbx
  RecoveredViewInfo *v33; // rax
  int v34; // eax
  RTL_SRWLOCK *v35; // r12
  HWND v36; // rbx
  void *v37; // r8
  RTL_SRWLOCK *v38; // r15
  PVOID v39; // rdx
  HWND *v40; // rdx
  RTL_SRWLOCK *v41; // rbx
  RTL_SRWLOCK *v42; // rsi
  unsigned int v43; // edx
  struct MsgString *v45; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellView *v46; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v47; // [rsp+40h] [rbp-C0h]
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  RTL_SRWLOCK *v50; // [rsp+70h] [rbp-90h]
  RTL_SRWLOCK *v51; // [rsp+78h] [rbp-88h]
  struct MsgString **v52; // [rsp+80h] [rbp-80h] BYREF
  char v53; // [rsp+88h] [rbp-78h]
  struct MsgString **v54; // [rsp+90h] [rbp-70h] BYREF
  char v55; // [rsp+98h] [rbp-68h]
  __int128 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  RTL_SRWLOCK *v58; // [rsp+C0h] [rbp-40h]
  RTL_SRWLOCK *v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  char v61; // [rsp+D8h] [rbp-28h]
  int *v62; // [rsp+E0h] [rbp-20h]
  int *v63; // [rsp+E8h] [rbp-18h]
  int *v64; // [rsp+F0h] [rbp-10h]
  char v65; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+150h] [rbp+50h] BYREF
  int v68; // [rsp+158h] [rbp+58h] BYREF
  int v69; // [rsp+160h] [rbp+60h] BYREF
  HWND hWnd; // [rsp+168h] [rbp+68h] BYREF

  v2 = (__int64 *)a1[2];
  v3 = a1[1];
  v50 = v3;
  v4 = *a1;
  v51 = v4;
  v5 = *v2;
  v58 = v4;
  v59 = v3;
  v60 = v5;
  v6 = 1;
  v61 = 1;
  v7 = 2 * v5;
  v69 = *((_DWORD *)v3->Ptr + 2 * v7 + 2);
  v68 = 0;
  v67 = 0;
  v62 = &v69;
  v63 = &v68;
  v64 = &v67;
  v65 = 1;
  if ( LODWORD(a1[3]->Ptr) )
    goto LABEL_48;
  v8 = 0;
  v9 = 0LL;
  Ptr = (unsigned __int64)a1[4]->Ptr;
  if ( !Ptr )
  {
LABEL_6:
    *(_QWORD *)&v48 = 0LL;
    HIDWORD(v48) = 0;
    v46 = 0LL;
    ShellWindowIdForView = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(
                             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v3->Ptr + 2 * *v2,
                             (__int64 *)&v46);
    v14 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v15 = 2719LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)ShellWindowIdForView);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      goto LABEL_49;
    }
    ShellWindowIdForView = ViewManagerBridge::GetShellWindowIdForView(v13, v46, 0LL, (unsigned int *)&hWnd);
    v14 = ShellWindowIdForView;
    if ( ShellWindowIdForView < 0 )
    {
      v15 = 2721LL;
      goto LABEL_30;
    }
    v29 = (unsigned int)hWnd;
    *(_QWORD *)&v48 = (unsigned int)hWnd;
    DWORD2(v48) = (unsigned int)GetPropW((HWND)(unsigned int)hWnd, L"Microsoft.Windows.WindowFactory.ViewId");
    if ( DWORD2(v48) )
    {
      PropertyDirectlyFromWindow = LightweightPropertySet::GetPropertyDirectlyFromWindow((HWND)(unsigned int)v29, v30);
      v49 = PropertyDirectlyFromWindow;
      if ( PropertyDirectlyFromWindow )
      {
        ShellWindowIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                 (ViewManagerBridge *)(*a1)[62].Ptr,
                                 *((struct IUnknown **)a1[1]->Ptr + 2 * (__int64)a1[2]->Ptr),
                                 &v45);
        v14 = ShellWindowIdForView;
        if ( ShellWindowIdForView < 0 )
        {
          v15 = 2732LL;
          goto LABEL_30;
        }
        v54 = &v45;
        v55 = 1;
        hWnd = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        v32 = *a1;
        v56 = v48;
        v57 = v49;
        v33 = RecoveredViewInfo::RecoveredViewInfo(
                (RecoveredViewInfo *)&v52,
                (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
        v34 = CreateWrapperForRecoveredView(v45, v33, &v56, v32, &hWnd);
        v14 = v34;
        if ( v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAB3,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v34);
LABEL_41:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
          MsgRelease(v45);
          goto LABEL_42;
        }
        v35 = *a1 + 35;
        AcquireSRWLockExclusive(v35);
        v47 = v35;
        v36 = hWnd;
        (*(void (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)hWnd + 792LL))(hWnd, v29, 1LL);
        v38 = *a1 + 48;
        v39 = (*a1)[49].Ptr;
        if ( v39 == (*a1)[51].Ptr )
        {
          v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&(*a1)[48],
                  (unsigned __int64)v39 + 1,
                  v37);
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAB8,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v14);
            if ( v35 )
              ReleaseSRWLockExclusive(v35);
            goto LABEL_41;
          }
        }
        v40 = (HWND *)((char *)v38->Ptr + 8 * (__int64)v38[1].Ptr++);
        if ( v40 )
        {
          *v40 = 0LL;
          if ( v40 != &hWnd )
          {
            *v40 = v36;
            hWnd = 0LL;
          }
        }
        if ( v35 )
          ReleaseSRWLockExclusive(v35);
        v67 = v48;
        v8 = 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
        MsgRelease(v45);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
    if ( !v8 )
    {
LABEL_48:
      v14 = 0;
      goto LABEL_49;
    }
LABEL_47:
    ++LODWORD(a1[6]->Ptr);
    v68 = 1;
    v6 = 0;
    goto LABEL_48;
  }
  v11 = (char *)a1[5]->Ptr + 8;
  while ( *v11 != *((_DWORD *)v3->Ptr + 4 * *v2 + 2) )
  {
    ++v9;
    v11 += 6;
    if ( v9 >= Ptr )
      goto LABEL_6;
  }
  AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                            (ViewManagerBridge *)v4[62].Ptr,
                            *((struct IUnknown **)v3->Ptr + 2 * *v2),
                            &v45);
  v14 = AppUserModelIdForView;
  if ( AppUserModelIdForView >= 0 )
  {
    v52 = &v45;
    v53 = 1;
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v17 = *a1;
    v18 = (__int64 *)a1[5];
    v19 = (struct IShellView *)(3 * v9);
    v46 = v19;
    v20 = *v18;
    v48 = *(_OWORD *)(*v18 + 8LL * (_QWORD)v19);
    v49 = *(_QWORD *)(v20 + 8LL * (_QWORD)v19 + 16);
    v21 = RecoveredViewInfo::RecoveredViewInfo(
            (RecoveredViewInfo *)&v54,
            (const struct RecoveredViewInfo *)((char *)a1[1]->Ptr + 16 * (__int64)a1[2]->Ptr));
    v22 = CreateWrapperForRecoveredView(v45, v21, &v48, v17, &hWnd);
    v14 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA89,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v22);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
      MsgRelease(v45);
      goto LABEL_49;
    }
    v23 = *a1 + 35;
    AcquireSRWLockExclusive(v23);
    v47 = v23;
    v24 = hWnd;
    (*(void (__fastcall **)(HWND, _QWORD, __int64))(*(_QWORD *)hWnd + 792LL))(
      hWnd,
      *((_QWORD *)a1[5]->Ptr + (_QWORD)v19),
      1LL);
    v26 = *a1 + 48;
    v27 = (*a1)[49].Ptr;
    if ( v27 == (*a1)[51].Ptr )
    {
      v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&(*a1)[48],
              (unsigned __int64)v27 + 1,
              v25);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
        if ( v23 )
          ReleaseSRWLockExclusive(v23);
        goto LABEL_20;
      }
    }
    v28 = (HWND *)((char *)v26->Ptr + 8 * (__int64)v26[1].Ptr++);
    if ( v28 )
    {
      *v28 = 0LL;
      if ( v28 != &hWnd )
      {
        *v28 = v24;
        hWnd = 0LL;
      }
    }
    if ( v23 )
      ReleaseSRWLockExclusive(v23);
    v67 = *((_DWORD *)a1[5]->Ptr + 2 * (_QWORD)v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    MsgRelease(v45);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA81,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_49:
  ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(&v69, &v68, &v67);
  if ( v6 )
  {
    v41 = v50;
    v42 = v51;
    ViewManagerBridge::CloseViewForScenario(
      v51[62].Ptr,
      *((unsigned int *)v50->Ptr + 2 * v7 + 2),
      *((_QWORD *)v50->Ptr + v7),
      2LL);
    v43 = *((_DWORD *)v41->Ptr + 2 * v7 + 3);
    if ( v43 )
      ViewManagerBridge::CloseServerWindow((ViewManagerBridge *)v42[62].Ptr, v43);
  }
  return (unsigned int)v14;
}
