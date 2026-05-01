/*
 * XREFs of ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18031C848
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18031DA30 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CBA4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180310370 (--1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x180310A20 (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 *     ?StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180315E58 (-StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180316388 (-Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x18031ACD0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_PerformCrashRecovery(RTL_SRWLOCK *this)
{
  void *v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  PVOID Ptr; // rcx
  bool v6; // zf
  int v7; // r8d
  unsigned __int64 v8; // rbx
  int v9; // eax
  char *v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int pvData; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v15; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 pcbData; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pdwType[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v19[2]; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  LPARAM lParam; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  RTL_SRWLOCK *v27[8]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v28[40]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"CrashRecovery");
  v28[0] = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  ViewManagerInteropTraceLogging::CrashRecovery::StartActivity((ViewManagerInteropTraceLogging::CrashRecovery *)v28);
  lParam = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v3 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
         (__int64)&lParam,
         0x32uLL,
         v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA47,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_22;
  }
  EnumWindows(ViewEventDispatcher::s_RecoverWindowsProc, (LPARAM)&lParam);
  v26 = v23;
  pv = 0LL;
  *(_QWORD *)v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Ptr = this[62].Ptr;
  pv = (LPVOID)*((_QWORD *)Ptr + 19);
  v20 = *((_QWORD *)Ptr + 21);
  *(_QWORD *)v19 = *((_QWORD *)Ptr + 20);
  v21 = *((_QWORD *)Ptr + 22);
  *((_QWORD *)Ptr + 19) = 0LL;
  *((_QWORD *)Ptr + 21) = 0LL;
  *((_QWORD *)Ptr + 20) = 0LL;
  *((_QWORD *)Ptr + 22) = 0LL;
  v15 = 0;
  pdwType[0] = 0;
  LODWORD(pcbData) = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
          L"DisableAppRecoveryAfterShellRestart",
          0x10000012u,
          pdwType,
          &pvData,
          (LPDWORD)&pcbData) )
  {
    if ( pdwType[0] != 4 )
    {
      if ( (_DWORD)pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_11;
      v6 = (_WORD)pvData == 49;
      goto LABEL_10;
    }
    v6 = pvData == 1;
    if ( pvData <= 1 )
LABEL_10:
      v15 = v6;
  }
LABEL_11:
  v7 = 0;
  pdwType[1] = 0;
  v8 = *(_QWORD *)v19;
  pcbData = 0LL;
  if ( *(_QWORD *)v19 )
  {
    do
    {
      v27[0] = this;
      v27[1] = (RTL_SRWLOCK *)&pv;
      v27[2] = (RTL_SRWLOCK *)&pcbData;
      v27[3] = (RTL_SRWLOCK *)&v15;
      v27[4] = (RTL_SRWLOCK *)&v26;
      v27[5] = (RTL_SRWLOCK *)&lParam;
      v27[6] = (RTL_SRWLOCK *)&pdwType[1];
      v9 = lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()(v27);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xACC,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      ++pcbData;
    }
    while ( pcbData < v8 );
    v7 = pdwType[1];
  }
  ViewManagerInteropTraceLogging::CrashRecovery::Stop((ViewManagerInteropTraceLogging::CrashRecovery *)v28, v8, v7);
  v4 = 0;
  v10 = (char *)pv;
  if ( pv )
  {
    v11 = 0LL;
    if ( *(_QWORD *)v19 )
    {
      v12 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10[v12]);
        ++v11;
        v12 += 16LL;
        v10 = (char *)pv;
      }
      while ( v11 < *(_QWORD *)v19 );
    }
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  *(_QWORD *)v19 = 0LL;
  v21 = 0LL;
LABEL_22:
  if ( lParam )
  {
    CoTaskMemFree((LPVOID)lParam);
    lParam = 0LL;
  }
  v23 = 0LL;
  v25 = 0LL;
  ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery((ViewManagerInteropTraceLogging::CrashRecovery *)v28);
  return v4;
}
