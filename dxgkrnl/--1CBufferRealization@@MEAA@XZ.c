/*
 * XREFs of ??1CBufferRealization@@MEAA@XZ @ 0x1C000BB70
 * Callers:
 *     ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C000BAA0 (--_ECBufferRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBufferRealization::~CBufferRealization(CBufferRealization *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CBufferRealization::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
  if ( v2 )
    (**v2)(v2);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
