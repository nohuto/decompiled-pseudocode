/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00D0810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( !qword_1C02D55D0 || (int)qword_1C02D55D0() < 0 )
    return 0LL;
  if ( qword_1C02D55D8 )
    return (unsigned int)qword_1C02D55D8();
  return v1;
}
