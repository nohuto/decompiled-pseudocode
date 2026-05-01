/*
 * XREFs of ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1803C3464
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1803BD100 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x1803B40F8 (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803C37A4 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803C3908 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApplication(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  StubImmersiveApplication *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  const unsigned __int16 *v17; // [rsp+88h] [rbp+38h] BYREF
  int v18; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF

  v17 = a2;
  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v14 = 0LL;
    v6 = ppv[0];
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v8 = v7(v6, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, &v14);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 2231LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_21;
    }
    if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v14 + 56LL))(v14, a2, &v18) >= 0
      && (unsigned int)(v18 - 1) <= 3 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(
              &v13,
              (__int64 *)&v17);
      v5 = v10;
      if ( v10 < 0 )
      {
        v11 = 2239LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_22;
      }
      v19 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, StubImmersiveApplication *, __int64, int *))(*(_QWORD *)v14 + 96LL))(
              v14,
              v13,
              2LL,
              &v19);
      v5 = v10;
      if ( v10 < 0 && v10 != -805306193 && v10 != -2147319765 )
      {
        v11 = 2251LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    }
    v8 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
    v5 = v8;
    if ( v8 >= 0 )
    {
      TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)this);
      AcquireSRWLockExclusive(this + 85);
      LODWORD(this[84].Ptr) = 0;
      BYTE4(this[84].Ptr) = 0;
      if ( this != (RTL_SRWLOCK *)-680LL )
        ReleaseSRWLockExclusive(this + 85);
      LODWORD(this[90].Ptr) = 0;
      HIDWORD(this[90].Ptr) = 0;
      v5 = 0;
      goto LABEL_21;
    }
    v9 = 2256LL;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B4,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v5;
}
