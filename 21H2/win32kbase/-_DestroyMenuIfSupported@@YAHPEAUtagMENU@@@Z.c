/*
 * XREFs of ?_DestroyMenuIfSupported@@YAHPEAUtagMENU@@@Z @ 0x1C00D0460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C029C488 && (int)qword_1C029C488() >= 0 && qword_1C029C490 )
    return (unsigned int)qword_1C029C490(a1);
  return v1;
}
