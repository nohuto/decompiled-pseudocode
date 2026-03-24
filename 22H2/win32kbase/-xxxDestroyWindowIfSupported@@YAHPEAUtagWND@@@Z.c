/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C009DF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0256738 )
    v3 = qword_1C0256738();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256740 )
    return (unsigned int)qword_1C0256740(a1);
  return v1;
}
