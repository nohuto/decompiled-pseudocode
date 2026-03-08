/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C00B9910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02D5730 && (int)qword_1C02D5730() >= 0 && qword_1C02D5738 )
    return (unsigned int)qword_1C02D5738();
  return v0;
}
