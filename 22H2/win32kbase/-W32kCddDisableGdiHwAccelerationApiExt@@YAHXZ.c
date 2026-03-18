/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C00B4C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0294610 && (int)qword_1C0294610() >= 0 && qword_1C0294618 )
    return (unsigned int)qword_1C0294618();
  return v0;
}
