/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00C3370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( !qword_1C029ADD0 || (int)qword_1C029ADD0() < 0 )
    return 0LL;
  if ( qword_1C029ADD8 )
    return (unsigned int)qword_1C029ADD8(v2);
  return v1;
}
