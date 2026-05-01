/*
 * XREFs of _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator() @ 0x1800CF4C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___::Run @ 0x1800D1BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180026620 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049C48 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180099544 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BB284 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C09E4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C3970 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C5F48 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C5FE0 (-ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator()(_QWORD *a1)
{
  _QWORD *v2; // r12
  std::_Ref_count_base *v3; // rcx
  struct KBViewInfo *v4; // r8
  struct KBViewInfo *v5; // r15
  std::_Ref_count_base *v6; // r14
  unsigned int v7; // ebx
  char v8; // si
  int v9; // eax
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rax
  struct IUnknown ***v13; // rbx
  struct IUnknown ***v14; // r12
  int v15; // eax
  _BYTE v17[128]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IInspectable *v19; // [rsp+D0h] [rbp+67h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp+77h] BYREF

  v2 = a1 + 5;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 5),
    (wil::ActivityThreadWatcher *)v17);
  v3 = (std::_Ref_count_base *)a1[4];
  v4 = 0LL;
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    v4 = (struct KBViewInfo *)a1[3];
    v5 = v4;
    v6 = (std::_Ref_count_base *)a1[4];
  }
  else
  {
    v6 = 0LL;
    v5 = 0LL;
  }
  if ( !v4 )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
    v7 = 0;
    goto LABEL_28;
  }
  v8 = 1;
  v19 = 0LL;
  v9 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v19);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB97,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  if ( v19 )
  {
    v10 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded((TouchKeyboardExperienceManager *)a1[2], v5);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA0,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_24;
    }
    Microsoft::WRL::Wrappers::SRWLock::LockShared(a1[2] + 416LL, &SRWLock);
    v11 = 0;
    v12 = a1[2];
    v13 = *(struct IUnknown ****)(v12 + 424);
    if ( v13 != *(struct IUnknown ****)(v12 + 432) )
    {
      v14 = *(struct IUnknown ****)(v12 + 432);
      do
      {
        if ( (unsigned int)SHIsSameObject(**v13, *(struct IUnknown **)v5) )
          ++v11;
        v13 += 2;
      }
      while ( v13 != v14 );
      v2 = a1 + 5;
      if ( v11 > 1 )
        TouchKeyboardExperienceTelemetryLogger::ViewInfoDuplicated();
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    v8 = 0;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0LL);
  v7 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  if ( v8 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 392LL))(*a1, 0LL);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB92,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
LABEL_28:
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  return v7;
}
