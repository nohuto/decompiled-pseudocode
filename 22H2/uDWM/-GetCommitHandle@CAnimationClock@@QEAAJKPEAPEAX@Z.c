/*
 * XREFs of ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800B9FB8
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BAAB0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012378 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002D82C (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002DB0C (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007F55C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099628 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800B9F8C (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800BA528 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAnimationClock::GetCommitHandle(CAnimationClock *this, unsigned int a2, void **a3)
{
  unsigned int v4; // esi
  struct _GUID v7; // xmm0
  int SynchronizationObject; // eax
  __int64 v9; // rdx
  unsigned int LastError; // eax
  void *v11; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  const char *v14; // r9
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-188h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-178h] BYREF
  _QWORD v18[40]; // [rsp+60h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"GetCommitHandle");
  v7 = *(struct _GUID *)((char *)this + 120);
  v18[0] = &AnimationClockLoggingTelemetry::GetCommitHandle::`vftable';
  v17 = v7;
  AnimationClockLoggingTelemetry::GetCommitHandle::StartActivity(
    (AnimationClockLoggingTelemetry::GetCommitHandle *)v18,
    &v17);
  if ( (unsigned int)(*((_DWORD *)this + 20) - 1) > 1 )
    goto LABEL_13;
  if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    || (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 14,
          0LL),
        SynchronizationObject = NtDCompositionCreateSynchronizationObject((char *)this + 112),
        SynchronizationObject >= 0) )
  {
    if ( !a2 || a2 == GetCurrentProcessId() )
    {
      v11 = (void *)*((_QWORD *)this + 14);
      CurrentProcess = GetCurrentProcess();
      v13 = GetCurrentProcess();
      if ( !DuplicateHandle(v13, v11, CurrentProcess, a3, 0, 0, 2u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27B,
                      (__int64)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                      v14);
        goto LABEL_12;
      }
    }
    else
    {
      SynchronizationObject = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)this + 14), a2, a3);
      if ( SynchronizationObject < 0 )
      {
        v9 = 631LL;
        goto LABEL_9;
      }
    }
LABEL_13:
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, 0);
    goto LABEL_14;
  }
  v9 = 623LL;
LABEL_9:
  LastError = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)v9,
                (__int64)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                (const char *)(unsigned int)SynchronizationObject);
LABEL_12:
  v4 = LastError;
LABEL_14:
  AnimationClockLoggingTelemetry::GetCommitHandle::~GetCommitHandle((AnimationClockLoggingTelemetry::GetCommitHandle *)v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v4;
}
