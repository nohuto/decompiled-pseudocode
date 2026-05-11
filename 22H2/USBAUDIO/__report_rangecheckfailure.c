/*
 * XREFs of __report_rangecheckfailure @ 0x1C0011C90
 * Callers:
 *     IsClassDriverOnly @ 0x1C002253C (IsClassDriverOnly.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
