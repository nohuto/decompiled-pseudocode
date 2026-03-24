/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0121FC8
 * Callers:
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C0117790 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01DCB40 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0227C40 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2, __int64 a3, __int64 a4)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL, a3, a4);
}
