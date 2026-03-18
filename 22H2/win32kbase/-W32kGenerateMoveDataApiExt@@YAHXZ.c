/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C0169380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0294640 && (int)qword_1C0294640() >= 0 && qword_1C0294648 )
    return (unsigned int)qword_1C0294648();
  return v0;
}
