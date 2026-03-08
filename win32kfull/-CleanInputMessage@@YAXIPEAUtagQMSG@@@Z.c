/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00E66E8
 * Callers:
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C00DE9B0 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01B1740 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
}
