/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( !qword_1C0294460 || (int)qword_1C0294460() < 0 )
    return 0LL;
  if ( qword_1C0294468 )
    return (unsigned int)qword_1C0294468();
  return v1;
}
