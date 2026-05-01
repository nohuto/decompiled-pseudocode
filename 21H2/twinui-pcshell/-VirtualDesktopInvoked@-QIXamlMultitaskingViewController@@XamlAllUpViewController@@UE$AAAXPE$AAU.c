/*
 * XREFs of ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x18038BDB4
 * Callers:
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x18016CA70 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1803869C8 (CreationThreadDispatcher--RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _VirtualDesktopInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUIVirtualDesktop_Multitasking_ComposableShell_Internal_Windows__0_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 WeakReference; // rax
  __int64 v7; // r14
  bool v8; // bl
  __int64 v9; // rdi
  int v10; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  bool v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  bool v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v7 = WeakReference;
  v13 = WeakReference;
  v8 = a2 == a3;
  v14 = v8;
  v9 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)v11 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v12 = v8;
  v10 = CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___(v9, v11);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      205LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
