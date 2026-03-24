/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C011A974
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C011A428 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C01359B4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C0041238 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // ecx

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    v4 = *(_DWORD *)(result + 48);
    if ( (a2 & 1) != 0 )
      v4 |= 1u;
    if ( (a2 & 2) != 0 )
      v5 = v4 | 2;
    else
      v5 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(result + 48) = v5;
  }
  return result;
}
