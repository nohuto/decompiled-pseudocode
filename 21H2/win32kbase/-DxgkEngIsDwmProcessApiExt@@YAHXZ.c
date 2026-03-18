/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C00AC350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C029AF30 && (int)qword_1C029AF30() >= 0 && qword_1C029AF38 )
    return (unsigned int)qword_1C029AF38();
  return v0;
}
