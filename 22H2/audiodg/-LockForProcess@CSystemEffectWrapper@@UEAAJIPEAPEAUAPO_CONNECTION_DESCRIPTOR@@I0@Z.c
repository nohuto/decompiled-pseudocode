/*
 * XREFs of ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140052E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140052848 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::LockForProcess(
        CSystemEffectWrapper *this,
        __int64 a2,
        struct APO_CONNECTION_DESCRIPTOR **a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, struct APO_CONNECTION_DESCRIPTOR **))(**((_QWORD **)this + 18)
                                                                                           + 24LL))(
             *((_QWORD *)this + 18),
             a2,
             a3);
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)this + 52, 1);
  return result;
}
