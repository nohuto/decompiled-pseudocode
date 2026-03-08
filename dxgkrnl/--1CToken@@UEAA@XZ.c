/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x1C0077C6C
 * Callers:
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x1C0077CD0 (--_GCToken@@UEAAPEAXI@Z.c)
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00786EC (--1CFlipToken@@MEAA@XZ.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C00890C0 (--1CFlipContentToken@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  bool v3; // zf

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  if ( v2 )
    (**v2)(v2);
  ObfDereferenceObject(*((PVOID *)this + 4));
  v3 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v3 )
    *((_DWORD *)this + 6) = 6;
}
