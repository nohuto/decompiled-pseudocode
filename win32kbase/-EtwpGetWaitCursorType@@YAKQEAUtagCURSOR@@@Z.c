/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00EDB70
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C00BED80 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C02CC978 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C02CDCE0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C02CE7A8 )
    return 116LL;
  return result;
}
