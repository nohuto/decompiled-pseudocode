/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C00755E4
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0075720 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0075960 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00810C4 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0075634 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v4, a2);
}
