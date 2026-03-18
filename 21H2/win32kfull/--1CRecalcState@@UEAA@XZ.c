/*
 * XREFs of ??1CRecalcState@@UEAA@XZ @ 0x1C0110CF0
 * Callers:
 *     ??_GCRDPRecalcState@@UEAAPEAXI@Z @ 0x1C0110CB0 (--_GCRDPRecalcState@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRecalcState::~CRecalcState(CRecalcState *this)
{
  volatile signed __int32 *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CRecalcState::`vftable';
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    Win32FreePool(v2);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v3 )
    (**v3)(v3, 1LL);
}
