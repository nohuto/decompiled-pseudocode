/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1801C4A58
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C22A0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBF1C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r12d
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v11; // rcx
  CCriticalFailureHandler *v12; // rcx
  unsigned int i; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, GUID *); // rdi
  CCriticalFailureHandler *v16; // rcx
  unsigned __int64 *v18; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-28h]
  unsigned __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
  v21[1] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v22 = v7;
  v21[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 72) + 32LL))(
    *((_QWORD *)this + 72),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    v21);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v21[0]);
  v23 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v8, &v23);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v9 = v23;
  }
  if ( v9 >= 0 )
    goto LABEL_8;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      &v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1412u,
      v18,
      v19);
    v9 = v23;
  }
  if ( v9 >= 0 )
  {
LABEL_8:
    v25 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &IID_IImmersiveShellCreationBehavior,
           &GUID_ac46f07f_3544_48d9_b2d3_f57b388ae361,
           &v25);
    v23 = v9;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, &v23);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v9 = v23;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v23,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1416u,
        v18,
        v19);
      v9 = v23;
    }
    if ( v9 >= 0 )
    {
LABEL_15:
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v25 + 72LL))(v25, 0LL, &v24);
      v23 = v9;
      for ( i = 0; ; ++i )
      {
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v12, &v23);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v23;
        }
        if ( v9 < 0 )
        {
          if ( v9 != -2147024882 && v9 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v12,
              &v23,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x141Bu,
              v18,
              v19);
            v9 = v23;
          }
          if ( v9 < 0 )
            break;
        }
        if ( i >= v24 )
          break;
        v20 = 0LL;
        v14 = v25;
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *))(*(_QWORD *)v25 + 80LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        v18 = &v20;
        v9 = v15(v14, 0LL, i, &GUID_00000000_0000_0000_c000_000000000046);
        v23 = v9;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v16, &v23);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v9 = v23;
        }
        if ( v9 >= 0 )
          goto LABEL_31;
        if ( v9 != -2147024882 && v9 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v16,
            &v23,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1424u,
            &v20,
            v19);
          v9 = v23;
        }
        if ( v9 >= 0 )
        {
LABEL_31:
          v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned __int64))(*(_QWORD *)a3 + 32LL))(a3, v20);
          v23 = v9;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
