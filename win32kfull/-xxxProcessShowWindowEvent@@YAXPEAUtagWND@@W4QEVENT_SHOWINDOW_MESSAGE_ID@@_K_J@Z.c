/*
 * XREFs of ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C0014C34
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F3F38 (WPUpdateCheckPointSettings.c)
 */

__int64 __fastcall xxxProcessShowWindowEvent(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v5; // ebp
  __int64 v7; // r8
  __int64 result; // rax

  v5 = a2;
  v7 = a4 & 0x10000;
  if ( (_DWORD)a2 == 1 )
    v7 = a3 | (unsigned int)v7;
  LOBYTE(a2) = a4;
  result = xxxShowWindowEx(a1, a2, v7);
  if ( !v5 && (a3 & 4) != 0 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
