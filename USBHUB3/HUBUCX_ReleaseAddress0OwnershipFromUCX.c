/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C0027850
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry @ 0x1C00209A0 (HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 440LL))(*(_QWORD *)(*a1 + 248LL), a1[3]);
}
