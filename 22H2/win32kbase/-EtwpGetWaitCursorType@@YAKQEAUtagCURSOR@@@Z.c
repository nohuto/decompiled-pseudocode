/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00DEF0E
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C00AFBD0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C028B9C8 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C028CD30 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C028D7F8 )
    return 116LL;
  return result;
}
