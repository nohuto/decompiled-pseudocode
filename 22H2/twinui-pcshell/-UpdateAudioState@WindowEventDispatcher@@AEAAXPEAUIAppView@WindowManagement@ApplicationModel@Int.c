/*
 * XREFs of ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1800371E0
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001CF20 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180038DA0 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowEventDispatcher::UpdateAudioState(__int64 a1, __int64 *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  PCWSTR StringRawBuffer; // rdi
  __int64 v15; // rbx
  int v16; // [rsp+20h] [rbp-38h]
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 496) )
    return;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*a2 + 112))(a2, v17);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB1B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6,
      v16);
    goto LABEL_11;
  }
  v7 = *a2;
  v20 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 56))(a2, &v20);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xB1E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v8,
      v16);
    goto LABEL_12;
  }
  string = 0LL;
  v10 = v20;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v12 = v11(v10, &string);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0xB21,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v12,
      v16);
    JUMPOUT(0x180189000LL);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v15 = *(_QWORD *)(a1 + 328);
  v17[1] = v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    (*(void (__fastcall **)(__int64, PCWSTR, _QWORD, _QWORD, int))(*(_QWORD *)v15 + 24LL))(
      v15,
      StringRawBuffer,
      v17[0],
      0LL,
      a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
}
