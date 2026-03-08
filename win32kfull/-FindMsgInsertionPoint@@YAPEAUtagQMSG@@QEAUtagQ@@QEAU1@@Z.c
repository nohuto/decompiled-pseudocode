/*
 * XREFs of ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C014331C
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C00385AC (IsPointerInputClientMessage.c)
 */

struct tagQMSG *__fastcall FindMsgInsertionPoint(struct tagQ *const a1, struct tagQMSG *const a2)
{
  __int64 *i; // r14
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  CTouchProcessor *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int FrameIdFromPointerMsgId; // ebx

  for ( i = (__int64 *)*((_QWORD *)a1 + 3); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 12) > *((_DWORD *)a2 + 12) )
      break;
    if ( IsPointerInputClientMessage(*((_DWORD *)i + 6))
      && IsPointerInputClientMessage(*((_DWORD *)a2 + 6))
      && v4 != 595
      && (_DWORD)v5 != 595 )
    {
      v6 = SGDGetUserSessionState(v5);
      v7 = i[5];
      v8 = *(CTouchProcessor **)(v6 + 3424);
      v10 = SGDGetUserSessionState(v9);
      FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                  *(CTouchProcessor **)(v10 + 3424),
                                  *((_QWORD *)a2 + 5));
      if ( CTouchProcessor::GetFrameIdFromPointerMsgId(v8, v7) > FrameIdFromPointerMsgId )
        break;
    }
  }
  return (struct tagQMSG *)i;
}
