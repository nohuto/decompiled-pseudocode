/*
 * XREFs of ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C01EA5F0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01AA1C4 (ChangeComposableCursor.c)
 */

void __fastcall EnableDwmSwCursorMoveSize(int *a1)
{
  int v1; // ebx

  v1 = 0;
  if ( !gProtocolType && !gbRemoteFxSession )
  {
    v1 = 1;
    ChangeComposableCursor(1LL);
  }
  *a1 = v1;
}
