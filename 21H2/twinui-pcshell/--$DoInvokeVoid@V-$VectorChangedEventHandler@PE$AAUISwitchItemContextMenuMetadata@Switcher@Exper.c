/*
 * XREFs of ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x180385E1C
 * Callers:
 *     ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x1803861D4 (--$InvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180090D0A (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180090D46 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall Platform::EventSource::DoInvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,_lambda_0185f2fcaf29182e01e5e20f55c595fb_>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 *v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v18; // [rsp+30h] [rbp-58h]
  _QWORD **v19; // [rsp+38h] [rbp-50h]
  _OWORD v20[3]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a3;
  v18 = 0LL;
  v20[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v20, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v18 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v16) = TargetArraySize;
    for ( i = 0; ; ++i )
    {
      if ( i >= TargetArraySize )
        goto LABEL_10;
      v17 = 0LL;
      v19 = 0LL;
      TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                      TargetArray,
                                      (void *)i,
                                      (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                      &v17,
                                      v16);
      v19 = TargetArrayEvent;
      v12 = v3[1];
      v13 = *v3;
      if ( *TargetArrayEvent == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
        break;
      v14 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(TargetArrayEvent, v13, v12);
      if ( v14 >= 0 )
        goto LABEL_6;
      __abi_WinRTraiseException(v14);
      v3 = a3;
      TargetArray = v18;
      TargetArraySize = (unsigned int)v16;
LABEL_9:
      ;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(TargetArrayEvent[37], v13, v12);
LABEL_6:
    ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
    goto LABEL_9;
  }
LABEL_10:
  if ( TargetArray )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)TargetArray + 16LL))(TargetArray);
  v15 = v3[1];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
}
