/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C0196110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02D57B0 && (int)qword_1C02D57B0() >= 0 && qword_1C02D57B8 )
    return (unsigned int)qword_1C02D57B8();
  return v0;
}
