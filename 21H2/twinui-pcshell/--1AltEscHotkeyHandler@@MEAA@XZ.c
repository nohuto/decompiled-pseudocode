/*
 * XREFs of ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804066B4
 * Callers:
 *     ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x1804067A0 (--_GAltEscHotkeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1800D5788 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C868C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AltEscHotkeyHandler::~AltEscHotkeyHandler(AltEscHotkeyHandler *this)
{
  const char *v2; // r9
  const char *v3; // r9
  HWND v4; // rcx
  volatile int *v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>'};
  *((_QWORD *)this + 1) = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 6) = &AltEscHotkeyHandler::`vftable'{for `CImpWorkerWndProc'};
  if ( !UnregisterHotKey(*((HWND *)this + 11), 58) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v2);
  if ( !UnregisterHotKey(*((HWND *)this + 11), 59) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  v4 = (HWND)*((_QWORD *)this + 11);
  if ( v4 )
    DestroyWindow(v4);
  CImpWorkerWndProc::~CImpWorkerWndProc((AltEscHotkeyHandler *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v5);
}
