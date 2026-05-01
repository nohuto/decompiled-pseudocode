/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x1803E60E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z @ 0x1803E6C10 (-NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@In.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int v13; // eax
  __int64 *v14; // rax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 120);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  v20[1] = (__int64)v8;
  v10 = *(_QWORD *)(a1 + 80);
  if ( !v10 )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_16;
  }
  v12 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    v15 = VirtualDesktopController::NavDirFromFocusNavigationDirection(v9, a3);
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 64LL))(v10, v12, v15, &v23);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(
              *(_QWORD *)(a1 + 96),
              v23,
              a4);
      v11 = v16;
      if ( v16 >= 0 )
        goto LABEL_14;
      v17 = 227LL;
    }
    else
    {
      if ( v16 == -2147316575 )
      {
        v11 = 0;
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_15;
      }
      v17 = 224LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_14;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v13 = (**a2)(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v22);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v20);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v19, v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v10 = *(_QWORD *)(a1 + 80);
    v12 = v19;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_16:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v11;
}
