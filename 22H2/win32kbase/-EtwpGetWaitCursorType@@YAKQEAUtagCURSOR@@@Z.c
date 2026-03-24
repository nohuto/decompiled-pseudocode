/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C0121600
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C009FB70 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C024BF78 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C024D2E0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C024DDA8 )
    return 116LL;
  return result;
}
