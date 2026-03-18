/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C003D918
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C003D6FC (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C029D138 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C029D138)(a1);
  else
    return 0LL;
}
