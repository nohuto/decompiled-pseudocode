/*
 * XREFs of ?_DestroyMenuIfSupported@@YAHPEAUtagMENU@@@Z @ 0x1C00C0E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0256748 )
    v3 = qword_1C0256748();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256750 )
    return (unsigned int)qword_1C0256750(a1);
  return v1;
}
