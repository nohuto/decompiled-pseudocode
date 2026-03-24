/*
 * XREFs of Win32AllocPoolWithPriority @ 0x1C0139A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolWithPriority(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax

  v4 = 0LL;
  if ( qword_1C0257D20 )
    v9 = qword_1C0257D20();
  else
    v9 = -1073741637;
  if ( v9 < 0 )
    return 0LL;
  if ( qword_1C0257D28 )
    return qword_1C0257D28(a1, a2, a3, a4);
  return v4;
}
