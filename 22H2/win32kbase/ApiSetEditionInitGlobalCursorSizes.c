/*
 * XREFs of ApiSetEditionInitGlobalCursorSizes @ 0x1C00C98E0
 * Callers:
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionInitGlobalCursorSizes()
{
  unsigned int v0; // ebx

  v0 = 1;
  if ( qword_1C0295B38 && (int)qword_1C0295B38() >= 0 )
  {
    if ( qword_1C0295B40 )
      return (unsigned int)qword_1C0295B40();
    else
      return 0;
  }
  return v0;
}
