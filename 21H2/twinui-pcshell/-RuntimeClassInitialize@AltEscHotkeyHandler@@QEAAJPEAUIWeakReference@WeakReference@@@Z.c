/*
 * XREFs of ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x18040692C
 * Callers:
 *     ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x180406524 (--$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800820F0 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5858 (-OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall AltEscHotkeyHandler::RuntimeClassInitialize(AltEscHotkeyHandler *this, struct IWeakReference *a2)
{
  HWND v3; // rdx
  __int64 v4; // rax
  HWND v5; // rcx
  const char *v7; // r9
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 12, (__int64)a2);
  v3 = (HWND)*((_QWORD *)this + 7);
  if ( !v3 )
  {
    if ( *((_BYTE *)this + 64) )
    {
      if ( *((_QWORD *)this + 10) && *((_QWORD *)this + 9) )
      {
        v4 = SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, (char *)this + 48);
        *((_QWORD *)this + 7) = v4;
        if ( v4 )
          CImpWorkerWndProc::OnWindowCreated((HANDLE *)this + 6);
      }
    }
    else
    {
      *((_QWORD *)this + 7) = SHCreateWorkerWindowW(
                                CImpWorkerWndProc::s_WndProc,
                                -3LL,
                                0LL,
                                0LL,
                                0LL,
                                (char *)this + 48);
    }
    v3 = (HWND)*((_QWORD *)this + 7);
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 11,
    v3);
  v5 = (HWND)*((_QWORD *)this + 11);
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  if ( !RegisterHotKey(v5, 58, 1u, 0x1Bu) )
  {
    v8 = 61LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
             v7);
  }
  if ( !RegisterHotKey(*((HWND *)this + 11), 59, 5u, 0x1Bu) )
  {
    v8 = 62LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
             v7);
  }
  return 0LL;
}
