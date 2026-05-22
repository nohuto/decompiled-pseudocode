/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x1801367B4
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x18004F2F6 (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x18011F891 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011F9D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180135A9C (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180136824 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801882F4 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801886EC (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x18018873C (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x180189548 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x1801994AC (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
