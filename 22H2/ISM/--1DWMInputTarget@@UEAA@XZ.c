/*
 * XREFs of ??1DWMInputTarget@@UEAA@XZ @ 0x1800B6520
 * Callers:
 *     ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x1800B65B8 (--_GDWMInputTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputTarget::~DWMInputTarget(DWMInputTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)this + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
  *((_QWORD *)this + 6) = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 7) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 18) = 0;
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 7) = &RefCountedObject::`vftable';
}
