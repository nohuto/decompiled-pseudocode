/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x180135A9C
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x180135B7C (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121CC4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 213) = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 212);
  if ( *((_BYTE *)this + 1692) )
    InjectionDevice::Remove((MouseProcessor *)((char *)this + 136));
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 14);
  NonPointerProcessor::~NonPointerProcessor((MouseProcessor *)((char *)this + 16));
}
