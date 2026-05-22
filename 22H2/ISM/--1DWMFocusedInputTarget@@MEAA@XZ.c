/*
 * XREFs of ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x18001B38C
 * Callers:
 *     ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x18001B344 (--_GDWMFocusedInputTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMFocusedInputTarget::~DWMFocusedInputTarget(DWMFocusedInputTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 4) = &DWMFocusedInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 5) = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
}
