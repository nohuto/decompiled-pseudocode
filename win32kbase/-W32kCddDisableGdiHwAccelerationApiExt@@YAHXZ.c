/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C00C3990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02D5780 && (int)qword_1C02D5780() >= 0 && qword_1C02D5788 )
    return (unsigned int)qword_1C02D5788();
  return v0;
}
