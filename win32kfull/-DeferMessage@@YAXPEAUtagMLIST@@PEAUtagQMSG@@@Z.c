/*
 * XREFs of ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000B10C
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C000AF98 (DeferMessagesOnQueue.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00CDE04 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferMessage(struct tagMLIST *a1, struct tagQMSG *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    *v2 = a2;
    *((_QWORD *)a2 + 1) = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = a2;
  }
  else
  {
    *((_QWORD *)a1 + 3) = a2;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  *(_QWORD *)a2 = 0LL;
}
