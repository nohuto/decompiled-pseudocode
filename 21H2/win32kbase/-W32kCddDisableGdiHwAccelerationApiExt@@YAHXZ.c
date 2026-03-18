/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C00B58F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C029AF80 && (int)qword_1C029AF80() >= 0 && qword_1C029AF88 )
    return (unsigned int)qword_1C029AF88();
  return v0;
}
