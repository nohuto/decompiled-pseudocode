/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18000E77C
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18000E0C0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801E44B0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x1801E4E10 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007F418 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_86e5fad454e1f42def22d3aa1faf1060__&_ @ 0x180097EF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_86e5fad454e1f42def22d3aa1faf1060__-_.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x1801E3BA8 (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBF1C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v5; // rdi
  int v6; // r14d
  char v7; // r15
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int UniqueContext; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  CCriticalFailureHandler *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-38h]
  _QWORD v22[6]; // [rsp+30h] [rbp-30h] BYREF
  CCriticalFailureHandler *v23; // [rsp+A0h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a2;
  *a3 = 0LL;
  LODWORD(v23) = -2147023728;
  v25 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v7 = 1;
    *v5 = 1;
    v8 = 1;
  }
  if ( v8 == 2 )
  {
    LODWORD(v23) = 0;
    v9 = *(_QWORD *)(a1 + 176);
    v10 = v25;
    if ( v25 != v9 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(a1 + 176));
        v10 = v25;
      }
      v26 = v10;
      v25 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v7 )
  {
    if ( v6 != 1 )
      goto LABEL_10;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v19 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v23) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v24 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v19, (int *)&v23);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v19 = (unsigned int)v23;
      }
      if ( (v19 & 0x80000000) == 0LL )
        goto LABEL_29;
      if ( (_DWORD)v19 != -2147024882 && (_DWORD)v19 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v19,
          (int *)&v23,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4E3u,
          v20,
          v21);
        LODWORD(v19) = (_DWORD)v23;
      }
    }
    if ( (v19 & 0x80000000) != 0LL )
    {
LABEL_30:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_10;
    }
LABEL_29:
    Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=(&v25, a1 + 176);
    goto LABEL_30;
  }
  v26 = a1;
  v22[0] = &v23;
  v22[1] = a1;
  v22[2] = &v24;
  v22[3] = &v26;
  v22[4] = &v25;
  UniqueContext = SHTaskPoolGetUniqueContext();
  v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_86e5fad454e1f42def22d3aa1faf1060____(
          v16,
          v15,
          UniqueContext,
          v22);
  if ( v17 < 0 )
  {
    LODWORD(v23) = v17;
    if ( !v24 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v18, (int *)&v23);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v17 = (int)v23;
      }
      if ( v17 < 0 && v17 != -2147024882 && v17 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v18,
          (int *)&v23,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4D1u,
          v20,
          v21);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v26 + 196) = 0;
    WakeByAddressAll((PVOID)(v26 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_10:
  v11 = v25;
  v25 = 0LL;
  *a3 = v11;
  v12 = (unsigned int)v23;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
  return v12;
}
