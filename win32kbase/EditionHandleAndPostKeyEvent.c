/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00BEA34
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C023EAE8 (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C02D78F0 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C02D78F0)(a1);
  else
    return 0LL;
}
