/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C01F3F38
 * Callers:
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C0014C34 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C01009F4 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(struct tagWND *a1, char a2)
{
  __int64 result; // rax
  int *v4; // rcx
  int v5; // eax

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    v4 = (int *)(result + 48);
    if ( (a2 & 1) != 0 )
      *v4 |= 1u;
    v5 = *v4;
    if ( (a2 & 2) != 0 )
      result = v5 | 2u;
    else
      result = v5 & 0xFFFFFFFD;
    *v4 = result;
  }
  return result;
}
