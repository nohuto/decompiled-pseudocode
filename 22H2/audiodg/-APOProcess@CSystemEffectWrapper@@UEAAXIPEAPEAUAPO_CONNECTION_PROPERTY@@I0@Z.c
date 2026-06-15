/*
 * XREFs of ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x1400523D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140052848 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

void __fastcall CSystemEffectWrapper::APOProcess(
        CSystemEffectWrapper *this,
        __int64 a2,
        struct APO_CONNECTION_PROPERTY **a3)
{
  (*(void (__fastcall **)(_QWORD, __int64, struct APO_CONNECTION_PROPERTY **))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
}
