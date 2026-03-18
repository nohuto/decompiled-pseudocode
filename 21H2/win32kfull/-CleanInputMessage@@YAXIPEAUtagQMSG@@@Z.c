/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0117934
 * Callers:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C0105CE0 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
}
