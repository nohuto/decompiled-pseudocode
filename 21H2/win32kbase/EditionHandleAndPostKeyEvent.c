/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C004D648
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C004CE34 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C0258520 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0258520)(a1);
  else
    return 0LL;
}
