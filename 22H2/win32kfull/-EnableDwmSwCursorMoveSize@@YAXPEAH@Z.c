/*
 * XREFs of ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020A824
 * Callers:
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01D3CFC (ChangeComposableCursor.c)
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
