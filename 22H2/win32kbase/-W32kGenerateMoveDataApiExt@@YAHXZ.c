/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C014AAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C0255230 )
    v1 = qword_1C0255230();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0255238 )
    return (unsigned int)qword_1C0255238();
  return v0;
}
