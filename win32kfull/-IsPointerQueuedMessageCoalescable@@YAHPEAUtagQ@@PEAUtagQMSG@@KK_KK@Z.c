/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01E9C6C
 * Callers:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C0149100 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C003855C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int FrameIdFromPointerMsgId; // eax

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 4);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v8 + 24);
    if ( (_DWORD)v9 != 512 )
      goto LABEL_14;
    v10 = *(_DWORD *)(v8 + 120);
    switch ( v10 )
    {
      case 4:
        v11 = a6 == 2;
        goto LABEL_12;
      case 8:
        v11 = a6 == 3;
        goto LABEL_12;
      case 16:
        v11 = a6 == 5;
LABEL_12:
        if ( v11 )
          goto LABEL_18;
        break;
    }
    if ( *(_DWORD *)(v8 + 124) == 4 )
      goto LABEL_18;
LABEL_14:
    if ( !(unsigned int)IsPointerInputMessageWithState(v9) )
      return 0LL;
    if ( *(_QWORD *)(v8 + 40) == a5 )
      return 1LL;
    v13 = SGDGetUserSessionState(v12);
    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                *(CTouchProcessor **)(v13 + 3424),
                                *(_QWORD *)(v8 + 40));
    if ( FrameIdFromPointerMsgId != a4 && FrameIdFromPointerMsgId != a3 )
      return 0LL;
LABEL_18:
    v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
      return 0LL;
  }
}
