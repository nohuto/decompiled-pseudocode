/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C014A760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C0256230 )
    v1 = qword_1C0256230();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0256238 )
    return (unsigned int)qword_1C0256238();
  return v0;
}
